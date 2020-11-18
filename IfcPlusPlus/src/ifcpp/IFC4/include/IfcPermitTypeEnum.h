/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcPermitTypeEnum = ENUMERATION OF	(ACCESS	,BUILDING	,WORK	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcPermitTypeEnum : virtual public BuildingObject
{
public:
	enum IfcPermitTypeEnumEnum
	{
		ENUM_ACCESS,
		ENUM_BUILDING,
		ENUM_WORK,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcPermitTypeEnum() = default;
	IfcPermitTypeEnum( IfcPermitTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcPermitTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPermitTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcPermitTypeEnumEnum m_enum;
};

