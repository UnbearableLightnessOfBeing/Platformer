// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLTransformFeedback_GLTransformFeedback_Impl_
#include <lime/graphics/opengl/_GLTransformFeedback/GLTransformFeedback_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_37b54af8ff8dc0de_12_fromInt,"lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_","fromInt",0xec7828f7,"lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_.fromInt","lime/graphics/opengl/GLTransformFeedback.hx",12,0xac3a3468)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLTransformFeedback{

void GLTransformFeedback_Impl__obj::__construct() { }

Dynamic GLTransformFeedback_Impl__obj::__CreateEmpty() { return new GLTransformFeedback_Impl__obj; }

void *GLTransformFeedback_Impl__obj::_hx_vtable = 0;

Dynamic GLTransformFeedback_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLTransformFeedback_Impl__obj > _hx_result = new GLTransformFeedback_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLTransformFeedback_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4bae1988;
}

 ::lime::graphics::opengl::GLObject GLTransformFeedback_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_37b54af8ff8dc0de_12_fromInt)
HXDLIN(  12)		return ::lime::graphics::opengl::GLObject_obj::fromInt(11,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLTransformFeedback_Impl__obj,fromInt,return )


GLTransformFeedback_Impl__obj::GLTransformFeedback_Impl__obj()
{
}

bool GLTransformFeedback_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *GLTransformFeedback_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLTransformFeedback_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class GLTransformFeedback_Impl__obj::__mClass;

static ::String GLTransformFeedback_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLTransformFeedback_Impl__obj::__register()
{
	GLTransformFeedback_Impl__obj _hx_dummy;
	GLTransformFeedback_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLTransformFeedback.GLTransformFeedback_Impl_",c0,09,ad,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLTransformFeedback_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLTransformFeedback_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLTransformFeedback_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLTransformFeedback_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLTransformFeedback_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLTransformFeedback
