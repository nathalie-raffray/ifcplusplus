/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcActorSelect.h"
#include "IfcObjectReferenceSelect.h"
#include "IfcResourceObjectSelect.h"
class IFCQUERY_EXPORT IfcIdentifier;
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcText;
class IFCQUERY_EXPORT IfcActorRole;
class IFCQUERY_EXPORT IfcAddress;
class IFCQUERY_EXPORT IfcOrganizationRelationship;
class IFCQUERY_EXPORT IfcPersonAndOrganization;
//ENTITY
class IFCQUERY_EXPORT IfcOrganization : virtual public IfcActorSelect, virtual public IfcObjectReferenceSelect, virtual public IfcResourceObjectSelect, public BuildingEntity
{ 
public:
	IfcOrganization() = default;
	IfcOrganization( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcOrganization"; }
	virtual const std::wstring toString() const;


	// IfcOrganization -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcIdentifier>							m_Identification;			//optional
	shared_ptr<IfcLabel>								m_Name;
	shared_ptr<IfcText>									m_Description;				//optional
	std::vector<shared_ptr<IfcActorRole> >				m_Roles;					//optional
	std::vector<shared_ptr<IfcAddress> >				m_Addresses;				//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcOrganizationRelationship> >	m_IsRelatedBy_inverse;
	std::vector<weak_ptr<IfcOrganizationRelationship> >	m_Relates_inverse;
	std::vector<weak_ptr<IfcPersonAndOrganization> >	m_Engages_inverse;
};

