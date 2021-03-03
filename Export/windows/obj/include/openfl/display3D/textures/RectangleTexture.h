// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#define INCLUDED_openfl_display3D_textures_RectangleTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,display,_internal,SamplerState)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)

namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES RectangleTexture_obj : public  ::openfl::display3D::textures::TextureBase_obj
{
	public:
		typedef  ::openfl::display3D::textures::TextureBase_obj super;
		typedef RectangleTexture_obj OBJ_;
		RectangleTexture_obj();

	public:
		enum { _hx_ClassId = 0x0b79cce7 };

		void __construct( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.RectangleTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.textures.RectangleTexture"); }
		static hx::ObjectPtr< RectangleTexture_obj > __new( ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture);
		static hx::ObjectPtr< RectangleTexture_obj > __alloc(hx::Ctx *_hx_ctx, ::openfl::display3D::Context3D context,int width,int height,::String format,bool optimizeForRenderToTexture);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RectangleTexture_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RectangleTexture",8c,6c,f5,1a); }

		void uploadFromBitmapData( ::openfl::display::BitmapData source);
		::Dynamic uploadFromBitmapData_dyn();

		void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset);
		::Dynamic uploadFromByteArray_dyn();

		void uploadFromTypedArray( ::lime::utils::ArrayBufferView data);
		::Dynamic uploadFromTypedArray_dyn();

		bool _hx___setSamplerState( ::openfl::display::_internal::SamplerState state);

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_RectangleTexture */ 
