// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_display__internal__DrawCommandReader_DrawCircleView_Impl_
#define INCLUDED_openfl_display__internal__DrawCommandReader_DrawCircleView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display,_internal,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,display,_internal,_DrawCommandReader,DrawCircleView_Impl_)

namespace openfl{
namespace display{
namespace _internal{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES DrawCircleView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef DrawCircleView_Impl__obj OBJ_;
		DrawCircleView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x210e438e };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_"); }

		inline static hx::ObjectPtr< DrawCircleView_Impl__obj > __new() {
			hx::ObjectPtr< DrawCircleView_Impl__obj > __this = new DrawCircleView_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< DrawCircleView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			DrawCircleView_Impl__obj *__this = (DrawCircleView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DrawCircleView_Impl__obj), false, "openfl.display._internal._DrawCommandReader.DrawCircleView_Impl_"));
			*(void **)__this = DrawCircleView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DrawCircleView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DrawCircleView_Impl_",39,2f,a7,15); }

		static  ::openfl::display::_internal::DrawCommandReader _new( ::openfl::display::_internal::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static Float get_x( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_x_dyn();

		static Float get_y( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_y_dyn();

		static Float get_radius( ::openfl::display::_internal::DrawCommandReader this1);
		static ::Dynamic get_radius_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl_display__internal__DrawCommandReader_DrawCircleView_Impl_ */ 
