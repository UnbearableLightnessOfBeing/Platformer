// Generated by Haxe 4.0.1
#include <hxcpp.h>

#ifndef INCLUDED_GameLevel
#include <GameLevel.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_ITileContainer
#include <openfl/display/ITileContainer.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Tile
#include <openfl/display/Tile.h>
#endif
#ifndef INCLUDED_openfl_display_Tilemap
#include <openfl/display/Tilemap.h>
#endif
#ifndef INCLUDED_openfl_display_Tileset
#include <openfl/display/Tileset.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_429e452b6bbe1ad4_26_new,"GameLevel","new",0x0984f604,"GameLevel.new","GameLevel.hx",26,0x295eb5ec)
HX_LOCAL_STACK_FRAME(_hx_pos_429e452b6bbe1ad4_55_addTiles,"GameLevel","addTiles",0x55a20b80,"GameLevel.addTiles","GameLevel.hx",55,0x295eb5ec)

void GameLevel_obj::__construct(int width,int height){
            	HX_GC_STACKFRAME(&_hx_pos_429e452b6bbe1ad4_26_new)
HXLINE(  27)		super::__construct();
HXLINE(  28)		this->sizeWidth = width;
HXLINE(  29)		this->sizeHeight = height;
HXLINE(  31)		this->bmpData = ::openfl::utils::Assets_obj::getBitmapData(HX_("assets/tileMap/PixelAtlas.png",2d,58,a3,27),null());
HXLINE(  33)		this->tileset =  ::openfl::display::Tileset_obj::__alloc( HX_CTX ,this->bmpData,null());
HXLINE(  34)		this->tilemap =  ::openfl::display::Tilemap_obj::__alloc( HX_CTX ,this->sizeWidth,this->sizeHeight,this->tileset,null());
HXLINE(  35)		this->addChild(this->tilemap);
HXLINE(  37)		 ::openfl::display::Tileset ind1 = this->tileset;
HXDLIN(  37)		int ind11 = ind1->addRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,0,0,32,32));
HXLINE(  38)		 ::openfl::display::Tileset ind2 = this->tileset;
HXDLIN(  38)		int ind21 = ind2->addRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,32,0,32,32));
HXLINE(  39)		 ::openfl::display::Tileset ind3 = this->tileset;
HXDLIN(  39)		int ind31 = ind3->addRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,64,0,32,32));
HXLINE(  40)		 ::openfl::display::Tileset ind4 = this->tileset;
HXDLIN(  40)		int ind41 = ind4->addRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,96,0,32,32));
HXLINE(  42)		this->IDs = ::Array_obj< int >::__new(0);
HXLINE(  43)		this->IDs->push(ind11);
HXLINE(  44)		this->IDs->push(ind21);
HXLINE(  45)		this->IDs->push(ind31);
HXLINE(  46)		this->IDs->push(ind41);
HXLINE(  47)		this->addTiles();
            	}

Dynamic GameLevel_obj::__CreateEmpty() { return new GameLevel_obj; }

void *GameLevel_obj::_hx_vtable = 0;

Dynamic GameLevel_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GameLevel_obj > _hx_result = new GameLevel_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool GameLevel_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x4950e412;
		}
	}
}

void GameLevel_obj::addTiles(){
            	HX_GC_STACKFRAME(&_hx_pos_429e452b6bbe1ad4_55_addTiles)
HXDLIN(  55)		int _g = 0;
HXDLIN(  55)		while((_g < 15)){
HXDLIN(  55)			_g = (_g + 1);
HXDLIN(  55)			int i = (_g - 1);
HXLINE(  56)			{
HXLINE(  56)				int _g1 = 0;
HXDLIN(  56)				while((_g1 < 20)){
HXLINE(  56)					_g1 = (_g1 + 1);
HXDLIN(  56)					int j = (_g1 - 1);
HXLINE(  58)					if ((i == 11)) {
HXLINE(  60)						this->tile =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,this->IDs->__get(0),(( (Float)((j * this->sizeWidth)) ) / ( (Float)(20) )),(( (Float)((i * this->sizeHeight)) ) / ( (Float)(15) )),null(),null(),null(),null(),null());
            					}
HXLINE(  62)					if ((i == 12)) {
HXLINE(  64)						this->tile =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,this->IDs->__get(1),(( (Float)((j * this->sizeWidth)) ) / ( (Float)(20) )),(( (Float)((i * this->sizeHeight)) ) / ( (Float)(15) )),null(),null(),null(),null(),null());
            					}
HXLINE(  66)					if ((i == 13)) {
HXLINE(  68)						this->tile =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,this->IDs->__get(2),(( (Float)((j * this->sizeWidth)) ) / ( (Float)(20) )),(( (Float)((i * this->sizeHeight)) ) / ( (Float)(15) )),null(),null(),null(),null(),null());
            					}
HXLINE(  70)					if ((i == 14)) {
HXLINE(  72)						this->tile =  ::openfl::display::Tile_obj::__alloc( HX_CTX ,this->IDs->__get(3),(( (Float)((j * this->sizeWidth)) ) / ( (Float)(20) )),(( (Float)((i * this->sizeHeight)) ) / ( (Float)(15) )),null(),null(),null(),null(),null());
            					}
HXLINE(  74)					if ((i >= 11)) {
HXLINE(  76)						this->tile->set_scaleX(((Float)1.25));
HXLINE(  77)						this->tile->set_scaleY(((Float)1.25));
HXLINE(  78)						this->tilemap->addTile(this->tile);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameLevel_obj,addTiles,(void))


hx::ObjectPtr< GameLevel_obj > GameLevel_obj::__new(int width,int height) {
	hx::ObjectPtr< GameLevel_obj > __this = new GameLevel_obj();
	__this->__construct(width,height);
	return __this;
}

hx::ObjectPtr< GameLevel_obj > GameLevel_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height) {
	GameLevel_obj *__this = (GameLevel_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GameLevel_obj), true, "GameLevel"));
	*(void **)__this = GameLevel_obj::_hx_vtable;
	__this->__construct(width,height);
	return __this;
}

GameLevel_obj::GameLevel_obj()
{
}

void GameLevel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameLevel);
	HX_MARK_MEMBER_NAME(sizeWidth,"sizeWidth");
	HX_MARK_MEMBER_NAME(sizeHeight,"sizeHeight");
	HX_MARK_MEMBER_NAME(tilemap,"tilemap");
	HX_MARK_MEMBER_NAME(bmpData,"bmpData");
	HX_MARK_MEMBER_NAME(tileset,"tileset");
	HX_MARK_MEMBER_NAME(IDs,"IDs");
	HX_MARK_MEMBER_NAME(tile,"tile");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameLevel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(sizeWidth,"sizeWidth");
	HX_VISIT_MEMBER_NAME(sizeHeight,"sizeHeight");
	HX_VISIT_MEMBER_NAME(tilemap,"tilemap");
	HX_VISIT_MEMBER_NAME(bmpData,"bmpData");
	HX_VISIT_MEMBER_NAME(tileset,"tileset");
	HX_VISIT_MEMBER_NAME(IDs,"IDs");
	HX_VISIT_MEMBER_NAME(tile,"tile");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GameLevel_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"IDs") ) { return hx::Val( IDs ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { return hx::Val( tile ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { return hx::Val( tilemap ); }
		if (HX_FIELD_EQ(inName,"bmpData") ) { return hx::Val( bmpData ); }
		if (HX_FIELD_EQ(inName,"tileset") ) { return hx::Val( tileset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addTiles") ) { return hx::Val( addTiles_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sizeWidth") ) { return hx::Val( sizeWidth ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sizeHeight") ) { return hx::Val( sizeHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GameLevel_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"IDs") ) { IDs=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"tile") ) { tile=inValue.Cast<  ::openfl::display::Tile >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tilemap") ) { tilemap=inValue.Cast<  ::openfl::display::Tilemap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bmpData") ) { bmpData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileset") ) { tileset=inValue.Cast<  ::openfl::display::Tileset >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sizeWidth") ) { sizeWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sizeHeight") ) { sizeHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameLevel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("sizeWidth",85,29,f9,c8));
	outFields->push(HX_("sizeHeight",88,a3,5a,c7));
	outFields->push(HX_("tilemap",2e,f0,8e,45));
	outFields->push(HX_("bmpData",0f,45,3b,2a));
	outFields->push(HX_("tileset",34,81,93,45));
	outFields->push(HX_("IDs",38,a0,37,00));
	outFields->push(HX_("tile",2e,cb,fc,4c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static hx::StorageInfo GameLevel_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GameLevel_obj,sizeWidth),HX_("sizeWidth",85,29,f9,c8)},
	{hx::fsInt,(int)offsetof(GameLevel_obj,sizeHeight),HX_("sizeHeight",88,a3,5a,c7)},
	{hx::fsObject /*  ::openfl::display::Tilemap */ ,(int)offsetof(GameLevel_obj,tilemap),HX_("tilemap",2e,f0,8e,45)},
	{hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(GameLevel_obj,bmpData),HX_("bmpData",0f,45,3b,2a)},
	{hx::fsObject /*  ::openfl::display::Tileset */ ,(int)offsetof(GameLevel_obj,tileset),HX_("tileset",34,81,93,45)},
	{hx::fsObject /* ::Array< int > */ ,(int)offsetof(GameLevel_obj,IDs),HX_("IDs",38,a0,37,00)},
	{hx::fsObject /*  ::openfl::display::Tile */ ,(int)offsetof(GameLevel_obj,tile),HX_("tile",2e,cb,fc,4c)},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GameLevel_obj_sStaticStorageInfo = 0;
#endif

static ::String GameLevel_obj_sMemberFields[] = {
	HX_("sizeWidth",85,29,f9,c8),
	HX_("sizeHeight",88,a3,5a,c7),
	HX_("tilemap",2e,f0,8e,45),
	HX_("bmpData",0f,45,3b,2a),
	HX_("tileset",34,81,93,45),
	HX_("IDs",38,a0,37,00),
	HX_("tile",2e,cb,fc,4c),
	HX_("addTiles",a4,23,92,89),
	::String(null()) };

hx::Class GameLevel_obj::__mClass;

void GameLevel_obj::__register()
{
	GameLevel_obj _hx_dummy;
	GameLevel_obj::_hx_vtable = *(void **)&_hx_dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_("GameLevel",12,e4,50,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GameLevel_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GameLevel_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameLevel_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameLevel_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

