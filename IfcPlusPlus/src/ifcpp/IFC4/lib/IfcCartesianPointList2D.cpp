/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/AttributeObject.h"
#include "ifcpp/model/BuildingException.h"
#include "ifcpp/model/BuildingGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianPointList2D.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCartesianPointList2D 
IfcCartesianPointList2D::IfcCartesianPointList2D( int id ) { m_entity_id = id; }
shared_ptr<BuildingObject> IfcCartesianPointList2D::getDeepCopy( BuildingCopyOptions& options )
{
	shared_ptr<IfcCartesianPointList2D> copy_self( new IfcCartesianPointList2D() );
	copy_self->m_CoordList.resize( m_CoordList.size() );
	for( size_t ii=0; ii<m_CoordList.size(); ++ii )
	{
		std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii = m_CoordList[ii];
		std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii_target = copy_self->m_CoordList[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcLengthMeasure>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.emplace_back( dynamic_pointer_cast<IfcLengthMeasure>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	for( size_t ii=0; ii<m_TagList.size(); ++ii )
	{
		auto item_ii = m_TagList[ii];
		if( item_ii )
		{
			copy_self->m_TagList.emplace_back( dynamic_pointer_cast<IfcLabel>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcCartesianPointList2D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCCARTESIANPOINTLIST2D" << "(";
	writeTypeOfRealList2D( stream, m_CoordList, false );
	stream << ",";
	if( m_TagList.size() > 0 )
	{
		stream << "(";
		for( size_t ii = 0; ii < m_TagList.size(); ++ii )
		{
			if( ii > 0 )
			{
				stream << ",";
			}
			const shared_ptr<IfcLabel>& type_object = m_TagList[ii];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
		stream << ")";
	}
	else { stream << "$"; }
	stream << ");";
}
void IfcCartesianPointList2D::getStepParameter( std::stringstream& stream, bool /*is_select_type*/ ) const { stream << "#" << m_entity_id; }
const std::wstring IfcCartesianPointList2D::toString() const { return L"IfcCartesianPointList2D"; }
void IfcCartesianPointList2D::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<BuildingEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCartesianPointList2D, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw BuildingException( err.str().c_str() ); }
	readTypeOfRealList2D( args[0], m_CoordList );
	readTypeOfStringList( args[1], m_TagList );
}
void IfcCartesianPointList2D::getAttributes( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes ) const
{
	IfcCartesianPointList::getAttributes( vec_attributes );
	if( !m_CoordList.empty() )
	{
		shared_ptr<AttributeObjectVector> outer_vector( new AttributeObjectVector() );
		vec_attributes.emplace_back( std::make_pair( "CoordList", outer_vector ) );
		for( size_t ii=0; ii<m_CoordList.size(); ++ii )
		{
			const std::vector<shared_ptr<IfcLengthMeasure> >& vec_ii = m_CoordList[ii];
			shared_ptr<AttributeObjectVector> inner_vector( new AttributeObjectVector() );
			outer_vector->m_vec.push_back( inner_vector );
			std::copy(vec_ii.begin(), vec_ii.end(), std::back_inserter(inner_vector->m_vec));
		}
	}
	if( !m_TagList.empty() )
	{
		shared_ptr<AttributeObjectVector> TagList_vec_object( new AttributeObjectVector() );
		std::copy( m_TagList.begin(), m_TagList.end(), std::back_inserter( TagList_vec_object->m_vec ) );
		vec_attributes.emplace_back( std::make_pair( "TagList", TagList_vec_object ) );
	}
}
void IfcCartesianPointList2D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<BuildingObject> > >& vec_attributes_inverse ) const
{
	IfcCartesianPointList::getAttributesInverse( vec_attributes_inverse );
}
void IfcCartesianPointList2D::setInverseCounterparts( shared_ptr<BuildingEntity> ptr_self_entity )
{
	IfcCartesianPointList::setInverseCounterparts( ptr_self_entity );
}
void IfcCartesianPointList2D::unlinkFromInverseCounterparts()
{
	IfcCartesianPointList::unlinkFromInverseCounterparts();
}
