/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcAirTerminalTypeEnum = ENUMERATION OF	(DIFFUSER	,GRILLE	,LOUVRE	,REGISTER	,USERDEFINED	,NOTDEFINED);
class IFCQUERY_EXPORT IfcAirTerminalTypeEnum : virtual public BuildingObject
{
public:
	enum IfcAirTerminalTypeEnumEnum
	{
		ENUM_DIFFUSER,
		ENUM_GRILLE,
		ENUM_LOUVRE,
		ENUM_REGISTER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcAirTerminalTypeEnum() = default;
	IfcAirTerminalTypeEnum( IfcAirTerminalTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcAirTerminalTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAirTerminalTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcAirTerminalTypeEnumEnum m_enum;
};

