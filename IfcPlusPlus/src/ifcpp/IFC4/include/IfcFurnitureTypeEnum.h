/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcFurnitureTypeEnum = ENUMERATION OF	(CHAIR	,TABLE	,DESK	,BED	,FILECABINET	,SHELF	,SOFA	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcFurnitureTypeEnum : virtual public BuildingObject
{
public:
	enum IfcFurnitureTypeEnumEnum
	{
		ENUM_CHAIR,
		ENUM_TABLE,
		ENUM_DESK,
		ENUM_BED,
		ENUM_FILECABINET,
		ENUM_SHELF,
		ENUM_SOFA,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFurnitureTypeEnum() = default;
	IfcFurnitureTypeEnum( IfcFurnitureTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcFurnitureTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFurnitureTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcFurnitureTypeEnumEnum m_enum;
};

