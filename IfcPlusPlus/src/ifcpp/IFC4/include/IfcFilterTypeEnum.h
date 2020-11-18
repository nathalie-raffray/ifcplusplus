/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcFilterTypeEnum = ENUMERATION OF	(AIRPARTICLEFILTER	,COMPRESSEDAIRFILTER	,ODORFILTER	,OILFILTER	,STRAINER	,WATERFILTER	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcFilterTypeEnum : virtual public BuildingObject
{
public:
	enum IfcFilterTypeEnumEnum
	{
		ENUM_AIRPARTICLEFILTER,
		ENUM_COMPRESSEDAIRFILTER,
		ENUM_ODORFILTER,
		ENUM_OILFILTER,
		ENUM_STRAINER,
		ENUM_WATERFILTER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcFilterTypeEnum() = default;
	IfcFilterTypeEnum( IfcFilterTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcFilterTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcFilterTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcFilterTypeEnumEnum m_enum;
};

