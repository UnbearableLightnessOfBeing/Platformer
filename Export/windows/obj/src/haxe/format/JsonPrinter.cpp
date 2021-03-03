// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_59aca28affdf7337_56_new,"haxe.format.JsonPrinter","new",0xeb68de75,"haxe.format.JsonPrinter.new","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonPrinter.hx",56,0x660ed7d4)
HX_LOCAL_STACK_FRAME(_hx_pos_59aca28affdf7337_81_write,"haxe.format.JsonPrinter","write",0x755dea34,"haxe.format.JsonPrinter.write","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonPrinter.hx",81,0x660ed7d4)
static const ::String _hx_array_data_f7b98003_4[] = {
	HX_("null",87,9e,0e,49),
};
static const ::String _hx_array_data_f7b98003_5[] = {
	HX_("\"<fun>\"",09,3c,cc,8b),
};
static const ::String _hx_array_data_f7b98003_6[] = {
	HX_("\"???\"",45,2f,74,bd),
};
HX_LOCAL_STACK_FRAME(_hx_pos_59aca28affdf7337_158_classString,"haxe.format.JsonPrinter","classString",0x9219ba3e,"haxe.format.JsonPrinter.classString","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonPrinter.hx",158,0x660ed7d4)
HX_LOCAL_STACK_FRAME(_hx_pos_59aca28affdf7337_165_fieldsString,"haxe.format.JsonPrinter","fieldsString",0x974bd375,"haxe.format.JsonPrinter.fieldsString","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonPrinter.hx",165,0x660ed7d4)
HX_LOCAL_STACK_FRAME(_hx_pos_59aca28affdf7337_196_quote,"haxe.format.JsonPrinter","quote",0x02f6a091,"haxe.format.JsonPrinter.quote","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonPrinter.hx",196,0x660ed7d4)
static const ::String _hx_array_data_f7b98003_12[] = {
	HX_("\\b",86,50,00,00),
};
static const ::String _hx_array_data_f7b98003_13[] = {
	HX_("\\t",98,50,00,00),
};
static const ::String _hx_array_data_f7b98003_14[] = {
	HX_("\\n",92,50,00,00),
};
static const ::String _hx_array_data_f7b98003_15[] = {
	HX_("\\f",8a,50,00,00),
};
static const ::String _hx_array_data_f7b98003_16[] = {
	HX_("\\r",96,50,00,00),
};
static const ::String _hx_array_data_f7b98003_17[] = {
	HX_("\\\"",46,50,00,00),
};
static const ::String _hx_array_data_f7b98003_18[] = {
	HX_("\\\\",80,50,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_59aca28affdf7337_44_print,"haxe.format.JsonPrinter","print",0x6d8fd582,"haxe.format.JsonPrinter.print","C:\\HaxeToolkit\\haxe\\std/haxe/format/JsonPrinter.hx",44,0x660ed7d4)
namespace haxe{
namespace format{

void JsonPrinter_obj::__construct( ::Dynamic replacer,::String space){
            	HX_GC_STACKFRAME(&_hx_pos_59aca28affdf7337_56_new)
HXLINE(  57)		this->replacer = replacer;
HXLINE(  58)		this->indent = space;
HXLINE(  59)		this->pretty = hx::IsNotNull( space );
HXLINE(  60)		this->nind = 0;
HXLINE(  67)		this->buf =  ::StringBuf_obj::__alloc( HX_CTX );
            	}

Dynamic JsonPrinter_obj::__CreateEmpty() { return new JsonPrinter_obj; }

void *JsonPrinter_obj::_hx_vtable = 0;

Dynamic JsonPrinter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JsonPrinter_obj > _hx_result = new JsonPrinter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool JsonPrinter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55464e91;
}

void JsonPrinter_obj::write( ::Dynamic k, ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_59aca28affdf7337_81_write)
HXLINE(  82)		if (hx::IsNotNull( this->replacer )) {
HXLINE(  83)			v = this->replacer(k,v);
            		}
HXLINE(  84)		{
HXLINE(  84)			 ::ValueType _g = ::Type_obj::_hx_typeof(v);
HXDLIN(  84)			switch((int)(_g->_hx_getIndex())){
            				case (int)0: {
HXLINE( 136)					 ::StringBuf _this = this->buf;
HXDLIN( 136)					if (hx::IsNotNull( _this->charBuf )) {
HXLINE( 136)						_this->flush();
            					}
HXDLIN( 136)					if (hx::IsNull( _this->b )) {
HXLINE( 136)						_this->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_4,1);
            					}
            					else {
HXLINE( 136)						_this->b->push(HX_("null",87,9e,0e,49));
            					}
            				}
            				break;
            				case (int)1: {
HXLINE(  90)					::String v1 = ( (::String)(v) );
HXDLIN(  90)					{
HXLINE(  90)						 ::StringBuf _this1 = this->buf;
HXDLIN(  90)						if (hx::IsNotNull( _this1->charBuf )) {
HXLINE(  90)							_this1->flush();
            						}
HXDLIN(  90)						if (hx::IsNull( _this1->b )) {
HXLINE(  90)							_this1->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v1));
            						}
            						else {
HXLINE(  90)							::Array< ::String > _this2 = _this1->b;
HXDLIN(  90)							_this2->push(::Std_obj::string(v1));
            						}
            					}
            				}
            				break;
            				case (int)2: {
HXLINE(  92)					::String v2;
HXDLIN(  92)					if (::Math_obj::isFinite(( (Float)(v) ))) {
HXLINE(  92)						v2 = ::Std_obj::string(v);
            					}
            					else {
HXLINE(  92)						v2 = HX_("null",87,9e,0e,49);
            					}
HXDLIN(  92)					{
HXLINE(  92)						 ::StringBuf _this3 = this->buf;
HXDLIN(  92)						if (hx::IsNotNull( _this3->charBuf )) {
HXLINE(  92)							_this3->flush();
            						}
HXDLIN(  92)						if (hx::IsNull( _this3->b )) {
HXLINE(  92)							_this3->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v2));
            						}
            						else {
HXLINE(  92)							::Array< ::String > _this4 = _this3->b;
HXDLIN(  92)							_this4->push(::Std_obj::string(v2));
            						}
            					}
            				}
            				break;
            				case (int)3: {
HXLINE( 134)					::String v3 = ( (::String)(v) );
HXDLIN( 134)					{
HXLINE( 134)						 ::StringBuf _this5 = this->buf;
HXDLIN( 134)						if (hx::IsNotNull( _this5->charBuf )) {
HXLINE( 134)							_this5->flush();
            						}
HXDLIN( 134)						if (hx::IsNull( _this5->b )) {
HXLINE( 134)							_this5->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v3));
            						}
            						else {
HXLINE( 134)							::Array< ::String > _this6 = _this5->b;
HXDLIN( 134)							_this6->push(::Std_obj::string(v3));
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE(  88)					this->fieldsString(v,::Reflect_obj::fields(v));
            				}
            				break;
            				case (int)5: {
HXLINE(  94)					 ::StringBuf _this7 = this->buf;
HXDLIN(  94)					if (hx::IsNotNull( _this7->charBuf )) {
HXLINE(  94)						_this7->flush();
            					}
HXDLIN(  94)					if (hx::IsNull( _this7->b )) {
HXLINE(  94)						_this7->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_5,1);
            					}
            					else {
HXLINE(  94)						_this7->b->push(HX_("\"<fun>\"",09,3c,cc,8b));
            					}
            				}
            				break;
            				case (int)6: {
HXLINE(  95)					hx::Class c = _g->_hx_getObject(0).StaticCast< hx::Class >();
HXLINE(  96)					if (hx::IsEq( c,hx::ClassOf< ::String >() )) {
HXLINE(  97)						this->quote(( (::String)(v) ));
            					}
            					else {
HXLINE(  98)						if (hx::IsEq( c,hx::ArrayBase::__mClass )) {
HXLINE(  99)							::cpp::VirtualArray v4 = ( (::cpp::VirtualArray)(v) );
HXLINE( 100)							{
HXLINE( 100)								 ::StringBuf _this8 = this->buf;
HXDLIN( 100)								{
HXLINE( 100)									if (hx::IsNull( _this8->charBuf )) {
HXLINE( 100)										_this8->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 100)									_this8->charBuf->push(91);
            								}
            							}
HXLINE( 102)							int len = v4->get_length();
HXLINE( 103)							int last = (len - 1);
HXLINE( 104)							{
HXLINE( 104)								int _g1 = 0;
HXDLIN( 104)								int _g11 = len;
HXDLIN( 104)								while((_g1 < _g11)){
HXLINE( 104)									_g1 = (_g1 + 1);
HXDLIN( 104)									int i = (_g1 - 1);
HXLINE( 105)									if ((i > 0)) {
HXLINE( 106)										 ::StringBuf _this9 = this->buf;
HXDLIN( 106)										{
HXLINE( 106)											if (hx::IsNull( _this9->charBuf )) {
HXLINE( 106)												_this9->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN( 106)											_this9->charBuf->push(44);
            										}
            									}
            									else {
HXLINE( 108)										this->nind++;
            									}
HXLINE( 109)									if (this->pretty) {
HXLINE( 109)										 ::StringBuf _this10 = this->buf;
HXDLIN( 109)										{
HXLINE( 109)											if (hx::IsNull( _this10->charBuf )) {
HXLINE( 109)												_this10->charBuf = ::Array_obj< char >::__new();
            											}
HXDLIN( 109)											_this10->charBuf->push(10);
            										}
            									}
HXLINE( 110)									if (this->pretty) {
HXLINE( 110)										::String v5 = ::StringTools_obj::lpad(HX_("",00,00,00,00),this->indent,(this->nind * this->indent.length));
HXDLIN( 110)										{
HXLINE( 110)											 ::StringBuf _this11 = this->buf;
HXDLIN( 110)											if (hx::IsNotNull( _this11->charBuf )) {
HXLINE( 110)												_this11->flush();
            											}
HXDLIN( 110)											if (hx::IsNull( _this11->b )) {
HXLINE( 110)												_this11->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v5));
            											}
            											else {
HXLINE( 110)												::Array< ::String > _this12 = _this11->b;
HXDLIN( 110)												_this12->push(::Std_obj::string(v5));
            											}
            										}
            									}
HXLINE( 111)									this->write(i,v4->__get(i));
HXLINE( 112)									if ((i == last)) {
HXLINE( 113)										this->nind--;
HXLINE( 114)										if (this->pretty) {
HXLINE( 114)											 ::StringBuf _this13 = this->buf;
HXDLIN( 114)											{
HXLINE( 114)												if (hx::IsNull( _this13->charBuf )) {
HXLINE( 114)													_this13->charBuf = ::Array_obj< char >::__new();
            												}
HXDLIN( 114)												_this13->charBuf->push(10);
            											}
            										}
HXLINE( 115)										if (this->pretty) {
HXLINE( 115)											::String v6 = ::StringTools_obj::lpad(HX_("",00,00,00,00),this->indent,(this->nind * this->indent.length));
HXDLIN( 115)											{
HXLINE( 115)												 ::StringBuf _this14 = this->buf;
HXDLIN( 115)												if (hx::IsNotNull( _this14->charBuf )) {
HXLINE( 115)													_this14->flush();
            												}
HXDLIN( 115)												if (hx::IsNull( _this14->b )) {
HXLINE( 115)													_this14->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v6));
            												}
            												else {
HXLINE( 115)													::Array< ::String > _this15 = _this14->b;
HXDLIN( 115)													_this15->push(::Std_obj::string(v6));
            												}
            											}
            										}
            									}
            								}
            							}
HXLINE( 118)							{
HXLINE( 118)								 ::StringBuf _this16 = this->buf;
HXDLIN( 118)								{
HXLINE( 118)									if (hx::IsNull( _this16->charBuf )) {
HXLINE( 118)										_this16->charBuf = ::Array_obj< char >::__new();
            									}
HXDLIN( 118)									_this16->charBuf->push(93);
            								}
            							}
            						}
            						else {
HXLINE( 119)							if (hx::IsEq( c,hx::ClassOf< ::haxe::ds::StringMap >() )) {
HXLINE( 120)								 ::haxe::ds::StringMap v7 = ( ( ::haxe::ds::StringMap)(v) );
HXLINE( 121)								 ::Dynamic o =  ::Dynamic(hx::Anon_obj::Create(0));
HXLINE( 122)								{
HXLINE( 122)									 ::Dynamic k1 = v7->keys();
HXDLIN( 122)									while(( (bool)(k1->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic)()) )){
HXLINE( 122)										::String k2 = ( (::String)(k1->__Field(HX_("next",f3,84,02,49),hx::paccDynamic)()) );
HXLINE( 123)										::Reflect_obj::setField(o,k2,v7->get(k2));
            									}
            								}
HXLINE( 124)								{
HXLINE( 124)									 ::Dynamic v8 = o;
HXDLIN( 124)									this->fieldsString(v8,::Reflect_obj::fields(v8));
            								}
            							}
            							else {
HXLINE( 125)								if (hx::IsEq( c,hx::ClassOf< ::Date >() )) {
HXLINE( 126)									 ::Date v9 = ( ( ::Date)(v) );
HXLINE( 127)									this->quote(v9->toString());
            								}
            								else {
HXLINE( 129)									this->classString(v);
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)7: {
HXLINE( 130)					hx::Class _g12 = _g->_hx_getObject(0).StaticCast< hx::Class >();
HXDLIN( 130)					{
HXLINE( 131)						 ::Dynamic i1 = _hx_getEnumValueIndex(v);
HXLINE( 132)						{
HXLINE( 132)							::String v10 = ( (::String)(i1) );
HXDLIN( 132)							{
HXLINE( 132)								 ::StringBuf _this17 = this->buf;
HXDLIN( 132)								if (hx::IsNotNull( _this17->charBuf )) {
HXLINE( 132)									_this17->flush();
            								}
HXDLIN( 132)								if (hx::IsNull( _this17->b )) {
HXLINE( 132)									_this17->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v10));
            								}
            								else {
HXLINE( 132)									::Array< ::String > _this18 = _this17->b;
HXDLIN( 132)									_this18->push(::Std_obj::string(v10));
            								}
            							}
            						}
            					}
            				}
            				break;
            				case (int)8: {
HXLINE(  86)					 ::StringBuf _this19 = this->buf;
HXDLIN(  86)					if (hx::IsNotNull( _this19->charBuf )) {
HXLINE(  86)						_this19->flush();
            					}
HXDLIN(  86)					if (hx::IsNull( _this19->b )) {
HXLINE(  86)						_this19->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_6,1);
            					}
            					else {
HXLINE(  86)						_this19->b->push(HX_("\"???\"",45,2f,74,bd));
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(JsonPrinter_obj,write,(void))

void JsonPrinter_obj::classString( ::Dynamic v){
            	HX_STACKFRAME(&_hx_pos_59aca28affdf7337_158_classString)
HXDLIN( 158)		this->fieldsString(v,::Type_obj::getInstanceFields(::Type_obj::getClass(v)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonPrinter_obj,classString,(void))

void JsonPrinter_obj::fieldsString( ::Dynamic v,::Array< ::String > fields){
            	HX_STACKFRAME(&_hx_pos_59aca28affdf7337_165_fieldsString)
HXLINE( 166)		{
HXLINE( 166)			 ::StringBuf _this = this->buf;
HXDLIN( 166)			{
HXLINE( 166)				if (hx::IsNull( _this->charBuf )) {
HXLINE( 166)					_this->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN( 166)				_this->charBuf->push(123);
            			}
            		}
HXLINE( 167)		int len = fields->length;
HXLINE( 168)		int last = (len - 1);
HXLINE( 169)		bool first = true;
HXLINE( 170)		{
HXLINE( 170)			int _g = 0;
HXDLIN( 170)			int _g1 = len;
HXDLIN( 170)			while((_g < _g1)){
HXLINE( 170)				_g = (_g + 1);
HXDLIN( 170)				int i = (_g - 1);
HXLINE( 171)				::String f = fields->__get(i);
HXLINE( 172)				 ::Dynamic value = ::Reflect_obj::field(v,f);
HXLINE( 173)				if (::Reflect_obj::isFunction(value)) {
HXLINE( 174)					continue;
            				}
HXLINE( 175)				if (first) {
HXLINE( 176)					this->nind++;
HXLINE( 177)					first = false;
            				}
            				else {
HXLINE( 179)					 ::StringBuf _this1 = this->buf;
HXDLIN( 179)					{
HXLINE( 179)						if (hx::IsNull( _this1->charBuf )) {
HXLINE( 179)							_this1->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 179)						_this1->charBuf->push(44);
            					}
            				}
HXLINE( 180)				if (this->pretty) {
HXLINE( 180)					 ::StringBuf _this2 = this->buf;
HXDLIN( 180)					{
HXLINE( 180)						if (hx::IsNull( _this2->charBuf )) {
HXLINE( 180)							_this2->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 180)						_this2->charBuf->push(10);
            					}
            				}
HXLINE( 181)				if (this->pretty) {
HXLINE( 181)					::String v1 = ::StringTools_obj::lpad(HX_("",00,00,00,00),this->indent,(this->nind * this->indent.length));
HXDLIN( 181)					{
HXLINE( 181)						 ::StringBuf _this3 = this->buf;
HXDLIN( 181)						if (hx::IsNotNull( _this3->charBuf )) {
HXLINE( 181)							_this3->flush();
            						}
HXDLIN( 181)						if (hx::IsNull( _this3->b )) {
HXLINE( 181)							_this3->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v1));
            						}
            						else {
HXLINE( 181)							::Array< ::String > _this4 = _this3->b;
HXDLIN( 181)							_this4->push(::Std_obj::string(v1));
            						}
            					}
            				}
HXLINE( 182)				this->quote(f);
HXLINE( 183)				{
HXLINE( 183)					 ::StringBuf _this5 = this->buf;
HXDLIN( 183)					{
HXLINE( 183)						if (hx::IsNull( _this5->charBuf )) {
HXLINE( 183)							_this5->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 183)						_this5->charBuf->push(58);
            					}
            				}
HXLINE( 184)				if (this->pretty) {
HXLINE( 185)					 ::StringBuf _this6 = this->buf;
HXDLIN( 185)					{
HXLINE( 185)						if (hx::IsNull( _this6->charBuf )) {
HXLINE( 185)							_this6->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 185)						_this6->charBuf->push(32);
            					}
            				}
HXLINE( 186)				this->write(f,value);
HXLINE( 187)				if ((i == last)) {
HXLINE( 188)					this->nind--;
HXLINE( 189)					if (this->pretty) {
HXLINE( 189)						 ::StringBuf _this7 = this->buf;
HXDLIN( 189)						{
HXLINE( 189)							if (hx::IsNull( _this7->charBuf )) {
HXLINE( 189)								_this7->charBuf = ::Array_obj< char >::__new();
            							}
HXDLIN( 189)							_this7->charBuf->push(10);
            						}
            					}
HXLINE( 190)					if (this->pretty) {
HXLINE( 190)						::String v2 = ::StringTools_obj::lpad(HX_("",00,00,00,00),this->indent,(this->nind * this->indent.length));
HXDLIN( 190)						{
HXLINE( 190)							 ::StringBuf _this8 = this->buf;
HXDLIN( 190)							if (hx::IsNotNull( _this8->charBuf )) {
HXLINE( 190)								_this8->flush();
            							}
HXDLIN( 190)							if (hx::IsNull( _this8->b )) {
HXLINE( 190)								_this8->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(v2));
            							}
            							else {
HXLINE( 190)								::Array< ::String > _this9 = _this8->b;
HXDLIN( 190)								_this9->push(::Std_obj::string(v2));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 193)		{
HXLINE( 193)			 ::StringBuf _this10 = this->buf;
HXDLIN( 193)			{
HXLINE( 193)				if (hx::IsNull( _this10->charBuf )) {
HXLINE( 193)					_this10->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN( 193)				_this10->charBuf->push(125);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(JsonPrinter_obj,fieldsString,(void))

void JsonPrinter_obj::quote(::String s){
            	HX_STACKFRAME(&_hx_pos_59aca28affdf7337_196_quote)
HXLINE( 203)		{
HXLINE( 203)			 ::StringBuf _this = this->buf;
HXDLIN( 203)			{
HXLINE( 203)				if (hx::IsNull( _this->charBuf )) {
HXLINE( 203)					_this->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN( 203)				_this->charBuf->push(34);
            			}
            		}
HXLINE( 204)		int i = 0;
HXLINE( 208)		while(true){
HXLINE( 209)			i = (i + 1);
HXDLIN( 209)			int c = s.cca((i - 1));
HXLINE( 210)			if ((c == 0)) {
HXLINE( 211)				goto _hx_goto_10;
            			}
HXLINE( 212)			switch((int)(c)){
            				case (int)8: {
HXLINE( 224)					 ::StringBuf _this1 = this->buf;
HXDLIN( 224)					if (hx::IsNotNull( _this1->charBuf )) {
HXLINE( 224)						_this1->flush();
            					}
HXDLIN( 224)					if (hx::IsNull( _this1->b )) {
HXLINE( 224)						_this1->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_12,1);
            					}
            					else {
HXLINE( 224)						_this1->b->push(HX_("\\b",86,50,00,00));
            					}
            				}
            				break;
            				case (int)9: {
HXLINE( 222)					 ::StringBuf _this2 = this->buf;
HXDLIN( 222)					if (hx::IsNotNull( _this2->charBuf )) {
HXLINE( 222)						_this2->flush();
            					}
HXDLIN( 222)					if (hx::IsNull( _this2->b )) {
HXLINE( 222)						_this2->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_13,1);
            					}
            					else {
HXLINE( 222)						_this2->b->push(HX_("\\t",98,50,00,00));
            					}
            				}
            				break;
            				case (int)10: {
HXLINE( 218)					 ::StringBuf _this3 = this->buf;
HXDLIN( 218)					if (hx::IsNotNull( _this3->charBuf )) {
HXLINE( 218)						_this3->flush();
            					}
HXDLIN( 218)					if (hx::IsNull( _this3->b )) {
HXLINE( 218)						_this3->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_14,1);
            					}
            					else {
HXLINE( 218)						_this3->b->push(HX_("\\n",92,50,00,00));
            					}
            				}
            				break;
            				case (int)12: {
HXLINE( 226)					 ::StringBuf _this4 = this->buf;
HXDLIN( 226)					if (hx::IsNotNull( _this4->charBuf )) {
HXLINE( 226)						_this4->flush();
            					}
HXDLIN( 226)					if (hx::IsNull( _this4->b )) {
HXLINE( 226)						_this4->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_15,1);
            					}
            					else {
HXLINE( 226)						_this4->b->push(HX_("\\f",8a,50,00,00));
            					}
            				}
            				break;
            				case (int)13: {
HXLINE( 220)					 ::StringBuf _this5 = this->buf;
HXDLIN( 220)					if (hx::IsNotNull( _this5->charBuf )) {
HXLINE( 220)						_this5->flush();
            					}
HXDLIN( 220)					if (hx::IsNull( _this5->b )) {
HXLINE( 220)						_this5->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_16,1);
            					}
            					else {
HXLINE( 220)						_this5->b->push(HX_("\\r",96,50,00,00));
            					}
            				}
            				break;
            				case (int)34: {
HXLINE( 214)					 ::StringBuf _this6 = this->buf;
HXDLIN( 214)					if (hx::IsNotNull( _this6->charBuf )) {
HXLINE( 214)						_this6->flush();
            					}
HXDLIN( 214)					if (hx::IsNull( _this6->b )) {
HXLINE( 214)						_this6->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_17,1);
            					}
            					else {
HXLINE( 214)						_this6->b->push(HX_("\\\"",46,50,00,00));
            					}
            				}
            				break;
            				case (int)92: {
HXLINE( 216)					 ::StringBuf _this7 = this->buf;
HXDLIN( 216)					if (hx::IsNotNull( _this7->charBuf )) {
HXLINE( 216)						_this7->flush();
            					}
HXDLIN( 216)					if (hx::IsNull( _this7->b )) {
HXLINE( 216)						_this7->b = ::Array_obj< ::String >::fromData( _hx_array_data_f7b98003_18,1);
            					}
            					else {
HXLINE( 216)						_this7->b->push(HX_("\\\\",80,50,00,00));
            					}
            				}
            				break;
            				default:{
HXLINE( 249)					 ::StringBuf _this8 = this->buf;
HXDLIN( 249)					if ((c >= 127)) {
HXLINE( 249)						::String x = ::String::fromCharCode(c);
HXDLIN( 249)						if (hx::IsNotNull( _this8->charBuf )) {
HXLINE( 249)							_this8->flush();
            						}
HXDLIN( 249)						if (hx::IsNull( _this8->b )) {
HXLINE( 249)							_this8->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 249)							::Array< ::String > _this9 = _this8->b;
HXDLIN( 249)							_this9->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 249)						if (hx::IsNull( _this8->charBuf )) {
HXLINE( 249)							_this8->charBuf = ::Array_obj< char >::__new();
            						}
HXDLIN( 249)						_this8->charBuf->push(c);
            					}
            				}
            			}
            		}
            		_hx_goto_10:;
HXLINE( 257)		{
HXLINE( 257)			 ::StringBuf _this10 = this->buf;
HXDLIN( 257)			{
HXLINE( 257)				if (hx::IsNull( _this10->charBuf )) {
HXLINE( 257)					_this10->charBuf = ::Array_obj< char >::__new();
            				}
HXDLIN( 257)				_this10->charBuf->push(34);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(JsonPrinter_obj,quote,(void))

::String JsonPrinter_obj::print( ::Dynamic o, ::Dynamic replacer,::String space){
            	HX_GC_STACKFRAME(&_hx_pos_59aca28affdf7337_44_print)
HXLINE(  45)		 ::haxe::format::JsonPrinter printer =  ::haxe::format::JsonPrinter_obj::__alloc( HX_CTX ,replacer,space);
HXLINE(  46)		printer->write(HX_("",00,00,00,00),o);
HXLINE(  47)		return printer->buf->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(JsonPrinter_obj,print,return )


hx::ObjectPtr< JsonPrinter_obj > JsonPrinter_obj::__new( ::Dynamic replacer,::String space) {
	hx::ObjectPtr< JsonPrinter_obj > __this = new JsonPrinter_obj();
	__this->__construct(replacer,space);
	return __this;
}

hx::ObjectPtr< JsonPrinter_obj > JsonPrinter_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic replacer,::String space) {
	JsonPrinter_obj *__this = (JsonPrinter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JsonPrinter_obj), true, "haxe.format.JsonPrinter"));
	*(void **)__this = JsonPrinter_obj::_hx_vtable;
	__this->__construct(replacer,space);
	return __this;
}

JsonPrinter_obj::JsonPrinter_obj()
{
}

void JsonPrinter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(JsonPrinter);
	HX_MARK_MEMBER_NAME(buf,"buf");
	HX_MARK_MEMBER_NAME(replacer,"replacer");
	HX_MARK_MEMBER_NAME(indent,"indent");
	HX_MARK_MEMBER_NAME(pretty,"pretty");
	HX_MARK_MEMBER_NAME(nind,"nind");
	HX_MARK_END_CLASS();
}

void JsonPrinter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buf,"buf");
	HX_VISIT_MEMBER_NAME(replacer,"replacer");
	HX_VISIT_MEMBER_NAME(indent,"indent");
	HX_VISIT_MEMBER_NAME(pretty,"pretty");
	HX_VISIT_MEMBER_NAME(nind,"nind");
}

hx::Val JsonPrinter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { return hx::Val( buf ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"nind") ) { return hx::Val( nind ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { return hx::Val( write_dyn() ); }
		if (HX_FIELD_EQ(inName,"quote") ) { return hx::Val( quote_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { return hx::Val( indent ); }
		if (HX_FIELD_EQ(inName,"pretty") ) { return hx::Val( pretty ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { return hx::Val( replacer ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"classString") ) { return hx::Val( classString_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fieldsString") ) { return hx::Val( fieldsString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool JsonPrinter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"print") ) { outValue = print_dyn(); return true; }
	}
	return false;
}

hx::Val JsonPrinter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"buf") ) { buf=inValue.Cast<  ::StringBuf >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"nind") ) { nind=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"indent") ) { indent=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pretty") ) { pretty=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"replacer") ) { replacer=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JsonPrinter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buf",33,c3,4a,00));
	outFields->push(HX_("indent",6c,0c,f3,93));
	outFields->push(HX_("pretty",b6,82,c1,ae));
	outFields->push(HX_("nind",31,85,05,49));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo JsonPrinter_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*  ::StringBuf */ ,(int)offsetof(JsonPrinter_obj,buf),HX_("buf",33,c3,4a,00)},
	{hx::fsObject /*  ::Dynamic */ ,(int)offsetof(JsonPrinter_obj,replacer),HX_("replacer",be,e5,16,18)},
	{hx::fsString,(int)offsetof(JsonPrinter_obj,indent),HX_("indent",6c,0c,f3,93)},
	{hx::fsBool,(int)offsetof(JsonPrinter_obj,pretty),HX_("pretty",b6,82,c1,ae)},
	{hx::fsInt,(int)offsetof(JsonPrinter_obj,nind),HX_("nind",31,85,05,49)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JsonPrinter_obj_sStaticStorageInfo = 0;
#endif

static ::String JsonPrinter_obj_sMemberFields[] = {
	HX_("buf",33,c3,4a,00),
	HX_("replacer",be,e5,16,18),
	HX_("indent",6c,0c,f3,93),
	HX_("pretty",b6,82,c1,ae),
	HX_("nind",31,85,05,49),
	HX_("write",df,6c,59,d0),
	HX_("classString",29,0f,79,88),
	HX_("fieldsString",2a,cc,56,34),
	HX_("quote",3c,23,f2,5d),
	::String(null()) };

hx::Class JsonPrinter_obj::__mClass;

static ::String JsonPrinter_obj_sStaticFields[] = {
	HX_("print",2d,58,8b,c8),
	::String(null())
};

void JsonPrinter_obj::__register()
{
	JsonPrinter_obj _hx_dummy;
	JsonPrinter_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("haxe.format.JsonPrinter",03,80,b9,f7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JsonPrinter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(JsonPrinter_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JsonPrinter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JsonPrinter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JsonPrinter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JsonPrinter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace format
