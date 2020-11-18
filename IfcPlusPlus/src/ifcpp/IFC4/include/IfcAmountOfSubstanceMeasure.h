/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcMeasureValue.h"

// TYPE IfcAmountOfSubstanceMeasure = REAL;
class IFCQUERY_EXPORT IfcAmountOfSubstanceMeasure : public IfcMeasureValue
{
public:
	IfcAmountOfSubstanceMeasure() = default;
	IfcAmountOfSubstanceMeasure( double value );
	virtual const char* className() const { return "IfcAmountOfSubstanceMeasure"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAmountOfSubstanceMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	double m_value;
};

