// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_40_hide,"openfl.ui.Mouse","hide",0x974c7e47,"openfl.ui.Mouse.hide","openfl/ui/Mouse.hx",40,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_55_show,"openfl.ui.Mouse","show",0x9e911e82,"openfl.ui.Mouse.show","openfl/ui/Mouse.hx",55,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_69_get_cursor,"openfl.ui.Mouse","get_cursor",0xfdb1b9e4,"openfl.ui.Mouse.get_cursor","openfl/ui/Mouse.hx",69,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_73_set_cursor,"openfl.ui.Mouse","set_cursor",0x012f5858,"openfl.ui.Mouse.set_cursor","openfl/ui/Mouse.hx",73,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_17_boot,"openfl.ui.Mouse","boot",0x9359cdb7,"openfl.ui.Mouse.boot","openfl/ui/Mouse.hx",17,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_18_boot,"openfl.ui.Mouse","boot",0x9359cdb7,"openfl.ui.Mouse.boot","openfl/ui/Mouse.hx",18,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_20_boot,"openfl.ui.Mouse","boot",0x9359cdb7,"openfl.ui.Mouse.boot","openfl/ui/Mouse.hx",20,0xeac39ff5)
namespace openfl{
namespace ui{

void Mouse_obj::__construct() { }

Dynamic Mouse_obj::__CreateEmpty() { return new Mouse_obj; }

void *Mouse_obj::_hx_vtable = 0;

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mouse_obj > _hx_result = new Mouse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mouse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d7c6159;
}

bool Mouse_obj::supportsCursor;

bool Mouse_obj::supportsNativeCursor;

::String Mouse_obj::_hx___cursor;

bool Mouse_obj::_hx___hidden;

void Mouse_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_40_hide)
HXLINE(  41)		::openfl::ui::Mouse_obj::_hx___hidden = true;
HXLINE(  44)		{
HXLINE(  44)			int _g = 0;
HXDLIN(  44)			::Array< ::Dynamic> _g1 = ::lime::app::Application_obj::current->_hx___windows;
HXDLIN(  44)			while((_g < _g1->length)){
HXLINE(  44)				 ::lime::ui::Window window = _g1->__get(_g).StaticCast<  ::lime::ui::Window >();
HXDLIN(  44)				_g = (_g + 1);
HXLINE(  46)				window->set_cursor(null());
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

void Mouse_obj::show(){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_55_show)
HXLINE(  56)		::openfl::ui::Mouse_obj::_hx___hidden = false;
HXLINE(  58)		::String cacheCursor = ::openfl::ui::Mouse_obj::_hx___cursor;
HXLINE(  59)		::openfl::ui::Mouse_obj::_hx___cursor = null();
HXLINE(  60)		::openfl::ui::Mouse_obj::set_cursor(cacheCursor);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

::String Mouse_obj::get_cursor(){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_69_get_cursor)
HXDLIN(  69)		return ::openfl::ui::Mouse_obj::_hx___cursor;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

::String Mouse_obj::set_cursor(::String value){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_73_set_cursor)
HXLINE(  74)		if (hx::IsNull( value )) {
HXLINE(  74)			value = HX_("auto",6f,df,76,40);
            		}
HXLINE(  77)		 ::lime::ui::MouseCursor setCursor = null();
HXLINE(  79)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("arrow",c9,79,8f,25)) ){
HXLINE(  82)			setCursor = ::lime::ui::MouseCursor_obj::ARROW_dyn();
HXDLIN(  82)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("button",f2,61,e0,d9)) ){
HXLINE(  84)			setCursor = ::lime::ui::MouseCursor_obj::POINTER_dyn();
HXDLIN(  84)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("crosshair",a2,46,c8,8a)) ){
HXLINE(  90)			setCursor = ::lime::ui::MouseCursor_obj::CROSSHAIR_dyn();
HXDLIN(  90)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("custom",b1,87,92,3f)) ){
HXLINE(  92)			setCursor = ::lime::ui::MouseCursor_obj::CUSTOM_dyn();
HXDLIN(  92)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("hand",6f,2b,08,45)) ){
HXLINE(  86)			setCursor = ::lime::ui::MouseCursor_obj::MOVE_dyn();
HXDLIN(  86)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("ibeam",58,ca,26,b6)) ){
HXLINE(  88)			setCursor = ::lime::ui::MouseCursor_obj::TEXT_dyn();
HXDLIN(  88)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("resize_nesw",06,ae,e9,a7)) ){
HXLINE(  94)			setCursor = ::lime::ui::MouseCursor_obj::RESIZE_NESW_dyn();
HXDLIN(  94)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("resize_ns",f0,cc,f2,ab)) ){
HXLINE(  96)			setCursor = ::lime::ui::MouseCursor_obj::RESIZE_NS_dyn();
HXDLIN(  96)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("resize_nwse",86,56,f7,a7)) ){
HXLINE(  98)			setCursor = ::lime::ui::MouseCursor_obj::RESIZE_NWSE_dyn();
HXDLIN(  98)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("resize_we",b9,d4,f2,ab)) ){
HXLINE( 100)			setCursor = ::lime::ui::MouseCursor_obj::RESIZE_WE_dyn();
HXDLIN( 100)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("wait",75,5a,f2,4e)) ){
HXLINE( 102)			setCursor = ::lime::ui::MouseCursor_obj::WAIT_dyn();
HXDLIN( 102)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==HX_("waitarrow",34,17,98,4f)) ){
HXLINE( 104)			setCursor = ::lime::ui::MouseCursor_obj::WAIT_ARROW_dyn();
HXDLIN( 104)			goto _hx_goto_4;
            		}
            		/* default */{
            		}
            		_hx_goto_4:;
HXLINE( 108)		bool _hx_tmp;
HXDLIN( 108)		if (hx::IsNotNull( setCursor )) {
HXLINE( 108)			_hx_tmp = !(::openfl::ui::Mouse_obj::_hx___hidden);
            		}
            		else {
HXLINE( 108)			_hx_tmp = false;
            		}
HXDLIN( 108)		if (_hx_tmp) {
HXLINE( 110)			int _g = 0;
HXDLIN( 110)			::Array< ::Dynamic> _g1 = ::lime::app::Application_obj::current->_hx___windows;
HXDLIN( 110)			while((_g < _g1->length)){
HXLINE( 110)				 ::lime::ui::Window window = _g1->__get(_g).StaticCast<  ::lime::ui::Window >();
HXDLIN( 110)				_g = (_g + 1);
HXLINE( 112)				window->set_cursor(setCursor);
            			}
            		}
HXLINE( 117)		return (::openfl::ui::Mouse_obj::_hx___cursor = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_cursor() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { outValue = ( _hx___cursor ); return true; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { outValue = ( _hx___hidden ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsCursor") ) { outValue = ( supportsCursor ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsNativeCursor") ) { outValue = ( supportsNativeCursor ); return true; }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_cursor(ioValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { _hx___cursor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__hidden") ) { _hx___hidden=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsCursor") ) { supportsCursor=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsNativeCursor") ) { supportsNativeCursor=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo *Mouse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Mouse_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Mouse_obj::supportsCursor,HX_("supportsCursor",7a,7f,2c,d6)},
	{hx::fsBool,(void *) &Mouse_obj::supportsNativeCursor,HX_("supportsNativeCursor",71,9b,97,a2)},
	{hx::fsString,(void *) &Mouse_obj::_hx___cursor,HX_("__cursor",f6,f9,17,e7)},
	{hx::fsBool,(void *) &Mouse_obj::_hx___hidden,HX_("__hidden",8a,6a,c5,f4)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Mouse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::supportsCursor,"supportsCursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::supportsNativeCursor,"supportsNativeCursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::_hx___cursor,"__cursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::_hx___hidden,"__hidden");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mouse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::supportsCursor,"supportsCursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::supportsNativeCursor,"supportsNativeCursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_hx___cursor,"__cursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_hx___hidden,"__hidden");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String Mouse_obj_sStaticFields[] = {
	HX_("supportsCursor",7a,7f,2c,d6),
	HX_("supportsNativeCursor",71,9b,97,a2),
	HX_("__cursor",f6,f9,17,e7),
	HX_("__hidden",8a,6a,c5,f4),
	HX_("hide",c2,34,0e,45),
	HX_("show",fd,d4,52,4c),
	HX_("get_cursor",9f,fe,6f,2f),
	HX_("set_cursor",13,9d,ed,32),
	::String(null())
};

void Mouse_obj::__register()
{
	Mouse_obj _hx_dummy;
	Mouse_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("openfl.ui.Mouse",09,85,e4,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = Mouse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Mouse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mouse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mouse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Mouse_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_17_boot)
HXDLIN(  17)		supportsCursor = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_18_boot)
HXDLIN(  18)		supportsNativeCursor = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_20_boot)
HXDLIN(  20)		_hx___cursor = HX_("auto",6f,df,76,40);
            	}
}

} // end namespace openfl
} // end namespace ui
