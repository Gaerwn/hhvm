/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/complex-struct/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/complex-struct/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::cpp2::MyStructFloatFieldThrowExp> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).myLongField_ref()...);
    f(1, static_cast<T&&>(t).MyByteField_ref()...);
    f(2, static_cast<T&&>(t).myStringField_ref()...);
    f(3, static_cast<T&&>(t).myFloatField_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyStructMapFloatThrowExp> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).myLongField_ref()...);
    f(1, static_cast<T&&>(t).mapListOfFloats_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyStruct> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).MyIntField_ref()...);
    f(1, static_cast<T&&>(t).MyStringField_ref()...);
    f(2, static_cast<T&&>(t).MyDataField_ref()...);
    f(3, static_cast<T&&>(t).myEnum_ref()...);
    f(4, static_cast<T&&>(t).MyBoolField_ref()...);
    f(5, static_cast<T&&>(t).MyByteField_ref()...);
    f(6, static_cast<T&&>(t).MyShortField_ref()...);
    f(7, static_cast<T&&>(t).MyLongField_ref()...);
    f(8, static_cast<T&&>(t).MyDoubleField_ref()...);
    f(9, static_cast<T&&>(t).lDouble_ref()...);
    f(10, static_cast<T&&>(t).lShort_ref()...);
    f(11, static_cast<T&&>(t).lInteger_ref()...);
    f(12, static_cast<T&&>(t).lLong_ref()...);
    f(13, static_cast<T&&>(t).lString_ref()...);
    f(14, static_cast<T&&>(t).lBool_ref()...);
    f(15, static_cast<T&&>(t).lByte_ref()...);
    f(16, static_cast<T&&>(t).mShortString_ref()...);
    f(17, static_cast<T&&>(t).mIntegerString_ref()...);
    f(18, static_cast<T&&>(t).mStringMyStruct_ref()...);
    f(19, static_cast<T&&>(t).mStringBool_ref()...);
    f(20, static_cast<T&&>(t).mIntegerInteger_ref()...);
    f(21, static_cast<T&&>(t).mIntegerBool_ref()...);
    f(22, static_cast<T&&>(t).sShort_ref()...);
    f(23, static_cast<T&&>(t).sMyStruct_ref()...);
    f(24, static_cast<T&&>(t).sLong_ref()...);
    f(25, static_cast<T&&>(t).sString_ref()...);
    f(26, static_cast<T&&>(t).sByte_ref()...);
    f(27, static_cast<T&&>(t).mListList_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::SimpleStruct> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).age_ref()...);
    f(1, static_cast<T&&>(t).name_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::defaultStruct> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).myLongDFset_ref()...);
    f(1, static_cast<T&&>(t).myLongDF_ref()...);
    f(2, static_cast<T&&>(t).portDFset_ref()...);
    f(3, static_cast<T&&>(t).portNum_ref()...);
    f(4, static_cast<T&&>(t).myBinaryDFset_ref()...);
    f(5, static_cast<T&&>(t).myBinary_ref()...);
    f(6, static_cast<T&&>(t).myByteDFSet_ref()...);
    f(7, static_cast<T&&>(t).myByte_ref()...);
    f(8, static_cast<T&&>(t).myDoubleDFset_ref()...);
    f(9, static_cast<T&&>(t).myDoubleDFZero_ref()...);
    f(10, static_cast<T&&>(t).myDouble_ref()...);
    f(11, static_cast<T&&>(t).field3_ref()...);
    f(12, static_cast<T&&>(t).myList_ref()...);
    f(13, static_cast<T&&>(t).mySet_ref()...);
    f(14, static_cast<T&&>(t).simpleStruct_ref()...);
    f(15, static_cast<T&&>(t).listStructDFset_ref()...);
    f(16, static_cast<T&&>(t).myUnion_ref()...);
    f(17, static_cast<T&&>(t).listUnionDFset_ref()...);
    f(18, static_cast<T&&>(t).mapNestlistStructDfSet_ref()...);
    f(19, static_cast<T&&>(t).mapJavaTypeDFset_ref()...);
    f(20, static_cast<T&&>(t).emptyMap_ref()...);
    f(21, static_cast<T&&>(t).enumMapDFset_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyStructTypeDef> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).myLongField_ref()...);
    f(1, static_cast<T&&>(t).myLongTypeDef_ref()...);
    f(2, static_cast<T&&>(t).myStringField_ref()...);
    f(3, static_cast<T&&>(t).myStringTypedef_ref()...);
    f(4, static_cast<T&&>(t).myMapField_ref()...);
    f(5, static_cast<T&&>(t).myMapTypedef_ref()...);
    f(6, static_cast<T&&>(t).myListField_ref()...);
    f(7, static_cast<T&&>(t).myListTypedef_ref()...);
    f(8, static_cast<T&&>(t).myMapListOfTypeDef_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyDataItem> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
  }
};

template <>
struct ForEachField<::cpp2::MyUnion> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).myEnum_ref()...);
    f(1, static_cast<T&&>(t).myStruct_ref()...);
    f(2, static_cast<T&&>(t).myDataItem_ref()...);
    f(3, static_cast<T&&>(t).complexNestedStruct_ref()...);
    f(4, static_cast<T&&>(t).longValue_ref()...);
    f(5, static_cast<T&&>(t).intValue_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::MyUnionFloatFieldThrowExp> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).myEnum_ref()...);
    f(1, static_cast<T&&>(t).setFloat_ref()...);
    f(2, static_cast<T&&>(t).myDataItem_ref()...);
    f(3, static_cast<T&&>(t).complexNestedStruct_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::ComplexNestedStruct> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).setOfSetOfInt_ref()...);
    f(1, static_cast<T&&>(t).listofListOfListOfListOfEnum_ref()...);
    f(2, static_cast<T&&>(t).listOfListOfMyStruct_ref()...);
    f(3, static_cast<T&&>(t).setOfListOfListOfLong_ref()...);
    f(4, static_cast<T&&>(t).setOfSetOfsetOfLong_ref()...);
    f(5, static_cast<T&&>(t).mapStructListOfListOfLong_ref()...);
    f(6, static_cast<T&&>(t).mKeyStructValInt_ref()...);
    f(7, static_cast<T&&>(t).listOfMapKeyIntValInt_ref()...);
    f(8, static_cast<T&&>(t).listOfMapKeyStrValList_ref()...);
    f(9, static_cast<T&&>(t).mapKeySetValLong_ref()...);
    f(10, static_cast<T&&>(t).mapKeyListValLong_ref()...);
    f(11, static_cast<T&&>(t).mapKeyMapValMap_ref()...);
    f(12, static_cast<T&&>(t).mapKeySetValMap_ref()...);
    f(13, static_cast<T&&>(t).NestedMaps_ref()...);
    f(14, static_cast<T&&>(t).mapKeyIntValList_ref()...);
    f(15, static_cast<T&&>(t).mapKeyIntValSet_ref()...);
    f(16, static_cast<T&&>(t).mapKeySetValInt_ref()...);
    f(17, static_cast<T&&>(t).mapKeyListValSet_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::TypeRemapped> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).lsMap_ref()...);
    f(1, static_cast<T&&>(t).ioMap_ref()...);
    f(2, static_cast<T&&>(t).BigInteger_ref()...);
    f(3, static_cast<T&&>(t).binaryTestBuffer_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::emptyXcep> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
  }
};

template <>
struct ForEachField<::cpp2::reqXcep> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).message_ref()...);
    f(1, static_cast<T&&>(t).errorCode_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::optXcep> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).message_ref()...);
    f(1, static_cast<T&&>(t).errorCode_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::complexException> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).message_ref()...);
    f(1, static_cast<T&&>(t).listStrings_ref()...);
    f(2, static_cast<T&&>(t).errorEnum_ref()...);
    f(3, static_cast<T&&>(t).unionError_ref()...);
    f(4, static_cast<T&&>(t).structError_ref()...);
    f(5, static_cast<T&&>(t).lsMap_ref()...);
  }
};

template <>
struct ForEachField<::cpp2::Containers> {
  template <typename F, typename... T>
  void operator()([[maybe_unused]] F&& f, [[maybe_unused]] T&&... t) const {
    f(0, static_cast<T&&>(t).struct_list_ref()...);
    f(1, static_cast<T&&>(t).union_list_ref()...);
    f(2, static_cast<T&&>(t).enum_list_ref()...);
    f(3, static_cast<T&&>(t).struct_set_ref()...);
    f(4, static_cast<T&&>(t).union_set_ref()...);
    f(5, static_cast<T&&>(t).enum_set_ref()...);
    f(6, static_cast<T&&>(t).struct_map_ref()...);
    f(7, static_cast<T&&>(t).union_map_ref()...);
    f(8, static_cast<T&&>(t).enum_map_ref()...);
    f(9, static_cast<T&&>(t).struct_map_2_ref()...);
    f(10, static_cast<T&&>(t).union_map_2_ref()...);
    f(11, static_cast<T&&>(t).enum_map_2_ref()...);
    f(12, static_cast<T&&>(t).list_map_ref()...);
    f(13, static_cast<T&&>(t).list_map_2_ref()...);
    f(14, static_cast<T&&>(t).set_map_ref()...);
    f(15, static_cast<T&&>(t).set_map_2_ref()...);
    f(16, static_cast<T&&>(t).map_map_ref()...);
    f(17, static_cast<T&&>(t).map_map_2_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
