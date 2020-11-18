/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcResourceObjectSelect.h"
#include "IfcNamedUnit.h"
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcMeasureWithUnit;
class IFCQUERY_EXPORT IfcExternalReferenceRelationship;
//ENTITY
class IFCQUERY_EXPORT IfcConversionBasedUnit : virtual public IfcResourceObjectSelect, public IfcNamedUnit
{ 
public:
	IfcConversionBasedUnit() = default;
	IfcConversionBasedUnit( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcConversionBasedUnit"; }
	virtual const std::wstring toString() const;


	// IfcNamedUnit -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcDimensionalExponents>							m_Dimensions;
	//  shared_ptr<IfcUnitEnum>										m_UnitType;

	// IfcConversionBasedUnit -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLabel>										m_Name;
	shared_ptr<IfcMeasureWithUnit>								m_ConversionFactor;
	// inverse attributes:
	std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
};

