/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcObjectiveEnum = ENUMERATION OF	(CODECOMPLIANCE	,CODEWAIVER	,DESIGNINTENT	,EXTERNAL	,HEALTHANDSAFETY	,MERGECONFLICT	,MODELVIEW	,PARAMETER	,REQUIREMENT	,SPECIFICATION	,TRIGGERCONDITION	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcObjectiveEnum : virtual public BuildingObject
{
public:
	enum IfcObjectiveEnumEnum
	{
		ENUM_CODECOMPLIANCE,
		ENUM_CODEWAIVER,
		ENUM_DESIGNINTENT,
		ENUM_EXTERNAL,
		ENUM_HEALTHANDSAFETY,
		ENUM_MERGECONFLICT,
		ENUM_MODELVIEW,
		ENUM_PARAMETER,
		ENUM_REQUIREMENT,
		ENUM_SPECIFICATION,
		ENUM_TRIGGERCONDITION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcObjectiveEnum() = default;
	IfcObjectiveEnum( IfcObjectiveEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcObjectiveEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcObjectiveEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcObjectiveEnumEnum m_enum;
};

