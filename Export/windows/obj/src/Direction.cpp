// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_Direction
#include <Direction.h>
#endif

::Direction Direction_obj::left;

::Direction Direction_obj::right;

bool Direction_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("left",07,08,b0,47)) { outValue = Direction_obj::left; return true; }
	if (inName==HX_("right",dc,0b,64,e9)) { outValue = Direction_obj::right; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(Direction_obj)

int Direction_obj::__FindIndex(::String inName)
{
	if (inName==HX_("left",07,08,b0,47)) return 0;
	if (inName==HX_("right",dc,0b,64,e9)) return 1;
	return super::__FindIndex(inName);
}

int Direction_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("left",07,08,b0,47)) return 0;
	if (inName==HX_("right",dc,0b,64,e9)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val Direction_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("left",07,08,b0,47)) return left;
	if (inName==HX_("right",dc,0b,64,e9)) return right;
	return super::__Field(inName,inCallProp);
}

static ::String Direction_obj_sStaticFields[] = {
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	::String(null())
};

hx::Class Direction_obj::__mClass;

Dynamic __Create_Direction_obj() { return new Direction_obj; }

void Direction_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_("Direction",1f,42,13,b2), hx::TCanCast< Direction_obj >,Direction_obj_sStaticFields,0,
	&__Create_Direction_obj, &__Create,
	&super::__SGetClass(), &CreateDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &Direction_obj::__GetStatic;
}

void Direction_obj::__boot()
{
left = hx::CreateConstEnum< Direction_obj >(HX_("left",07,08,b0,47),0);
right = hx::CreateConstEnum< Direction_obj >(HX_("right",dc,0b,64,e9),1);
}

