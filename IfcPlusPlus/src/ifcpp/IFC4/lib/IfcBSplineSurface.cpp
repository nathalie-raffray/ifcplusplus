/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBSplineSurface.h"
#include "ifcpp/IFC4/include/IfcBSplineSurfaceForm.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcBSplineSurface 
IfcBSplineSurface::IfcBSplineSurface( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcBSplineSurface::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcBSplineSurface> copy_self( new IfcBSplineSurface() );
	if( m_UDegree ) { copy_self->m_UDegree = dynamic_pointer_cast<IfcInteger>( m_UDegree->getDeepCopy(options) ); }
	if( m_VDegree ) { copy_self->m_VDegree = dynamic_pointer_cast<IfcInteger>( m_VDegree->getDeepCopy(options) ); }
	copy_self->m_ControlPointsList.resize( m_ControlPointsList.size() );
	for( size_t ii=0; ii<m_ControlPointsList.size(); ++ii )
	{
		std::vector<shared_ptr<IfcCartesianPoint> >& vec_ii = m_ControlPointsList[ii];
		std::vector<shared_ptr<IfcCartesianPoint> >& vec_ii_target = copy_self->m_ControlPointsList[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcCartesianPoint>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcCartesianPoint>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	if( m_SurfaceForm ) { copy_self->m_SurfaceForm = dynamic_pointer_cast<IfcBSplineSurfaceForm>( m_SurfaceForm->getDeepCopy(options) ); }
	if( m_UClosed ) { copy_self->m_UClosed = dynamic_pointer_cast<IfcLogical>( m_UClosed->getDeepCopy(options) ); }
	if( m_VClosed ) { copy_self->m_VClosed = dynamic_pointer_cast<IfcLogical>( m_VClosed->getDeepCopy(options) ); }
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBSplineSurface::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCBSPLINESURFACE" << "(";
	if( m_UDegree ) { m_UDegree->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_VDegree ) { m_VDegree->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList2D( stream, m_ControlPointsList );
	stream << ",";
	if( m_SurfaceForm ) { m_SurfaceForm->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UClosed ) { m_UClosed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_VClosed ) { m_VClosed->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcBSplineSurface::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcBSplineSurface::toString() const { return L"IfcBSplineSurface"; }
void IfcBSplineSurface::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBSplineSurface, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	m_UDegree = IfcInteger::createObjectFromSTEP( args[0], map );
	m_VDegree = IfcInteger::createObjectFromSTEP( args[1], map );
	readEntityReferenceList2D( args[2], m_ControlPointsList, map );
	m_SurfaceForm = IfcBSplineSurfaceForm::createObjectFromSTEP( args[3], map );
	m_UClosed = IfcLogical::createObjectFromSTEP( args[4], map );
	m_VClosed = IfcLogical::createObjectFromSTEP( args[5], map );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[6], map );
}
void IfcBSplineSurface::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcBoundedSurface::getAttributes( vec_attributes );
	vec_attributes.emplace_back( std::make_pair( "UDegree", m_UDegree ) );
	vec_attributes.emplace_back( std::make_pair( "VDegree", m_VDegree ) );
	if( !m_ControlPointsList.empty() )
	{
		shared_ptr<AttributeObjectVector> outer_vector( new AttributeObjectVector() );
		vec_attributes.emplace_back( std::make_pair( "ControlPointsList", outer_vector ) );
		for( size_t ii=0; ii<m_ControlPointsList.size(); ++ii )
		{
			const std::vector<shared_ptr<IfcCartesianPoint> >& vec_ii = m_ControlPointsList[ii];
			shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
			outer_vector->m_vec.push_back( inner_vector );
			std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
		}
	}
	vec_attributes.emplace_back( std::make_pair( "SurfaceForm", m_SurfaceForm ) );
	vec_attributes.emplace_back( std::make_pair( "UClosed", m_UClosed ) );
	vec_attributes.emplace_back( std::make_pair( "VClosed", m_VClosed ) );
	vec_attributes.emplace_back( std::make_pair( "SelfIntersect", m_SelfIntersect ) );
}
void IfcBSplineSurface::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcBoundedSurface::getAttributesInverse( vec_attributes_inverse );
}
void IfcBSplineSurface::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcBoundedSurface::setInverseCounterparts( ptr_self_entity );
}
void IfcBSplineSurface::unlinkFromInverseCounterparts()
{
	IfcBoundedSurface::unlinkFromInverseCounterparts();
}
