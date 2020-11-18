/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcBoundedSurface.h"
class IFCQUERY_EXPORT IfcInteger;
class IFCQUERY_EXPORT IfcCartesianPoint;
class IFCQUERY_EXPORT IfcBSplineSurfaceForm;
class IFCQUERY_EXPORT IfcLogical;
//ENTITY
class IFCQUERY_EXPORT IfcBSplineSurface : public IfcBoundedSurface
{ 
public:
	IfcBSplineSurface() = default;
	IfcBSplineSurface( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcBSplineSurface"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcSurface -----------------------------------------------------------

	// IfcBoundedSurface -----------------------------------------------------------

	// IfcBSplineSurface -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcInteger>									m_UDegree;
	shared_ptr<IfcInteger>									m_VDegree;
	std::vector<std::vector<shared_ptr<IfcCartesianPoint> > >	m_ControlPointsList;
	shared_ptr<IfcBSplineSurfaceForm>						m_SurfaceForm;
	shared_ptr<IfcLogical>									m_UClosed;
	shared_ptr<IfcLogical>									m_VClosed;
	shared_ptr<IfcLogical>									m_SelfIntersect;
};

