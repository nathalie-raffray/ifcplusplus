/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPositiveInteger.h"
#include "IfcSegmentIndexSelect.h"

// TYPE IfcLineIndex = LIST [2:?] OF IfcPositiveInteger;
class IFCQUERY_EXPORT IfcLineIndex : public IfcPositiveInteger, public IfcSegmentIndexSelect
{
public:
	IfcLineIndex() = default;
	virtual const char* className() const { return "IfcLineIndex"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLineIndex> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	std::vector<shared_ptr<IfcPositiveInteger> > m_vec;
};

