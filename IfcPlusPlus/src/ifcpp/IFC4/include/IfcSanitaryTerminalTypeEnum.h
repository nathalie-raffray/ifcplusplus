/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcSanitaryTerminalTypeEnum = ENUMERATION OF	(BATH	,BIDET	,CISTERN	,SHOWER	,SINK	,SANITARYFOUNTAIN	,TOILETPAN	,URINAL	,WASHHANDBASIN	,WCSEAT	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcSanitaryTerminalTypeEnum : virtual public BuildingObject
{
public:
	enum IfcSanitaryTerminalTypeEnumEnum
	{
		ENUM_BATH,
		ENUM_BIDET,
		ENUM_CISTERN,
		ENUM_SHOWER,
		ENUM_SINK,
		ENUM_SANITARYFOUNTAIN,
		ENUM_TOILETPAN,
		ENUM_URINAL,
		ENUM_WASHHANDBASIN,
		ENUM_WCSEAT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSanitaryTerminalTypeEnum() = default;
	IfcSanitaryTerminalTypeEnum( IfcSanitaryTerminalTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcSanitaryTerminalTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSanitaryTerminalTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcSanitaryTerminalTypeEnumEnum m_enum;
};

