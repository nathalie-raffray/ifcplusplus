//             ______________________
//             ___  ____/__  __/__  /
//             __  /_   __  /  __  /
//             _  __/   _  /   _  /___
//             /_/      /_/    /_____/
// 
#pragma once


namespace ftl {

    //----------------------------------------------------------------------------------------------
    struct uuid;

} /*ftl*/

#ifdef _WINDOWS
#include <Rpc.h>

namespace std {

    //----------------------------------------------------------------------------------------------
    // Specialization of std::hash to be able to use uuid in hash maps.
    template<>
    struct hash<ftl::uuid>
    {
        size_t operator()(const ftl::uuid &_uuid) const noexcept
        {
            auto status = RPC_S_OK;
            return UuidHash(const_cast<UUID*>(reinterpret_cast<const UUID*>(&_uuid)), &status);
        }
    };

} /*std*/


namespace ftl {

    //----------------------------------------------------------------------------------------------
    bool operator !=(const uuid &lhs, const uuid &rhs);

    //----------------------------------------------------------------------------------------------
    struct uuid
    {
        //------------------------------------------------------------------------------------------
        // Internal representation of a 128 bits UUID.
        uint32_t data1 = 0;
        uint16_t data2 = 0;
        uint16_t data3 = 0;
        uint64_t data4 = 0;

        //------------------------------------------------------------------------------------------
        uuid() = default;

        //------------------------------------------------------------------------------------------
        explicit uuid(const std::string &uuidStr)
            : uuid(from_string(uuidStr))
        {}


        //------------------------------------------------------------------------------------------
        static uuid generate()
        {
            auto _uuid = uuid{};
            const auto status = UuidCreate(reinterpret_cast<UUID*>(&_uuid));
            return _uuid;
        }

        //------------------------------------------------------------------------------------------
        bool isValid() const
        {
            static const auto nullUUID = uuid{};
            return (*this) != nullUUID;
        }

        //------------------------------------------------------------------------------------------
        std::string toString() const
        {
            auto uuidStr = std::string{ "00000000-0000-0000-0000-000000000000" };
            auto rpcStr  = RPC_CSTR{ nullptr };
            const auto status = UuidToStringA(reinterpret_cast<const UUID*>(this), &rpcStr);
            memcpy(&uuidStr[0], rpcStr, uuidStr.length());
            RpcStringFreeA(&rpcStr);
            return uuidStr;
        }

        //------------------------------------------------------------------------------------------
        std::wstring toWString() const
        {
            auto uuidStr = std::wstring{ L"00000000-0000-0000-0000-000000000000" };
            auto rpcStr = RPC_WSTR{ nullptr };
            const auto status = UuidToStringW(reinterpret_cast<const UUID*>(this), &rpcStr);
            memcpy(&uuidStr[0], rpcStr, uuidStr.length() * 2);
            RpcStringFreeW(&rpcStr);
            return uuidStr;
        }

        //------------------------------------------------------------------------------------------
        static uuid from_string(const std::string &uuidStr)
        {
            auto _uuid = uuid{};
            const auto status = UuidFromStringA((RPC_CSTR)uuidStr.data(), reinterpret_cast<UUID*>(&_uuid));
            return _uuid;
        }

        //------------------------------------------------------------------------------------------
        static uuid from_wstring(const std::wstring &uuidStr)
        {
            auto _uuid = uuid{};
            const auto status = UuidFromStringW((RPC_WSTR)uuidStr.data(), reinterpret_cast<UUID*>(&_uuid));
            return _uuid;
        }

        //------------------------------------------------------------------------------------------
        operator std::string() const
        {
            return toString();
        }
    };

    //----------------------------------------------------------------------------------------------
    static_assert(sizeof(uuid) == sizeof(UUID), "Native UUID size mismatch");
    
    //----------------------------------------------------------------------------------------------
    inline bool operator ==(const uuid &lhs, const uuid &rhs)
    {
        return memcmp(&lhs, &rhs, sizeof(uuid)) == 0;
    }

    //----------------------------------------------------------------------------------------------
    inline bool operator !=(const uuid &lhs, const uuid &rhs)
    {
        return !(lhs == rhs);
    }

    //----------------------------------------------------------------------------------------------
    template<typename _OStream>
    inline _OStream& operator <<(_OStream &lhs, const uuid &rhs)
    {
        return lhs << rhs.toString();
    }
    
    //----------------------------------------------------------------------------------------------
    // Dummy structures used in natvis to properly visualize UUID in the debugger.
    namespace natvis {

        struct x4l { uint8_t v : 4; uint8_t _ : 4; };
        struct x4h { uint8_t _ : 4; uint8_t v : 4; };
        struct x8  { uint8_t  _; };
        struct x16 { uint16_t _; };
        struct x32 { uint32_t _; };
    }

} /*ftl*/

#else
#include <uuid/uuid.h>

namespace std {

    //----------------------------------------------------------------------------------------------
    // Specialization of std::hash to be able to use uuid in hash maps.
    template<>
    struct hash<ftl::uuid>
    {
        size_t operator()(const ftl::uuid& _uuid) const noexcept
        {
            return 0;
        }
    };

} /*std*/


namespace ftl {

    //----------------------------------------------------------------------------------------------
    bool operator !=(const uuid &lhs, const uuid &rhs);

    //----------------------------------------------------------------------------------------------
    struct uuid
    {
        //------------------------------------------------------------------------------------------
        // Internal representation of a 128 bits UUID.
        uint32_t data1;
        uint16_t data2;
        uint16_t data3;
        uint64_t data4;

        //------------------------------------------------------------------------------------------
        static uuid generate()
        {
            auto _uuid = uuid{};
            
            uuid_generate(*reinterpret_cast<uuid_t*>(&_uuid));
            
            return _uuid;
        }

        //------------------------------------------------------------------------------------------
        bool isValid() const
        {
            static const auto nullUUID = uuid{};
            return (*this) != nullUUID;
        }

        //------------------------------------------------------------------------------------------
        std::string toString() const
        {
            auto uuidStr = std::string{ "00000000-0000-0000-0000-000000000000" };
            uuid_unparse(*reinterpret_cast<uuid_t*>(const_cast<uuid*>(this)), &uuidStr[0]);
            return uuidStr;
        }

        //------------------------------------------------------------------------------------------
        static uuid from_string(const std::string &uuidStr)
        {
            auto _uuid = uuid{};
            uuid_parse(uuidStr.c_str(), *reinterpret_cast<uuid_t*>(&_uuid));
            return _uuid;
        }
    };
    
    //----------------------------------------------------------------------------------------------
    inline bool operator ==(const uuid &lhs, const uuid &rhs)
    {
        return memcmp(&lhs, &rhs, sizeof(uuid)) == 0;
    }

    //----------------------------------------------------------------------------------------------
    inline bool operator !=(const uuid &lhs, const uuid &rhs)
    {
        return !(lhs == rhs);
    }

    //----------------------------------------------------------------------------------------------
    inline void to_json(nlohmann::json &j, const uuid &id)
    {
        j = id.toString();
    }

    //----------------------------------------------------------------------------------------------
    inline void from_json(const nlohmann::json &j, uuid &id)
    {
        id = uuid::from_string(j.get<std::string>());
    }

} /*ftl*/
    
#endif