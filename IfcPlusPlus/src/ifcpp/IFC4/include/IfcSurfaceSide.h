/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcSurfaceSide = ENUMERATION OF	(POSITIVE	,NEGATIVE	,BOTH);
class IFCQUERY_EXPORT IfcSurfaceSide : virtual public BuildingObject
{
public:
	enum IfcSurfaceSideEnum
	{
		ENUM_POSITIVE,
		ENUM_NEGATIVE,
		ENUM_BOTH
	};

	IfcSurfaceSide() = default;
	IfcSurfaceSide( IfcSurfaceSideEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcSurfaceSide"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSurfaceSide> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcSurfaceSideEnum m_enum;
};

