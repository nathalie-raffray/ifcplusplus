/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcDistributionChamberElementTypeEnum = ENUMERATION OF	(FORMEDDUCT	,INSPECTIONCHAMBER	,INSPECTIONPIT	,MANHOLE	,METERCHAMBER	,SUMP	,TRENCH	,VALVECHAMBER	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcDistributionChamberElementTypeEnum : virtual public BuildingObject
{
public:
	enum IfcDistributionChamberElementTypeEnumEnum
	{
		ENUM_FORMEDDUCT,
		ENUM_INSPECTIONCHAMBER,
		ENUM_INSPECTIONPIT,
		ENUM_MANHOLE,
		ENUM_METERCHAMBER,
		ENUM_SUMP,
		ENUM_TRENCH,
		ENUM_VALVECHAMBER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcDistributionChamberElementTypeEnum() = default;
	IfcDistributionChamberElementTypeEnum( IfcDistributionChamberElementTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcDistributionChamberElementTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDistributionChamberElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcDistributionChamberElementTypeEnumEnum m_enum;
};

