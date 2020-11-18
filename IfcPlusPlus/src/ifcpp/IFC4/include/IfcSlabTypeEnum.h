/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcSlabTypeEnum = ENUMERATION OF	(FLOOR	,ROOF	,LANDING	,BASESLAB	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcSlabTypeEnum : virtual public BuildingObject
{
public:
	enum IfcSlabTypeEnumEnum
	{
		ENUM_FLOOR,
		ENUM_ROOF,
		ENUM_LANDING,
		ENUM_BASESLAB,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSlabTypeEnum() = default;
	IfcSlabTypeEnum( IfcSlabTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcSlabTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSlabTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcSlabTypeEnumEnum m_enum;
};

