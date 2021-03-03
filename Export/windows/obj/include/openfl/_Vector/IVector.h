// Generated by Haxe 4.0.1
#ifndef INCLUDED_openfl__Vector_IVector
#define INCLUDED_openfl__Vector_IVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES IVector_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		static void __boot();
		int (hx::Object :: *_hx_get_length)(); 
		static inline int get_length( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_get_length)();
		}
		int (hx::Object :: *_hx_set_length)(int value); 
		static inline int set_length( ::Dynamic _hx_,int value) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_set_length)(value);
		}
		::Dynamic (hx::Object :: *_hx_concat)(::Dynamic vec); 
		static inline ::Dynamic concat( ::Dynamic _hx_,::Dynamic vec) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_concat)(vec);
		}
		::Dynamic (hx::Object :: *_hx_copy)(); 
		static inline ::Dynamic copy( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_copy)();
		}
		::Dynamic (hx::Object :: *_hx_filter)( ::Dynamic callback); 
		static inline ::Dynamic filter( ::Dynamic _hx_, ::Dynamic callback) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_filter)(callback);
		}
		 ::Dynamic (hx::Object :: *_hx_get)(int index); 
		static inline  ::Dynamic get( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_get)(index);
		}
		int (hx::Object :: *_hx_indexOf)( ::Dynamic x,hx::Null< int >  from); 
		static inline int indexOf( ::Dynamic _hx_, ::Dynamic x,hx::Null< int >  from) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_indexOf)(x,from);
		}
		void (hx::Object :: *_hx_insertAt)(int index, ::Dynamic element); 
		static inline void insertAt( ::Dynamic _hx_,int index, ::Dynamic element) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_insertAt)(index,element);
		}
		 ::Dynamic (hx::Object :: *_hx_iterator)(); 
		static inline  ::Dynamic iterator( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_iterator)();
		}
		::String (hx::Object :: *_hx_join)(::String sep); 
		static inline ::String join( ::Dynamic _hx_,::String sep) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_join)(sep);
		}
		int (hx::Object :: *_hx_lastIndexOf)( ::Dynamic x, ::Dynamic from); 
		static inline int lastIndexOf( ::Dynamic _hx_, ::Dynamic x, ::Dynamic from) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_lastIndexOf)(x,from);
		}
		 ::Dynamic (hx::Object :: *_hx_pop)(); 
		static inline  ::Dynamic pop( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_pop)();
		}
		int (hx::Object :: *_hx_push)( ::Dynamic value); 
		static inline int push( ::Dynamic _hx_, ::Dynamic value) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_push)(value);
		}
		 ::Dynamic (hx::Object :: *_hx_removeAt)(int index); 
		static inline  ::Dynamic removeAt( ::Dynamic _hx_,int index) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_removeAt)(index);
		}
		::Dynamic (hx::Object :: *_hx_reverse)(); 
		static inline ::Dynamic reverse( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_reverse)();
		}
		 ::Dynamic (hx::Object :: *_hx_set)(int index, ::Dynamic value); 
		static inline  ::Dynamic set( ::Dynamic _hx_,int index, ::Dynamic value) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_set)(index,value);
		}
		 ::Dynamic (hx::Object :: *_hx_shift)(); 
		static inline  ::Dynamic shift( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_shift)();
		}
		::Dynamic (hx::Object :: *_hx_slice)(hx::Null< int >  startIndex, ::Dynamic endIndex); 
		static inline ::Dynamic slice( ::Dynamic _hx_,hx::Null< int >  startIndex, ::Dynamic endIndex) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_slice)(startIndex,endIndex);
		}
		void (hx::Object :: *_hx_sort)( ::Dynamic f); 
		static inline void sort( ::Dynamic _hx_, ::Dynamic f) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_sort)(f);
		}
		::Dynamic (hx::Object :: *_hx_splice)(int pos,int len); 
		static inline ::Dynamic splice( ::Dynamic _hx_,int pos,int len) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_splice)(pos,len);
		}
		::String (hx::Object :: *_hx_toString)(); 
		static inline ::String toString( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_toString)();
		}
		void (hx::Object :: *_hx_unshift)( ::Dynamic value); 
		static inline void unshift( ::Dynamic _hx_, ::Dynamic value) {
			(_hx_.mPtr->*( hx::interface_cast< ::openfl::_Vector::IVector_obj *>(_hx_.mPtr->_hx_getInterface(0x45e7caba)))->_hx_unshift)(value);
		}
};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_IVector */ 
