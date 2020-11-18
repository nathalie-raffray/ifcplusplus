/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcObjectReferenceSelect.h"
class IFCQUERY_EXPORT IfcAddressTypeEnum;
class IFCQUERY_EXPORT IfcText;
class IFCQUERY_EXPORT IfcLabel;
class IFCQUERY_EXPORT IfcPerson;
class IFCQUERY_EXPORT IfcOrganization;
//ENTITY
class IFCQUERY_EXPORT IfcAddress : virtual public IfcObjectReferenceSelect, public BuildingEntity
{ 
public:
	IfcAddress() = default;
	IfcAddress( int id );
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const;
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcAddress"; }
	virtual const std::wstring toString() const;


	// IfcAddress -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcAddressTypeEnum>			m_Purpose;					//optional
	shared_ptr<IfcText>						m_Description;				//optional
	shared_ptr<IfcLabel>					m_UserDefinedPurpose;		//optional
	// inverse attributes:
	std::vector<weak_ptr<IfcPerson> >		m_OfPerson_inverse;
	std::vector<weak_ptr<IfcOrganization> >	m_OfOrganization_inverse;
};

