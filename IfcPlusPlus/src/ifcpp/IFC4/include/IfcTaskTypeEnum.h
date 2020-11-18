/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcTaskTypeEnum = ENUMERATION OF	(ATTENDANCE	,CONSTRUCTION	,DEMOLITION	,DISMANTLE	,DISPOSAL	,INSTALLATION	,LOGISTIC	,MAINTENANCE	,MOVE	,OPERATION	,REMOVAL	,RENOVATION	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcTaskTypeEnum : virtual public BuildingObject
{
public:
	enum IfcTaskTypeEnumEnum
	{
		ENUM_ATTENDANCE,
		ENUM_CONSTRUCTION,
		ENUM_DEMOLITION,
		ENUM_DISMANTLE,
		ENUM_DISPOSAL,
		ENUM_INSTALLATION,
		ENUM_LOGISTIC,
		ENUM_MAINTENANCE,
		ENUM_MOVE,
		ENUM_OPERATION,
		ENUM_REMOVAL,
		ENUM_RENOVATION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcTaskTypeEnum() = default;
	IfcTaskTypeEnum( IfcTaskTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcTaskTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTaskTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcTaskTypeEnumEnum m_enum;
};

