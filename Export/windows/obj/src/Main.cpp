// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_RulesScreen
#include <RulesScreen.h>
#endif
#ifndef INCLUDED_StartScreen
#include <StartScreen.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_7_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",7,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_28_update,"Main","update",0xb7afa57e,"Main.update","Main.hx",28,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_7_new)
HXLINE(  10)		this->sizeHeight = 600;
HXLINE(   9)		this->sizeWidth = 800;
HXLINE(  16)		super::__construct();
HXLINE(  17)		this->startScreen =  ::StartScreen_obj::__alloc( HX_CTX ,this->sizeWidth,this->sizeHeight,hx::ObjectPtr<OBJ_>(this));
HXLINE(  18)		this->rulesScreen =  ::RulesScreen_obj::__alloc( HX_CTX ,this->sizeWidth,this->sizeHeight);
HXLINE(  20)		this->addChild(this->startScreen);
HXLINE(  22)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  22)		::String _hx_tmp1 = (this->get_width() + HX_(" ",20,00,00,00));
HXDLIN(  22)		::String _hx_tmp2 = (_hx_tmp1 + this->get_height());
HXDLIN(  22)		_hx_tmp(_hx_tmp2,hx::SourceInfo(HX_("Source/Main.hx",b1,67,fd,ea),22,HX_("Main",59,64,2f,33),HX_("new",60,d0,53,00)));
HXLINE(  24)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x332f6459) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x332f6459;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

void Main_obj::update( ::openfl::events::Event e){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_28_update)
HXLINE(  29)		if (this->startScreen->get_rulesButtonIsPressed()) {
HXLINE(  31)			this->removeChild(this->startScreen);
HXLINE(  32)			this->startScreen->reset();
HXLINE(  33)			this->addChild(this->rulesScreen);
            		}
HXLINE(  35)		if (this->rulesScreen->get_backButtonIsPressed()) {
HXLINE(  37)			this->removeChild(this->rulesScreen);
HXLINE(  38)			this->rulesScreen->reset();
HXLINE(  39)			this->addChild(this->startScreen);
            		}
HXLINE(  41)		if (this->startScreen->get_startButtonIsPressed()) {
HXLINE(  43)			this->removeChild(this->startScreen);
HXLINE(  44)			this->startScreen->reset();
HXLINE(  45)			this->game =  ::Game_obj::__alloc( HX_CTX ,this->sizeWidth,this->sizeHeight);
HXLINE(  46)			this->addChild(this->game);
            		}
HXLINE(  48)		if (this->contains(this->game)) {
HXLINE(  49)			if (this->game->get_quitButtonIsPressed()) {
HXLINE(  52)				this->removeChild(this->game);
HXLINE(  53)				this->addChild(this->startScreen);
HXLINE(  54)				this->game = null();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update,(void))


hx::ObjectPtr< Main_obj > Main_obj::__new() {
	hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Main_obj > Main_obj::__alloc(hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(sizeWidth,"sizeWidth");
	HX_MARK_MEMBER_NAME(sizeHeight,"sizeHeight");
	HX_MARK_MEMBER_NAME(startScreen,"startScreen");
	HX_MARK_MEMBER_NAME(rulesScreen,"rulesScreen");
	HX_MARK_MEMBER_NAME(game,"game");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sizeWidth,"sizeWidth");
	HX_VISIT_MEMBER_NAME(sizeHeight,"sizeHeight");
	HX_VISIT_MEMBER_NAME(startScreen,"startScreen");
	HX_VISIT_MEMBER_NAME(rulesScreen,"rulesScreen");
	HX_VISIT_MEMBER_NAME(game,"game");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return hx::Val( game ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sizeWidth") ) { return hx::Val( sizeWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sizeHeight") ) { return hx::Val( sizeHeight ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startScreen") ) { return hx::Val( startScreen ); }
		if (HX_FIELD_EQ(inName,"rulesScreen") ) { return hx::Val( rulesScreen ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Main_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast<  ::Game >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sizeWidth") ) { sizeWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sizeHeight") ) { sizeHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startScreen") ) { startScreen=inValue.Cast<  ::StartScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rulesScreen") ) { rulesScreen=inValue.Cast<  ::RulesScreen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sizeWidth",85,29,f9,c8));
	outFields->push(HX_("sizeHeight",88,a3,5a,c7));
	outFields->push(HX_("startScreen",6e,99,43,bf));
	outFields->push(HX_("rulesScreen",c3,e6,e9,fd));
	outFields->push(HX_("game",f2,f3,5e,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Main_obj,sizeWidth),HX_("sizeWidth",85,29,f9,c8)},
	{hx::fsInt,(int)offsetof(Main_obj,sizeHeight),HX_("sizeHeight",88,a3,5a,c7)},
	{hx::fsObject /*  ::StartScreen */ ,(int)offsetof(Main_obj,startScreen),HX_("startScreen",6e,99,43,bf)},
	{hx::fsObject /*  ::RulesScreen */ ,(int)offsetof(Main_obj,rulesScreen),HX_("rulesScreen",c3,e6,e9,fd)},
	{hx::fsObject /*  ::Game */ ,(int)offsetof(Main_obj,game),HX_("game",f2,f3,5e,44)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("sizeWidth",85,29,f9,c8),
	HX_("sizeHeight",88,a3,5a,c7),
	HX_("startScreen",6e,99,43,bf),
	HX_("rulesScreen",c3,e6,e9,fd),
	HX_("game",f2,f3,5e,44),
	HX_("update",09,86,05,87),
	::String(null()) };

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
