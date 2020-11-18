/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcFlowMeterTypeEnum = ENUMERATION OF	(ENERGYMETER	,GASMETER	,OILMETER	,WATERMETER	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcFlowMeterTypeEnum : virtual public BuildingObject
{
public:
	enum IfcFlowMeterTypeEnumEnum
	{
		ENUM_ENERGYMETER,
		ENUM_GASMETER,
		ENUM_OILMETER,
		ENUM_WATERMETER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFlowMeterTypeEnum() = default;
	IfcFlowMeterTypeEnum( IfcFlowMeterTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcFlowMeterTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFlowMeterTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcFlowMeterTypeEnumEnum m_enum;
};

