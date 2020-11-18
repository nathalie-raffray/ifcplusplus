/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/GlobalDefines.h"
#include "ifcpp/model/BasicTypes.h"
#include "ifcpp/model/BuildingObject.h"

// TYPE IfcDocumentStatusEnum = ENUMERATION OF	(DRAFT	,FINALDRAFT	,FINAL	,REVISION	,NOTDEFINED);
class IFCQUERY_EXPORT IfcDocumentStatusEnum : virtual public BuildingObject
{
public:
	enum IfcDocumentStatusEnumEnum
	{
		ENUM_DRAFT,
		ENUM_FINALDRAFT,
		ENUM_FINAL,
		ENUM_REVISION,
		ENUM_NOTDEFINED
	};

	IfcDocumentStatusEnum() = default;
	IfcDocumentStatusEnum( IfcDocumentStatusEnumEnum e ) { m_enum = e; }
	virtual const char* className() const { return "IfcDocumentStatusEnum"; }
	virtual shared_ptr<BuildingObject> getDeepCopy( BuildingCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDocumentStatusEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<BuildingEntity> >& map );
	IfcDocumentStatusEnumEnum m_enum;
};

