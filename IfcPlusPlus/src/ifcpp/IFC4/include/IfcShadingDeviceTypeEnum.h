/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcShadingDeviceTypeEnum = ENUMERATION OF	(JALOUSIE	,SHUTTER	,AWNING	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcShadingDeviceTypeEnum : virtual public BuildingObject
{
public:
	enum IfcShadingDeviceTypeEnumEnum
	{
		ENUM_JALOUSIE,
		ENUM_SHUTTER,
		ENUM_AWNING,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcShadingDeviceTypeEnum() = default;
	IfcShadingDeviceTypeEnum( IfcShadingDeviceTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcShadingDeviceTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcShadingDeviceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcShadingDeviceTypeEnumEnum m_enum;
};

