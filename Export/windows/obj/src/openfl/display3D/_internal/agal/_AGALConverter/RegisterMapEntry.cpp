// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__internal_agal__AGALConverter_RegisterMapEntry
#include <openfl/display3D/_internal/agal/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_agal__AGALConverter_RegisterUsage
#include <openfl/display3D/_internal/agal/_AGALConverter/RegisterUsage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f37df1b95961fe37_818_new,"openfl.display3D._internal.agal._AGALConverter.RegisterMapEntry","new",0xd4ea74d7,"openfl.display3D._internal.agal._AGALConverter.RegisterMapEntry.new","openfl/display3D/_internal/agal/AGALConverter.hx",818,0xbbd098ff)
namespace openfl{
namespace display3D{
namespace _internal{
namespace agal{
namespace _AGALConverter{

void RegisterMapEntry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f37df1b95961fe37_818_new)
            	}

Dynamic RegisterMapEntry_obj::__CreateEmpty() { return new RegisterMapEntry_obj; }

void *RegisterMapEntry_obj::_hx_vtable = 0;

Dynamic RegisterMapEntry_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< RegisterMapEntry_obj > _hx_result = new RegisterMapEntry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool RegisterMapEntry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x43285877;
}


RegisterMapEntry_obj::RegisterMapEntry_obj()
{
}

void RegisterMapEntry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMapEntry);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(number,"number");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(usage,"usage");
	HX_MARK_END_CLASS();
}

void RegisterMapEntry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(number,"number");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(usage,"usage");
}

hx::Val RegisterMapEntry_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"usage") ) { return hx::Val( usage ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { return hx::Val( number ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val RegisterMapEntry_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"usage") ) { usage=inValue.Cast<  ::openfl::display3D::_internal::agal::_AGALConverter::RegisterUsage >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"number") ) { number=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMapEntry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("number",c9,86,7a,a1));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("usage",21,5d,2f,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo RegisterMapEntry_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(RegisterMapEntry_obj,name),HX_("name",4b,72,ff,48)},
	{hx::fsInt,(int)offsetof(RegisterMapEntry_obj,number),HX_("number",c9,86,7a,a1)},
	{hx::fsInt,(int)offsetof(RegisterMapEntry_obj,type),HX_("type",ba,f2,08,4d)},
	{hx::fsObject /*  ::openfl::display3D::_internal::agal::_AGALConverter::RegisterUsage */ ,(int)offsetof(RegisterMapEntry_obj,usage),HX_("usage",21,5d,2f,aa)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *RegisterMapEntry_obj_sStaticStorageInfo = 0;
#endif

static ::String RegisterMapEntry_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("number",c9,86,7a,a1),
	HX_("type",ba,f2,08,4d),
	HX_("usage",21,5d,2f,aa),
	::String(null()) };

hx::Class RegisterMapEntry_obj::__mClass;

void RegisterMapEntry_obj::__register()
{
	RegisterMapEntry_obj _hx_dummy;
	RegisterMapEntry_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal.agal._AGALConverter.RegisterMapEntry",65,bd,93,0d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(RegisterMapEntry_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMapEntry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RegisterMapEntry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RegisterMapEntry_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace agal
} // end namespace _AGALConverter
