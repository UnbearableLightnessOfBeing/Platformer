// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_display_GraphicsQuadPath
#define INCLUDED_openfl_display_GraphicsQuadPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display,GraphicsQuadPath)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsPath)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES GraphicsQuadPath_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GraphicsQuadPath_obj OBJ_;
		GraphicsQuadPath_obj();

	public:
		enum { _hx_ClassId = 0x780f1f49 };

		void __construct( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsQuadPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.GraphicsQuadPath"); }
		static hx::ObjectPtr< GraphicsQuadPath_obj > __new( ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms);
		static hx::ObjectPtr< GraphicsQuadPath_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::_Vector::FloatVector rects, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector transforms);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsQuadPath_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("GraphicsQuadPath",17,8e,a9,3a); }

		 ::openfl::_Vector::IntVector indices;
		 ::openfl::_Vector::FloatVector rects;
		 ::openfl::_Vector::FloatVector transforms;
		int _hx___graphicsDataType;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsQuadPath */ 
