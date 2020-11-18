/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcProductRepresentationSelect.h"
class IFCQUERY_EXPORT IfcAxis2Placement;
class IFCQUERY_EXPORT IfcRepresentation;
class IFCQUERY_EXPORT IfcShapeAspect;
class IFCQUERY_EXPORT IfcMappedItem;
//ENTITY
class IFCQUERY_EXPORT IfcRepresentationMap : virtual public IfcProductRepresentationSelect, public BuildingEntity
{ 
public:
	IfcRepresentationMap() = default;
	IfcRepresentationMap( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 2; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRepresentationMap"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationMap -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcAxis2Placement>			m_MappingOrigin;
	shared_ptr<IfcRepresentation>			m_MappedRepresentation;
	// inverse attributes:
	std::vector<weak_ptr<IfcShapeAspect> >	m_HasShapeAspects_inverse;
	std::vector<weak_ptr<IfcMappedItem> >	m_MapUsage_inverse;
};

