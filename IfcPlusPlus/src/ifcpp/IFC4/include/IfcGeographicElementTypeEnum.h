/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcGeographicElementTypeEnum = ENUMERATION OF	(TERRAIN	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcGeographicElementTypeEnum : virtual public BuildingObject
{
public:
	enum IfcGeographicElementTypeEnumEnum
	{
		ENUM_TERRAIN,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcGeographicElementTypeEnum() = default;
	IfcGeographicElementTypeEnum( IfcGeographicElementTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcGeographicElementTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcGeographicElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcGeographicElementTypeEnumEnum m_enum;
};

