/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcPipeFittingTypeEnum = ENUMERATION OF	(BEND	,CONNECTOR	,ENTRY	,EXIT	,JUNCTION	,OBSTRUCTION	,TRANSITION	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcPipeFittingTypeEnum : virtual public BuildingObject
{
public:
	enum IfcPipeFittingTypeEnumEnum
	{
		ENUM_BEND,
		ENUM_CONNECTOR,
		ENUM_ENTRY,
		ENUM_EXIT,
		ENUM_JUNCTION,
		ENUM_OBSTRUCTION,
		ENUM_TRANSITION,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcPipeFittingTypeEnum() = default;
	IfcPipeFittingTypeEnum( IfcPipeFittingTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcPipeFittingTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcPipeFittingTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcPipeFittingTypeEnumEnum m_enum;
};

