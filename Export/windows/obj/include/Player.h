// Generated by Haxe 4.0.1
#ifndef INCLUDED_Player
#define INCLUDED_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Unit
#include <Unit.h>
#endif
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS0(State)
HX_DECLARE_CLASS0(Unit)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,KeyboardEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)



class HXCPP_CLASS_ATTRIBUTES Player_obj : public  ::Unit_obj
{
	public:
		typedef  ::Unit_obj super;
		typedef Player_obj OBJ_;
		Player_obj();

	public:
		enum { _hx_ClassId = 0x6c4d5f81 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Player")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"Player"); }
		static hx::ObjectPtr< Player_obj > __new();
		static hx::ObjectPtr< Player_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Player",81,5f,4d,6c); }

		::Array< ::Dynamic> idleWidthGun;
		::Array< ::Dynamic> walkWithGun;
		bool directionLeft;
		bool directionRight;
		 ::openfl::geom::Rectangle hitBox;
		 ::State state;
		Float timeFlag;
		Float frameTime;
		int ind;
		void spriteAnimated( ::State state);
		::Dynamic spriteAnimated_dyn();

		void updateSprite(::Array< ::Dynamic> spriteSheet);
		::Dynamic updateSprite_dyn();

		void keyDownHandler( ::openfl::events::KeyboardEvent e);
		::Dynamic keyDownHandler_dyn();

		void keyUpHandler( ::openfl::events::KeyboardEvent e);
		::Dynamic keyUpHandler_dyn();

		void move();
		::Dynamic move_dyn();

		 ::State get_state();
		::Dynamic get_state_dyn();

		void drawHitBox();
		::Dynamic drawHitBox_dyn();

};


#endif /* INCLUDED_Player */ 