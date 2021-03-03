// Generated by Haxe 4.0.1
#ifndef INCLUDED_lime__internal_graphics_StackBlur
#define INCLUDED_lime__internal_graphics_StackBlur

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_internal,graphics,StackBlur)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,math,Rectangle)
HX_DECLARE_CLASS2(lime,math,Vector2)

namespace lime{
namespace _internal{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES StackBlur_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef StackBlur_obj OBJ_;
		StackBlur_obj();

	public:
		enum { _hx_ClassId = 0x36afab3d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime._internal.graphics.StackBlur")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime._internal.graphics.StackBlur"); }

		inline static hx::ObjectPtr< StackBlur_obj > __new() {
			hx::ObjectPtr< StackBlur_obj > __this = new StackBlur_obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< StackBlur_obj > __alloc(hx::Ctx *_hx_ctx) {
			StackBlur_obj *__this = (StackBlur_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(StackBlur_obj), false, "lime._internal.graphics.StackBlur"));
			*(void **)__this = StackBlur_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StackBlur_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("StackBlur",ef,f9,e9,6d); }

		static void __boot();
		static ::Array< int > MUL_TABLE;
		static ::Array< int > SHG_TABLE;
		static void blur( ::lime::graphics::Image dest, ::lime::graphics::Image source, ::lime::math::Rectangle sourceRect, ::lime::math::Vector2 destPoint,Float blurX,Float blurY,int quality);
		static ::Dynamic blur_dyn();

		static void _hx___stackBlurCanvasRGBA( ::lime::graphics::Image image,int width,int height,Float blurX,Float blurY,int quality);
		static ::Dynamic _hx___stackBlurCanvasRGBA_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace graphics

#endif /* INCLUDED_lime__internal_graphics_StackBlur */ 
