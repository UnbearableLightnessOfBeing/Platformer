// Generated by Haxe 4.0.1
#ifndef INCLUDED_lime_graphics_opengl__GLQuery_GLQuery_Impl_
#define INCLUDED_lime_graphics_opengl__GLQuery_GLQuery_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_GLQuery,GLQuery_Impl_)

namespace lime{
namespace graphics{
namespace opengl{
namespace _GLQuery{


class HXCPP_CLASS_ATTRIBUTES GLQuery_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLQuery_Impl__obj OBJ_;
		GLQuery_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7f05a470 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._GLQuery.GLQuery_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._GLQuery.GLQuery_Impl_"); }

		inline static hx::ObjectPtr< GLQuery_Impl__obj > __new() {
			hx::ObjectPtr< GLQuery_Impl__obj > __this = new GLQuery_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static hx::ObjectPtr< GLQuery_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			GLQuery_Impl__obj *__this = (GLQuery_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLQuery_Impl__obj), false, "lime.graphics.opengl._GLQuery.GLQuery_Impl_"));
			*(void **)__this = GLQuery_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLQuery_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLQuery_Impl_",83,af,83,2b); }

		static  ::lime::graphics::opengl::GLObject fromInt(int id);
		static ::Dynamic fromInt_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLQuery

#endif /* INCLUDED_lime_graphics_opengl__GLQuery_GLQuery_Impl_ */ 
