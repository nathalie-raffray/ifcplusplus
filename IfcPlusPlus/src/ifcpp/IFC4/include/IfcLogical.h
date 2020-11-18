/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcSimpleValue.h"

// TYPE IfcLogical = LOGICAL;
class IFCQUERY_EXPORT IfcLogical : public IfcSimpleValue
{
public:
	IfcLogical() = default;
	IfcLogical( LogicalEnum value );
	virtual const char* className() const { return "IfcLogical"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLogical> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	LogicalEnum m_value;
};

