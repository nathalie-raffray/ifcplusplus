/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"
#include "IfcPresentationStyleSelect.h"

// TYPE IfcNullStyle = ENUMERATION OF	(NULL);
class IFCQUERY_EXPORT IfcNullStyle : public IfcPresentationStyleSelect
{
public:
	enum IfcNullStyleEnum
	{
		ENUM_ENUM_NULL
	};

	IfcNullStyle() = default;
	IfcNullStyle( IfcNullStyleEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcNullStyle"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcNullStyle> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcNullStyleEnum m_enum;
};

