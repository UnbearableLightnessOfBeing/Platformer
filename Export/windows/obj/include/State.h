// Generated by Haxe 4.0.1
#ifndef INCLUDED_State
#define INCLUDED_State

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(State)


class State_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef State_obj OBJ_;

	public:
		State_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("State",f1,e5,38,17); }
		::String __ToString() const { return HX_("State.",1d,4d,90,3a) + _hx_tag; }

		static ::State idle;
		static inline ::State idle_dyn() { return idle; }
		static ::State jump;
		static inline ::State jump_dyn() { return jump; }
		static ::State walk;
		static inline ::State walk_dyn() { return walk; }
};


#endif /* INCLUDED_State */ 