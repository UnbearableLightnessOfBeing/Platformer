// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_Game
#include <Game.h>
#endif
#ifndef INCLUDED_GameOverScreen
#include <GameOverScreen.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_21_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",21,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_40_update,"Main","update",0xb7afa57e,"Main.update","Main.hx",40,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_101_get_FPS,"Main","get_FPS",0x8adb934b,"Main.get_FPS","Main.hx",101,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_11_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",11,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_12_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",12,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_18_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",18,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_21_new)
HXLINE(  22)		super::__construct();
HXLINE(  23)		this->stage->set_frameRate(( (Float)(120) ));
HXLINE(  24)		this->startScreen =  ::StartScreen_obj::__alloc( HX_CTX ,::Main_obj::sizeWidth,::Main_obj::sizeHeight,hx::ObjectPtr<OBJ_>(this));
HXLINE(  25)		this->rulesScreen =  ::RulesScreen_obj::__alloc( HX_CTX ,::Main_obj::sizeWidth,::Main_obj::sizeHeight);
HXLINE(  26)		this->gameOverScreen =  ::GameOverScreen_obj::__alloc( HX_CTX );
HXLINE(  29)		this->addChild(this->startScreen);
HXLINE(  31)		 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN(  31)		::String _hx_tmp1 = (this->get_width() + HX_(" ",20,00,00,00));
HXDLIN(  31)		::String _hx_tmp2 = (_hx_tmp1 + this->get_height());
HXDLIN(  31)		_hx_tmp(_hx_tmp2,hx::SourceInfo(HX_("Source/Main.hx",b1,67,fd,ea),31,HX_("Main",59,64,2f,33),HX_("new",60,d0,53,00)));
HXLINE(  33)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
HXLINE(  35)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  35)		Float _hx_tmp3;
HXDLIN(  35)		if ((timer > 0)) {
HXLINE(  35)			_hx_tmp3 = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXLINE(  35)			_hx_tmp3 = ( (Float)(0) );
            		}
HXDLIN(  35)		this->timeFlag = _hx_tmp3;
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
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_40_update)
HXDLIN(  40)		int timer = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  40)		Float _hx_tmp;
HXDLIN(  40)		if ((timer > 0)) {
HXDLIN(  40)			_hx_tmp = (( (Float)(timer) ) / ( (Float)(1000) ));
            		}
            		else {
HXDLIN(  40)			_hx_tmp = ( (Float)(0) );
            		}
HXDLIN(  40)		Float _hx_tmp1 = (_hx_tmp - this->timeFlag);
HXDLIN(  40)		if ((_hx_tmp1 >= (( (Float)(1) ) / ( (Float)(::Main_obj::get_FPS()) )))) {
HXLINE(  42)			if (this->startScreen->get_rulesButtonIsPressed()) {
HXLINE(  44)				this->removeChild(this->startScreen);
HXLINE(  45)				this->startScreen->reset();
HXLINE(  46)				this->addChild(this->rulesScreen);
            			}
HXLINE(  48)			if (this->rulesScreen->get_backButtonIsPressed()) {
HXLINE(  50)				this->removeChild(this->rulesScreen);
HXLINE(  51)				this->rulesScreen->reset();
HXLINE(  52)				this->addChild(this->startScreen);
            			}
HXLINE(  54)			if (this->startScreen->get_startButtonIsPressed()) {
HXLINE(  56)				this->removeChild(this->startScreen);
HXLINE(  57)				this->startScreen->reset();
HXLINE(  58)				this->game =  ::Game_obj::__alloc( HX_CTX ,::Main_obj::sizeWidth,::Main_obj::sizeHeight);
HXLINE(  59)				this->addChild(this->game);
            			}
HXLINE(  61)			if (this->gameOverScreen->get_quitButtonIsPressed()) {
HXLINE(  63)				this->removeChild(this->gameOverScreen);
HXLINE(  64)				this->gameOverScreen->reset();
HXLINE(  65)				this->addChild(this->startScreen);
            			}
HXLINE(  67)			if (this->gameOverScreen->get_tryAgainButtonIsPressed()) {
HXLINE(  69)				this->removeChild(this->gameOverScreen);
HXLINE(  70)				this->gameOverScreen->reset();
HXLINE(  71)				this->game =  ::Game_obj::__alloc( HX_CTX ,::Main_obj::sizeWidth,::Main_obj::sizeHeight);
HXLINE(  72)				this->addChild(this->game);
            			}
HXLINE(  74)			if (this->contains(this->game)) {
HXLINE(  76)				if (this->game->get_quitButtonIsPressed()) {
HXLINE(  78)					this->removeChild(this->game);
HXLINE(  79)					this->addChild(this->startScreen);
HXLINE(  80)					this->game = null();
            				}
            				else {
HXLINE(  82)					if (this->game->get_gameIsOver()) {
HXLINE(  84)						this->removeChild(this->game);
HXLINE(  85)						 ::openfl::text::TextField _hx_tmp2 = this->gameOverScreen->pointsField;
HXDLIN(  85)						_hx_tmp2->set_text(::Std_obj::string(this->game->get_gamePoints()));
HXLINE(  86)						this->addChild(this->gameOverScreen);
HXLINE(  87)						this->game = null();
            					}
            				}
HXLINE(  89)				if (hx::IsNotNull( this->game )) {
HXLINE(  91)					this->game->update();
            				}
            			}
HXLINE(  94)			int timer1 = ::lime::_hx_system::System_obj::getTimer();
HXDLIN(  94)			Float _hx_tmp3;
HXDLIN(  94)			if ((timer1 > 0)) {
HXLINE(  94)				_hx_tmp3 = (( (Float)(timer1) ) / ( (Float)(1000) ));
            			}
            			else {
HXLINE(  94)				_hx_tmp3 = ( (Float)(0) );
            			}
HXDLIN(  94)			this->timeFlag = _hx_tmp3;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,update,(void))

int Main_obj::sizeWidth;

int Main_obj::sizeHeight;

int Main_obj::FPS;

int Main_obj::get_FPS(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_101_get_FPS)
HXDLIN( 101)		return ::Main_obj::FPS;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,get_FPS,return )


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
	HX_MARK_MEMBER_NAME(startScreen,"startScreen");
	HX_MARK_MEMBER_NAME(rulesScreen,"rulesScreen");
	HX_MARK_MEMBER_NAME(gameOverScreen,"gameOverScreen");
	HX_MARK_MEMBER_NAME(game,"game");
	HX_MARK_MEMBER_NAME(timeFlag,"timeFlag");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(startScreen,"startScreen");
	HX_VISIT_MEMBER_NAME(rulesScreen,"rulesScreen");
	HX_VISIT_MEMBER_NAME(gameOverScreen,"gameOverScreen");
	HX_VISIT_MEMBER_NAME(game,"game");
	HX_VISIT_MEMBER_NAME(timeFlag,"timeFlag");
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
	case 8:
		if (HX_FIELD_EQ(inName,"timeFlag") ) { return hx::Val( timeFlag ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startScreen") ) { return hx::Val( startScreen ); }
		if (HX_FIELD_EQ(inName,"rulesScreen") ) { return hx::Val( rulesScreen ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameOverScreen") ) { return hx::Val( gameOverScreen ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"FPS") ) { outValue = ( inCallProp == hx::paccAlways ? get_FPS() : FPS ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_FPS") ) { outValue = get_FPS_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sizeWidth") ) { outValue = ( sizeWidth ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sizeHeight") ) { outValue = ( sizeHeight ); return true; }
	}
	return false;
}

hx::Val Main_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast<  ::Game >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeFlag") ) { timeFlag=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"startScreen") ) { startScreen=inValue.Cast<  ::StartScreen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rulesScreen") ) { rulesScreen=inValue.Cast<  ::RulesScreen >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameOverScreen") ) { gameOverScreen=inValue.Cast<  ::GameOverScreen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"FPS") ) { FPS=ioValue.Cast< int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sizeWidth") ) { sizeWidth=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sizeHeight") ) { sizeHeight=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("startScreen",6e,99,43,bf));
	outFields->push(HX_("rulesScreen",c3,e6,e9,fd));
	outFields->push(HX_("gameOverScreen",72,12,97,bb));
	outFields->push(HX_("game",f2,f3,5e,44));
	outFields->push(HX_("timeFlag",59,8e,1f,e4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::StartScreen */ ,(int)offsetof(Main_obj,startScreen),HX_("startScreen",6e,99,43,bf)},
	{hx::fsObject /*  ::RulesScreen */ ,(int)offsetof(Main_obj,rulesScreen),HX_("rulesScreen",c3,e6,e9,fd)},
	{hx::fsObject /*  ::GameOverScreen */ ,(int)offsetof(Main_obj,gameOverScreen),HX_("gameOverScreen",72,12,97,bb)},
	{hx::fsObject /*  ::Game */ ,(int)offsetof(Main_obj,game),HX_("game",f2,f3,5e,44)},
	{hx::fsFloat,(int)offsetof(Main_obj,timeFlag),HX_("timeFlag",59,8e,1f,e4)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Main_obj::sizeWidth,HX_("sizeWidth",85,29,f9,c8)},
	{hx::fsInt,(void *) &Main_obj::sizeHeight,HX_("sizeHeight",88,a3,5a,c7)},
	{hx::fsInt,(void *) &Main_obj::FPS,HX_("FPS",c9,63,35,00)},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("startScreen",6e,99,43,bf),
	HX_("rulesScreen",c3,e6,e9,fd),
	HX_("gameOverScreen",72,12,97,bb),
	HX_("game",f2,f3,5e,44),
	HX_("timeFlag",59,8e,1f,e4),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::sizeWidth,"sizeWidth");
	HX_MARK_MEMBER_NAME(Main_obj::sizeHeight,"sizeHeight");
	HX_MARK_MEMBER_NAME(Main_obj::FPS,"FPS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::sizeWidth,"sizeWidth");
	HX_VISIT_MEMBER_NAME(Main_obj::sizeHeight,"sizeHeight");
	HX_VISIT_MEMBER_NAME(Main_obj::FPS,"FPS");
};

#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("sizeWidth",85,29,f9,c8),
	HX_("sizeHeight",88,a3,5a,c7),
	HX_("FPS",c9,63,35,00),
	HX_("get_FPS",60,2c,aa,26),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_11_boot)
HXDLIN(  11)		sizeWidth = 800;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_12_boot)
HXDLIN(  12)		sizeHeight = 600;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_18_boot)
HXDLIN(  18)		FPS = 60;
            	}
}

