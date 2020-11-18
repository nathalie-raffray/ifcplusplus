/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcComplexPropertyTemplateTypeEnum = ENUMERATION OF	(P_COMPLEX	,Q_COMPLEX);
class IFCQUERY_EXPORT IfcComplexPropertyTemplateTypeEnum : virtual public BuildingObject
{
public:
	enum IfcComplexPropertyTemplateTypeEnumEnum
	{
		ENUM_P_COMPLEX,
		ENUM_Q_COMPLEX
	};

	IfcComplexPropertyTemplateTypeEnum() = default;
	IfcComplexPropertyTemplateTypeEnum( IfcComplexPropertyTemplateTypeEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcComplexPropertyTemplateTypeEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcComplexPropertyTemplateTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcComplexPropertyTemplateTypeEnumEnum m_enum;
};

