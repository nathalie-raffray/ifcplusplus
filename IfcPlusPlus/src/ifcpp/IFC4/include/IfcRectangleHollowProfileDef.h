/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcRectangleProfileDef.h"
class IFCQUERY_EXPORT IfcPositiveLengthMeasure;
class IFCQUERY_EXPORT IfcNonNegativeLengthMeasure;
//ENTITY
class IFCQUERY_EXPORT IfcRectangleHollowProfileDef : public IfcRectangleProfileDef
{ 
public:
	IfcRectangleHollowProfileDef() = default;
	IfcRectangleHollowProfileDef( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRectangleHollowProfileDef"; }
	virtual const std::wstring toString() const;


	// IfcProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcProfileTypeEnum>								m_ProfileType;
	//  shared_ptr<IfcLabel>										m_ProfileName;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReference_inverse;
	//  std::vector<weak_ptr<IfcProfileProperties> >				m_HasProperties_inverse;

	// IfcParameterizedProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcAxis2Placement2D>								m_Position;					//optional

	// IfcRectangleProfileDef -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcPositiveLengthMeasure>						m_XDim;
	//  shared_ptr<IfcPositiveLengthMeasure>						m_YDim;

	// IfcRectangleHollowProfileDef -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcPositiveLengthMeasure>						m_WallThickness;
	shared_ptr<IfcNonNegativeLengthMeasure>						m_InnerFilletRadius;		//optional
	shared_ptr<IfcNonNegativeLengthMeasure>						m_OuterFilletRadius;		//optional
};

