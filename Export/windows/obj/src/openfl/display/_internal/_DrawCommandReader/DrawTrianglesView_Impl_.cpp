// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandBuffer
#include <openfl/display/_internal/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl_display__internal_DrawCommandReader
#include <openfl/display/_internal/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawTrianglesView_Impl_
#include <openfl/display/_internal/_DrawCommandReader/DrawTrianglesView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_3cef81c7058c9f68_738__new,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_","_new",0x2942878a,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_._new","openfl/display/_internal/DrawCommandReader.hx",738,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_3cef81c7058c9f68_747_get_vertices,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_","get_vertices",0xadbeb72b,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_.get_vertices","openfl/display/_internal/DrawCommandReader.hx",747,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_3cef81c7058c9f68_754_get_indices,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_","get_indices",0xf971bc35,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_.get_indices","openfl/display/_internal/DrawCommandReader.hx",754,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_3cef81c7058c9f68_761_get_uvtData,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_","get_uvtData",0x3d411bcb,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_.get_uvtData","openfl/display/_internal/DrawCommandReader.hx",761,0x29f77eb3)
HX_LOCAL_STACK_FRAME(_hx_pos_3cef81c7058c9f68_768_get_culling,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_","get_culling",0x69a5577e,"openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_.get_culling","openfl/display/_internal/DrawCommandReader.hx",768,0x29f77eb3)
namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{

void DrawTrianglesView_Impl__obj::__construct() { }

Dynamic DrawTrianglesView_Impl__obj::__CreateEmpty() { return new DrawTrianglesView_Impl__obj; }

void *DrawTrianglesView_Impl__obj::_hx_vtable = 0;

Dynamic DrawTrianglesView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawTrianglesView_Impl__obj > _hx_result = new DrawTrianglesView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawTrianglesView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x14007657;
}

 ::openfl::display::_internal::DrawCommandReader DrawTrianglesView_Impl__obj::_new( ::openfl::display::_internal::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_3cef81c7058c9f68_738__new)
HXDLIN( 738)		 ::openfl::display::_internal::DrawCommandReader this1 = d;
HXDLIN( 738)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,_new,return )

 ::openfl::_Vector::FloatVector DrawTrianglesView_Impl__obj::get_vertices( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3cef81c7058c9f68_747_get_vertices)
HXDLIN( 747)		return ( ( ::openfl::_Vector::FloatVector)(this1->buffer->o->__get(this1->oPos)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_vertices,return )

 ::openfl::_Vector::IntVector DrawTrianglesView_Impl__obj::get_indices( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3cef81c7058c9f68_754_get_indices)
HXDLIN( 754)		return ( ( ::openfl::_Vector::IntVector)(this1->buffer->o->__get((this1->oPos + 1))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_indices,return )

 ::openfl::_Vector::FloatVector DrawTrianglesView_Impl__obj::get_uvtData( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3cef81c7058c9f68_761_get_uvtData)
HXDLIN( 761)		return ( ( ::openfl::_Vector::FloatVector)(this1->buffer->o->__get((this1->oPos + 2))) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_uvtData,return )

 ::Dynamic DrawTrianglesView_Impl__obj::get_culling( ::openfl::display::_internal::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_3cef81c7058c9f68_768_get_culling)
HXDLIN( 768)		return this1->buffer->o->__get((this1->oPos + 3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawTrianglesView_Impl__obj,get_culling,return )


DrawTrianglesView_Impl__obj::DrawTrianglesView_Impl__obj()
{
}

bool DrawTrianglesView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"get_indices") ) { outValue = get_indices_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_uvtData") ) { outValue = get_uvtData_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_culling") ) { outValue = get_culling_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_vertices") ) { outValue = get_vertices_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawTrianglesView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawTrianglesView_Impl__obj_sStaticStorageInfo = 0;
#endif

hx::Class DrawTrianglesView_Impl__obj::__mClass;

static ::String DrawTrianglesView_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("get_vertices",02,74,2f,1f),
	HX_("get_indices",3e,a7,4e,69),
	HX_("get_uvtData",d4,06,1e,ad),
	HX_("get_culling",87,42,82,d9),
	::String(null())
};

void DrawTrianglesView_Impl__obj::__register()
{
	DrawTrianglesView_Impl__obj _hx_dummy;
	DrawTrianglesView_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal._DrawCommandReader.DrawTrianglesView_Impl_",e5,1e,d8,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawTrianglesView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawTrianglesView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawTrianglesView_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawTrianglesView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawTrianglesView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader
