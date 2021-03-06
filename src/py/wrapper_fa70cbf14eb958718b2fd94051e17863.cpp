// Copyright [2017-2018] UMR MISTEA INRA, UMR LEPSE INRA,                //
//                       UMR AGAP CIRAD, EPI Virtual Plants Inria        //
// Copyright [2015-2016] UMR AGAP CIRAD, EPI Virtual Plants Inria        //
//                                                                       //
// This file is part of the AutoWIG project. More information can be     //
// found at                                                              //
//                                                                       //
//     http://autowig.rtfd.io                                            //
//                                                                       //
// The Apache Software Foundation (ASF) licenses this file to you under  //
// the Apache License, Version 2.0 (the "License"); you may not use this //
// file except in compliance with the License. You should have received  //
// a copy of the Apache License, Version 2.0 along with this file; see   //
// the file LICENSE. If not, you may obtain a copy of the License at     //
//                                                                       //
//     http://www.apache.org/licenses/LICENSE-2.0                        //
//                                                                       //
// Unless required by applicable law or agreed to in writing, software   //
// distributed under the License is distributed on an "AS IS" BASIS,     //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or       //
// mplied. See the License for the specific language governing           //
// permissions and limitations under the License.                        //

#include "_clanglite.h"



namespace autowig
{

}

#if defined(_MSC_VER)
    #if (_MSC_VER == 1900)
namespace boost
{
    template <> class ::clang::Type const volatile * get_pointer<class ::clang::Type const volatile >(class ::clang::Type const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_fa70cbf14eb958718b2fd94051e17863()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    enum ::clang::Type::TypeClass  (::clang::Type::*method_pointer_8553d8a312825b639a5c6310320adf62)() const = &::clang::Type::getTypeClass;
    bool  (::clang::Type::*method_pointer_3f851da1e9d354c8b19363b6424eb204)() const = &::clang::Type::isFromAST;
    bool  (::clang::Type::*method_pointer_3ed19665da655d4abe957a7b021b0fec)() const = &::clang::Type::containsUnexpandedParameterPack;
    bool  (::clang::Type::*method_pointer_8fdb81c5d66552f4b297cf87d3871074)() const = &::clang::Type::isCanonicalUnqualified;
    class ::clang::QualType  (::clang::Type::*method_pointer_8d4a81e7079651b8896cb93aff748906)() const = &::clang::Type::getLocallyUnqualifiedSingleStepDesugaredType;
    bool  (::clang::Type::*method_pointer_daeb70def0ac5c609e0c5d0f35b7f57e)() const = &::clang::Type::isIncompleteOrObjectType;
    bool  (::clang::Type::*method_pointer_2e52749d716e58dfb2a12cc9337c0bc7)() const = &::clang::Type::isObjectType;
    bool  (::clang::Type::*method_pointer_27608830c95153cfb36813f6274e7231)() const = &::clang::Type::isStandardLayoutType;
    bool  (::clang::Type::*method_pointer_785eb07b3dfc5320af9c348ab7d895e9)() const = &::clang::Type::isBuiltinType;
    bool  (::clang::Type::*method_pointer_73dd827d75935df3ba026e38f865cb7e)(unsigned int ) const = &::clang::Type::isSpecificBuiltinType;
    bool  (::clang::Type::*method_pointer_7a585a7fbf4e5b37b69e4d9afea5df24)() const = &::clang::Type::isPlaceholderType;
    class ::clang::BuiltinType const * (::clang::Type::*method_pointer_0a693c1f7f2e54e7b6f9f5e921830999)() const = &::clang::Type::getAsPlaceholderType;
    bool  (::clang::Type::*method_pointer_d4d50f195b4857418addbaf584d473ed)(unsigned int ) const = &::clang::Type::isSpecificPlaceholderType;
    bool  (::clang::Type::*method_pointer_a9ea849f470c5242a086e615782946ba)() const = &::clang::Type::isNonOverloadPlaceholderType;
    bool  (::clang::Type::*method_pointer_7e96fc6ad6c853a1b135194e031f72dc)() const = &::clang::Type::isIntegerType;
    bool  (::clang::Type::*method_pointer_87e73df4b77f5072b3c216944ecd12b9)() const = &::clang::Type::isEnumeralType;
    bool  (::clang::Type::*method_pointer_4c3b45db4d6e5dabb16357a5a04157e8)() const = &::clang::Type::isBooleanType;
    bool  (::clang::Type::*method_pointer_66209b4b24745833be66424afc70303d)() const = &::clang::Type::isCharType;
    bool  (::clang::Type::*method_pointer_84a0fb461f2c5ab7a50a8889375e148c)() const = &::clang::Type::isWideCharType;
    bool  (::clang::Type::*method_pointer_b3d463ef43c458beb999dbb5d9d535a3)() const = &::clang::Type::isChar16Type;
    bool  (::clang::Type::*method_pointer_f438995a650e546b94d43f4d2696c3e1)() const = &::clang::Type::isChar32Type;
    bool  (::clang::Type::*method_pointer_383d45b191b35f529b8c823229b2e204)() const = &::clang::Type::isAnyCharacterType;
    bool  (::clang::Type::*method_pointer_8fabacc8bdeb5cd3b108cc4ad8b82bce)() const = &::clang::Type::isIntegralOrEnumerationType;
    bool  (::clang::Type::*method_pointer_9291c75cc6045fc499a866c4b38b1785)() const = &::clang::Type::isIntegralOrUnscopedEnumerationType;
    bool  (::clang::Type::*method_pointer_7c4dbe1c1b2a5a39b16358c66f76ab4a)() const = &::clang::Type::isRealFloatingType;
    bool  (::clang::Type::*method_pointer_dd93b1689c505e9faa597cba4e63469e)() const = &::clang::Type::isComplexType;
    bool  (::clang::Type::*method_pointer_13d43c55f8945fcaa070f1bf8b2c36b8)() const = &::clang::Type::isAnyComplexType;
    bool  (::clang::Type::*method_pointer_2753085fce105004832f2e86d71a3a13)() const = &::clang::Type::isFloatingType;
    bool  (::clang::Type::*method_pointer_4e97a704427c5451b3f18e0715499f8b)() const = &::clang::Type::isHalfType;
    bool  (::clang::Type::*method_pointer_9d4a90dc3ca6577bbf1c3be1c5f403bd)() const = &::clang::Type::isRealType;
    bool  (::clang::Type::*method_pointer_6760b81cf2315094938499e31eb4b061)() const = &::clang::Type::isArithmeticType;
    bool  (::clang::Type::*method_pointer_ffa8143c60375ebdae40bc36e93da0d9)() const = &::clang::Type::isVoidType;
    bool  (::clang::Type::*method_pointer_c4cd88c13cb35c98a3e9b67602e209a7)() const = &::clang::Type::isScalarType;
    bool  (::clang::Type::*method_pointer_a19649ec17205bd38602caeaa672e04a)() const = &::clang::Type::isAggregateType;
    bool  (::clang::Type::*method_pointer_0ddfc3cfab825fbb99da1dd4bf138181)() const = &::clang::Type::isFundamentalType;
    bool  (::clang::Type::*method_pointer_cc110f37768758b08f4ba25429fd0a3f)() const = &::clang::Type::isCompoundType;
    bool  (::clang::Type::*method_pointer_a799385ef8b250e1b5bde7b72ab3eacb)() const = &::clang::Type::isFunctionType;
    bool  (::clang::Type::*method_pointer_765a5acd958057e5b1e70136c8cc2439)() const = &::clang::Type::isFunctionNoProtoType;
    bool  (::clang::Type::*method_pointer_7926cb38b2c75c1694a26a397826c58b)() const = &::clang::Type::isFunctionProtoType;
    bool  (::clang::Type::*method_pointer_6ec8c308afbe5888b5997bd6aaba366a)() const = &::clang::Type::isPointerType;
    bool  (::clang::Type::*method_pointer_af0c28969c335074b4e2cd38b8a451d3)() const = &::clang::Type::isAnyPointerType;
    bool  (::clang::Type::*method_pointer_d6aa35abe41b5da9a04509f65f410998)() const = &::clang::Type::isBlockPointerType;
    bool  (::clang::Type::*method_pointer_14abdffb6bb754de8abd99c058a67c65)() const = &::clang::Type::isVoidPointerType;
    bool  (::clang::Type::*method_pointer_dbd556bce0d25b7195c0709033261241)() const = &::clang::Type::isReferenceType;
    bool  (::clang::Type::*method_pointer_d0c7bda2e00357a6829f99338a82507c)() const = &::clang::Type::isLValueReferenceType;
    bool  (::clang::Type::*method_pointer_76a4cfe233be50be8faf62a99e532e53)() const = &::clang::Type::isRValueReferenceType;
    bool  (::clang::Type::*method_pointer_fe706c4ed162570db1afd3c9ca64ed52)() const = &::clang::Type::isFunctionPointerType;
    bool  (::clang::Type::*method_pointer_7ae427eab4945186ab201168a5cda3d4)() const = &::clang::Type::isMemberPointerType;
    bool  (::clang::Type::*method_pointer_47c84e5609ee5a60a6474d9efb489f6e)() const = &::clang::Type::isMemberFunctionPointerType;
    bool  (::clang::Type::*method_pointer_a1f215d9caa95a7e8b7f3967d1921239)() const = &::clang::Type::isMemberDataPointerType;
    bool  (::clang::Type::*method_pointer_76203d08538158a0aaf4682f9c5017e9)() const = &::clang::Type::isArrayType;
    bool  (::clang::Type::*method_pointer_664079d7a69b5c9b808817727c6ba5a8)() const = &::clang::Type::isConstantArrayType;
    bool  (::clang::Type::*method_pointer_8365595ad95d56cf94db9aac77e3a9d9)() const = &::clang::Type::isIncompleteArrayType;
    bool  (::clang::Type::*method_pointer_3d6db0aa9d5f512ba6f4daac04d0250e)() const = &::clang::Type::isVariableArrayType;
    bool  (::clang::Type::*method_pointer_b6db3fbd73405f2a9ecfc29be7ff17a5)() const = &::clang::Type::isDependentSizedArrayType;
    bool  (::clang::Type::*method_pointer_fc40e6c008045c09bcee5de53069cc58)() const = &::clang::Type::isRecordType;
    bool  (::clang::Type::*method_pointer_a9c61b75e1f557fea7c2e436f28ebf5e)() const = &::clang::Type::isClassType;
    bool  (::clang::Type::*method_pointer_b4fa415ddaaf5660ae100b2ff47aaf8b)() const = &::clang::Type::isStructureType;
    bool  (::clang::Type::*method_pointer_82c1e107feb959099cc47ef08c2b4643)() const = &::clang::Type::isObjCBoxableRecordType;
    bool  (::clang::Type::*method_pointer_22633cb3bf27536d9771a6922c720312)() const = &::clang::Type::isInterfaceType;
    bool  (::clang::Type::*method_pointer_8e4c609727a3543984803a32915e6abf)() const = &::clang::Type::isStructureOrClassType;
    bool  (::clang::Type::*method_pointer_53cacf2228ce500b9a0c3bc22cfe238c)() const = &::clang::Type::isUnionType;
    bool  (::clang::Type::*method_pointer_0e295660766651e89a9016b4458049f9)() const = &::clang::Type::isComplexIntegerType;
    bool  (::clang::Type::*method_pointer_9f4966f0dfac5419afa0977603128515)() const = &::clang::Type::isVectorType;
    bool  (::clang::Type::*method_pointer_065b0d9e66705ee2a99655984897e5ab)() const = &::clang::Type::isExtVectorType;
    bool  (::clang::Type::*method_pointer_b9f0fa262524540fbb10cc30704184f1)() const = &::clang::Type::isObjCObjectPointerType;
    bool  (::clang::Type::*method_pointer_9d5ccf344fed547db5c8cee8c5442def)() const = &::clang::Type::isObjCRetainableType;
    bool  (::clang::Type::*method_pointer_58bdcfcea97c5911a906ca65a2573194)() const = &::clang::Type::isObjCLifetimeType;
    bool  (::clang::Type::*method_pointer_d98efaca4585584bbab048836b2966c3)() const = &::clang::Type::isObjCIndirectLifetimeType;
    bool  (::clang::Type::*method_pointer_7ac1dbc74aec5946b321973f8fed9727)() const = &::clang::Type::isObjCNSObjectType;
    bool  (::clang::Type::*method_pointer_1ca0a01ffce358f8a3e8314615b538a2)() const = &::clang::Type::isObjCIndependentClassType;
    bool  (::clang::Type::*method_pointer_33ea5b21a47b548c9290f49890bf4e20)() const = &::clang::Type::isObjCObjectType;
    bool  (::clang::Type::*method_pointer_de41aefca4bc54d9b5041404244e39eb)() const = &::clang::Type::isObjCQualifiedInterfaceType;
    bool  (::clang::Type::*method_pointer_3cc05b56c0395cddba0d0525de8bcb69)() const = &::clang::Type::isObjCQualifiedIdType;
    bool  (::clang::Type::*method_pointer_86a6079a2cc9566e8950e8cb450a892b)() const = &::clang::Type::isObjCQualifiedClassType;
    bool  (::clang::Type::*method_pointer_9e3ec6f8617f539d8d38f1aab5b930cd)() const = &::clang::Type::isObjCObjectOrInterfaceType;
    bool  (::clang::Type::*method_pointer_d0f82c313bde5df48b69512e86eceb52)() const = &::clang::Type::isObjCIdType;
    bool  (::clang::Type::*method_pointer_d10e39fe6a1e544391655644a0534f40)() const = &::clang::Type::isObjCInertUnsafeUnretainedType;
    bool  (::clang::Type::*method_pointer_d4fa6239aea55ca684c0a4714dd7359e)() const = &::clang::Type::isObjCClassType;
    bool  (::clang::Type::*method_pointer_a31bb44e031e5e4b8238c62575dbd89f)() const = &::clang::Type::isObjCClassOrClassKindOfType;
    bool  (::clang::Type::*method_pointer_6cdfd2b3c0535f7cbc727c8243df3d2a)(class ::clang::ASTContext &) const = &::clang::Type::isBlockCompatibleObjCPointerType;
    bool  (::clang::Type::*method_pointer_a9fda9377c3153b5b17e396a8b82e29c)() const = &::clang::Type::isObjCSelType;
    bool  (::clang::Type::*method_pointer_a2fd03eea7a25d2da27eebda095580a6)() const = &::clang::Type::isObjCBuiltinType;
    bool  (::clang::Type::*method_pointer_bacda378c512550d8fcee1aabae73a77)() const = &::clang::Type::isObjCARCBridgableType;
    bool  (::clang::Type::*method_pointer_d93cd68741bb5972bdee10a006d376cf)() const = &::clang::Type::isCARCBridgableType;
    bool  (::clang::Type::*method_pointer_ad242e71fd6851a08a0e50f8322e0a62)() const = &::clang::Type::isTemplateTypeParmType;
    bool  (::clang::Type::*method_pointer_98815941c180583e8da7457d15c201aa)() const = &::clang::Type::isNullPtrType;
    bool  (::clang::Type::*method_pointer_80b6f3b2b9225ffc82cdc617f23d2939)() const = &::clang::Type::isAlignValT;
    bool  (::clang::Type::*method_pointer_b5c24951a4fc5591b819d3f570f1a2ee)() const = &::clang::Type::isAtomicType;
    bool  (::clang::Type::*method_pointer_5ce905c17a3c52fb811d4dc8e990f870)() const = &::clang::Type::isOCLImage1dROType;
    bool  (::clang::Type::*method_pointer_e17d9d9dbf7258649dbe9bf34d01ba1d)() const = &::clang::Type::isOCLImage1dArrayROType;
    bool  (::clang::Type::*method_pointer_1448fe541bd0594d80b19778eb30e751)() const = &::clang::Type::isOCLImage1dBufferROType;
    bool  (::clang::Type::*method_pointer_2dc892e5365259eaac8dca0c39718161)() const = &::clang::Type::isOCLImage2dROType;
    bool  (::clang::Type::*method_pointer_2685d1d17f0852e3a580480d6e00dd34)() const = &::clang::Type::isOCLImage2dArrayROType;
    bool  (::clang::Type::*method_pointer_e35b2384581b5612b8ad3c9e8deb4ecd)() const = &::clang::Type::isOCLImage2dDepthROType;
    bool  (::clang::Type::*method_pointer_0f07a5b86bba540ba0355bc1a3abe9b5)() const = &::clang::Type::isOCLImage2dArrayDepthROType;
    bool  (::clang::Type::*method_pointer_580b69f750f45a928d1b6702c96a1db4)() const = &::clang::Type::isOCLImage2dMSAAROType;
    bool  (::clang::Type::*method_pointer_a80f25e9230f54ec9d60b07a6a9c93ea)() const = &::clang::Type::isOCLImage2dArrayMSAAROType;
    bool  (::clang::Type::*method_pointer_db74a6025cc1558fa3ed7e6f39e79fee)() const = &::clang::Type::isOCLImage2dMSAADepthROType;
    bool  (::clang::Type::*method_pointer_c39392fa55525daea8df3041266df40d)() const = &::clang::Type::isOCLImage2dArrayMSAADepthROType;
    bool  (::clang::Type::*method_pointer_e3d35e2f19f950dfbf42334f64bcff24)() const = &::clang::Type::isOCLImage3dROType;
    bool  (::clang::Type::*method_pointer_d21eeff02c4e5e0f9137665f0413f3d9)() const = &::clang::Type::isOCLImage1dWOType;
    bool  (::clang::Type::*method_pointer_ac4d0734a54557f597ff8dcb690fdbf6)() const = &::clang::Type::isOCLImage1dArrayWOType;
    bool  (::clang::Type::*method_pointer_1d76bba747c250e1a08aef4e777148c6)() const = &::clang::Type::isOCLImage1dBufferWOType;
    bool  (::clang::Type::*method_pointer_ea8014e756ba53208782748c8df0f392)() const = &::clang::Type::isOCLImage2dWOType;
    bool  (::clang::Type::*method_pointer_2808dc7a42cf548592ba4253d74dbd30)() const = &::clang::Type::isOCLImage2dArrayWOType;
    bool  (::clang::Type::*method_pointer_197ab0c1fc8c5f898bb5639160aa5cd7)() const = &::clang::Type::isOCLImage2dDepthWOType;
    bool  (::clang::Type::*method_pointer_bd410510a3a75fdebf36ec3a17925028)() const = &::clang::Type::isOCLImage2dArrayDepthWOType;
    bool  (::clang::Type::*method_pointer_682ef55687c75bf1b83c24a14b6bee7d)() const = &::clang::Type::isOCLImage2dMSAAWOType;
    bool  (::clang::Type::*method_pointer_b33ab0aa8a01596f884238204896e50d)() const = &::clang::Type::isOCLImage2dArrayMSAAWOType;
    bool  (::clang::Type::*method_pointer_2af0d205d4105b26a209d14318d24416)() const = &::clang::Type::isOCLImage2dMSAADepthWOType;
    bool  (::clang::Type::*method_pointer_b10a7ff9a0d2575385a90f40ac5e2356)() const = &::clang::Type::isOCLImage2dArrayMSAADepthWOType;
    bool  (::clang::Type::*method_pointer_78c6ae588bbf55f4b0a08208f69cc85a)() const = &::clang::Type::isOCLImage3dWOType;
    bool  (::clang::Type::*method_pointer_4c5751793c365ae7a5c88639f0e228e4)() const = &::clang::Type::isOCLImage1dRWType;
    bool  (::clang::Type::*method_pointer_7ff62f2b07b755ce9bf865dbc9e0248c)() const = &::clang::Type::isOCLImage1dArrayRWType;
    bool  (::clang::Type::*method_pointer_8c0a8ca6cda25739a2a3628304139eb6)() const = &::clang::Type::isOCLImage1dBufferRWType;
    bool  (::clang::Type::*method_pointer_85c0a69bc80c5341bfb52420f530cc95)() const = &::clang::Type::isOCLImage2dRWType;
    bool  (::clang::Type::*method_pointer_beca962df70c54cba20a19aa1d3a85ba)() const = &::clang::Type::isOCLImage2dArrayRWType;
    bool  (::clang::Type::*method_pointer_e6e9c2ff4cb451c6b6accdc88d24c9c2)() const = &::clang::Type::isOCLImage2dDepthRWType;
    bool  (::clang::Type::*method_pointer_a37e87fccdaf597ab37b1f9dd35b951c)() const = &::clang::Type::isOCLImage2dArrayDepthRWType;
    bool  (::clang::Type::*method_pointer_2b7502426cc254f294f438c25f6b6291)() const = &::clang::Type::isOCLImage2dMSAARWType;
    bool  (::clang::Type::*method_pointer_6206abae2cd15d3580fdc7507d0eaa77)() const = &::clang::Type::isOCLImage2dArrayMSAARWType;
    bool  (::clang::Type::*method_pointer_c49efdd3e8525080a5418e80b4edb79d)() const = &::clang::Type::isOCLImage2dMSAADepthRWType;
    bool  (::clang::Type::*method_pointer_d6c4fb38ab74552582f898945a225ea4)() const = &::clang::Type::isOCLImage2dArrayMSAADepthRWType;
    bool  (::clang::Type::*method_pointer_91047a7677a556139a59357c86303f81)() const = &::clang::Type::isOCLImage3dRWType;
    bool  (::clang::Type::*method_pointer_aba36ed9fecf50168514ea3d79aec59b)() const = &::clang::Type::isImageType;
    bool  (::clang::Type::*method_pointer_0b48f2a618df594f93f7ff96a7384743)() const = &::clang::Type::isSamplerT;
    bool  (::clang::Type::*method_pointer_11c32ad26cac559f9436ca56abf5af67)() const = &::clang::Type::isEventT;
    bool  (::clang::Type::*method_pointer_cecceb575f9d5f36b9e5da219381149d)() const = &::clang::Type::isClkEventT;
    bool  (::clang::Type::*method_pointer_0829bebfb31b58abba1d6bdbe9a79cdc)() const = &::clang::Type::isQueueT;
    bool  (::clang::Type::*method_pointer_180ad1a7a6515f05b989f40b25c15320)() const = &::clang::Type::isNDRangeT;
    bool  (::clang::Type::*method_pointer_61e3fc6006115d9cbe77904fa21e8b96)() const = &::clang::Type::isReserveIDT;
    bool  (::clang::Type::*method_pointer_1c2d4fdce005559f952c664741e05b21)() const = &::clang::Type::isPipeType;
    bool  (::clang::Type::*method_pointer_9a99085f3fe85d5e8cefbbef10adf07f)() const = &::clang::Type::isOpenCLSpecificType;
    bool  (::clang::Type::*method_pointer_7db2be4d18a556ffaeb8945ae4982454)() const = &::clang::Type::isObjCARCImplicitlyUnretainedType;
    bool  (::clang::Type::*method_pointer_71b23fa4590b52bcab12109fbb1751be)() const = &::clang::Type::isDependentType;
    bool  (::clang::Type::*method_pointer_ff195fbc587d582688c50ffcb2cbd2d6)() const = &::clang::Type::isInstantiationDependentType;
    bool  (::clang::Type::*method_pointer_3140e72646e753bda45c4ab262830a6d)() const = &::clang::Type::isUndeducedType;
    bool  (::clang::Type::*method_pointer_46b074cedbd45fbfa4ffa96c4b31acfb)() const = &::clang::Type::isVariablyModifiedType;
    bool  (::clang::Type::*method_pointer_da6776f619bf5c8faebe88e659ba855d)() const = &::clang::Type::hasSizedVLAType;
    bool  (::clang::Type::*method_pointer_14589b303ff655f39a7426c01dc7ed8f)() const = &::clang::Type::hasUnnamedOrLocalType;
    bool  (::clang::Type::*method_pointer_3d53f528f5ee58a39c3a24666fa8611f)() const = &::clang::Type::isOverloadableType;
    bool  (::clang::Type::*method_pointer_7bda653f4fc25c50b850c8b33676b22a)() const = &::clang::Type::isElaboratedTypeSpecifier;
    bool  (::clang::Type::*method_pointer_ef805fc88f2e5c1a84d2b1cdf0c30582)() const = &::clang::Type::canDecayToPointerType;
    bool  (::clang::Type::*method_pointer_4d9d4108193c5795bdb210e08af5ed99)() const = &::clang::Type::hasPointerRepresentation;
    bool  (::clang::Type::*method_pointer_439a2dd1f780571f8f2dfff4c0c17668)() const = &::clang::Type::hasObjCPointerRepresentation;
    bool  (::clang::Type::*method_pointer_95c381b9a3235aeaaa5a7601d86949e6)() const = &::clang::Type::hasIntegerRepresentation;
    bool  (::clang::Type::*method_pointer_b126aaaa90615800bd8ac5ca31f9473e)() const = &::clang::Type::hasSignedIntegerRepresentation;
    bool  (::clang::Type::*method_pointer_9f30acd90d065b7f9b5aef7a0e3d8105)() const = &::clang::Type::hasUnsignedIntegerRepresentation;
    bool  (::clang::Type::*method_pointer_9b226c85c788536da56f4f50a3254864)() const = &::clang::Type::hasFloatingRepresentation;
    class ::clang::RecordType const * (::clang::Type::*method_pointer_4f003cdb9c69564a9919a11c5bfaeee6)() const = &::clang::Type::getAsStructureType;
    class ::clang::RecordType const * (::clang::Type::*method_pointer_b1631536768155e3900fbad2801cc81f)() const = &::clang::Type::getAsUnionType;
    class ::clang::ComplexType const * (::clang::Type::*method_pointer_311557adfc8e5effac3f94c40cccb718)() const = &::clang::Type::getAsComplexIntegerType;
    class ::clang::ObjCObjectType const * (::clang::Type::*method_pointer_09956d1f9f99526485688a79a3b50247)() const = &::clang::Type::getAsObjCInterfaceType;
    class ::clang::ObjCObjectPointerType const * (::clang::Type::*method_pointer_f5c7eb26012557afaa7ba72445c5ac88)() const = &::clang::Type::getAsObjCInterfacePointerType;
    class ::clang::ObjCObjectPointerType const * (::clang::Type::*method_pointer_0973d8234cac5cc8b0c49f889c7ffad0)() const = &::clang::Type::getAsObjCQualifiedIdType;
    class ::clang::ObjCObjectPointerType const * (::clang::Type::*method_pointer_40486c1ed0285aaca87845fe43dcb1b5)() const = &::clang::Type::getAsObjCQualifiedClassType;
    class ::clang::ObjCObjectType const * (::clang::Type::*method_pointer_5ed7f9a9a8dc58ba81390885c2f80750)() const = &::clang::Type::getAsObjCQualifiedInterfaceType;
    class ::clang::CXXRecordDecl * (::clang::Type::*method_pointer_d97bc20c3c965308949ba4baaf08b4de)() const = &::clang::Type::getAsCXXRecordDecl;
    class ::clang::TagDecl * (::clang::Type::*method_pointer_6639873221095f27bc2ea1a41b44aff5)() const = &::clang::Type::getAsTagDecl;
    class ::clang::CXXRecordDecl const * (::clang::Type::*method_pointer_c65f3a1248f65a8da4659983e80d0e43)() const = &::clang::Type::getPointeeCXXRecordDecl;
    class ::clang::AutoType * (::clang::Type::*method_pointer_727e90af5bc356899750d731c9dd7229)() const = &::clang::Type::getContainedAutoType;
    class ::clang::ArrayType const * (::clang::Type::*method_pointer_0e1c54ce213356399ee2b611fcaa655c)() const = &::clang::Type::getAsArrayTypeUnsafe;
    class ::clang::ArrayType const * (::clang::Type::*method_pointer_0e3ef1de24495738a8a20bdcd08ed819)() const = &::clang::Type::castAsArrayTypeUnsafe;
    class ::clang::Type const * (::clang::Type::*method_pointer_6665845b6e8358c2937df03100a20292)() const = &::clang::Type::getBaseElementTypeUnsafe;
    class ::clang::Type const * (::clang::Type::*method_pointer_5329a299eea3516091dd32764ded047a)() const = &::clang::Type::getArrayElementTypeNoTypeQual;
    class ::clang::Type const * (::clang::Type::*method_pointer_b456f2d700a75ec692340bd32b230d14)() const = &::clang::Type::getPointeeOrArrayElementType;
    class ::clang::QualType  (::clang::Type::*method_pointer_70258610ad8d5daa9b243388b78e7da8)() const = &::clang::Type::getPointeeType;
    class ::clang::Type const * (::clang::Type::*method_pointer_b43a03398625550b9b1bafb9b8eaca71)() const = &::clang::Type::getUnqualifiedDesugaredType;
    bool  (::clang::Type::*method_pointer_1f6d0177210f5af7b519a7a020db7c30)() const = &::clang::Type::isPromotableIntegerType;
    bool  (::clang::Type::*method_pointer_d8d5b8dd84df53b9af745a91f3235335)() const = &::clang::Type::isSignedIntegerType;
    bool  (::clang::Type::*method_pointer_8311126f905b56c7a5f43abfe18783f7)() const = &::clang::Type::isUnsignedIntegerType;
    bool  (::clang::Type::*method_pointer_03d1ab95650b57c5b87915d9c3bfef12)() const = &::clang::Type::isSignedIntegerOrEnumerationType;
    bool  (::clang::Type::*method_pointer_80f9e07bdd8e5a9b84f81113a20d4be8)() const = &::clang::Type::isUnsignedIntegerOrEnumerationType;
    bool  (::clang::Type::*method_pointer_4ea929e11a82571ba013d007b277d3e6)() const = &::clang::Type::isConstantSizeType;
    bool  (::clang::Type::*method_pointer_0159c80dd5dc510295360cca04696109)() const = &::clang::Type::isSpecifierType;
    bool  (::clang::Type::*method_pointer_a1c8d79d83545c6e94b63ba5a879cdea)() const = &::clang::Type::isVisibilityExplicit;
    bool  (::clang::Type::*method_pointer_5839296ac988506db6e88a14a07794a2)() const = &::clang::Type::isLinkageValid;
    bool  (::clang::Type::*method_pointer_cec40e1277d651f58e290a36e9278092)() const = &::clang::Type::canHaveNullability;
    bool  (::clang::Type::*method_pointer_2b49b20fa6f65d0b9f38b99d4f5a5332)() const = &::clang::Type::acceptsObjCTypeParams;
    class ::clang::QualType  (::clang::Type::*method_pointer_0507c5cc3767594a8db63b67498c476b)() const = &::clang::Type::getCanonicalTypeInternal;
    void  (::clang::Type::*method_pointer_8bcffc0503c254a1a566809823efb691)() const = &::clang::Type::dump;
    class ::clang::TypedefType const * (::clang::Type::*method_pointer_6c380f61537455f8a5288ba27a28e9d8)() const = &::clang::Type::getAs;
    class ::clang::TemplateSpecializationType const * (::clang::Type::*method_pointer_4eeb713254845f41bb0fe168b49b0306)() const = &::clang::Type::getAs;
    class ::clang::AttributedType const * (::clang::Type::*method_pointer_a08b46eff2d659f5a8aca6792bfe3036)() const = &::clang::Type::getAs;
    class ::clang::EnumType const * (::clang::Type::*method_pointer_94d6aff7df775da68b290f7bd73e548a)() const = &::clang::Type::getAs;
    class ::clang::EnumType const * (::clang::Type::*method_pointer_75d50b1a49b75e489a19b988254eeab9)() const = &::clang::Type::castAs;
    class ::clang::BuiltinType const * (::clang::Type::*method_pointer_4b94a95622675c189effb487930ddce9)() const = &::clang::Type::getAs;
    class ::clang::BuiltinType const * (::clang::Type::*method_pointer_fafa728ac61550fa87fc286342884b7b)() const = &::clang::Type::castAs;
    class ::clang::RecordType const * (::clang::Type::*method_pointer_705a1b4d7aa85d00bcd36f7ef14f989f)() const = &::clang::Type::getAs;
    class ::clang::RecordType const * (::clang::Type::*method_pointer_71622a3f7c81554594930b9221f58d17)() const = &::clang::Type::castAs;
    class ::clang::InjectedClassNameType const * (::clang::Type::*method_pointer_b2b941582be8536e9ff7f4d606069efc)() const = &::clang::Type::getAs;
    class ::clang::InjectedClassNameType const * (::clang::Type::*method_pointer_46ba2425fc38557782928231d737d348)() const = &::clang::Type::castAs;
    class ::clang::ObjCInterfaceType const * (::clang::Type::*method_pointer_3f5da83118f3515796c1876a8ce68691)() const = &::clang::Type::getAs;
    class ::clang::ObjCInterfaceType const * (::clang::Type::*method_pointer_d79eb4edba70577b911e2d967ca9d230)() const = &::clang::Type::castAs;
    class ::clang::TemplateTypeParmType const * (::clang::Type::*method_pointer_0bb4ba7786135e6f93854e0a279b8441)() const = &::clang::Type::getAs;
    class ::clang::TemplateTypeParmType const * (::clang::Type::*method_pointer_923371ff733f56acbb1f9e42dc9fec68)() const = &::clang::Type::castAs;
    class ::clang::FunctionNoProtoType const * (::clang::Type::*method_pointer_7bccc9aca834588baddcb543b1a09b3c)() const = &::clang::Type::getAs;
    class ::clang::FunctionProtoType const * (::clang::Type::*method_pointer_0470e8d0e60a5a8bb8c49185b2fdb989)() const = &::clang::Type::getAs;
    class ::clang::ReferenceType const * (::clang::Type::*method_pointer_8431e544111a5ec3b889172e674563bd)() const = &::clang::Type::castAs;
    class ::clang::ObjCObjectType const * (::clang::Type::*method_pointer_d0365343733055ba877ca45eda887d2c)() const = &::clang::Type::getAs;
    class ::clang::ObjCObjectType const * (::clang::Type::*method_pointer_780837786b2153989fbe8ba526da6f0e)() const = &::clang::Type::castAs;
    class ::clang::PointerType const * (::clang::Type::*method_pointer_ca17934bfa695d42aa088e8767ced14d)() const = &::clang::Type::getAs;
    class ::clang::FunctionType const * (::clang::Type::*method_pointer_a4e82a8cef6c52da80d99b4bb6e4c4f8)() const = &::clang::Type::getAs;
    class ::clang::ReferenceType const * (::clang::Type::*method_pointer_627b69774627568291543f28435dd84c)() const = &::clang::Type::getAs;
    class ::clang::MemberPointerType const * (::clang::Type::*method_pointer_7f825c2579b35d8fbf24ab936b6f409d)() const = &::clang::Type::getAs;
    class ::clang::ObjCObjectPointerType const * (::clang::Type::*method_pointer_e8e185cd19f95a53a599a5efa794d91c)() const = &::clang::Type::getAs;
    class ::clang::FunctionType const * (::clang::Type::*method_pointer_b6b31461c480500dbf3ccb5b5e436cff)() const = &::clang::Type::castAs;
    class ::clang::PackExpansionType const * (::clang::Type::*method_pointer_d99c89744fd2533b8f32e7ccd94b69ca)() const = &::clang::Type::getAs;
    class ::clang::UnresolvedUsingType const * (::clang::Type::*method_pointer_65e8c7dae6025317865d70b53cb4d421)() const = &::clang::Type::getAs;
    struct function_group
    {
        static class ::clang::TypedefNameDecl * function_2339f3117da7501ea6f9a05d82d41377(class ::clang::Type & parameter_0)
        { return ::clanglite::get_as_typedef_name_decl(parameter_0); }
    };
    boost::python::class_< class ::clang::Type, autowig::Held< class ::clang::Type >::Type, boost::noncopyable > class_fa70cbf14eb958718b2fd94051e17863("Type", "", boost::python::no_init);
    class_fa70cbf14eb958718b2fd94051e17863.def("get_type_class", method_pointer_8553d8a312825b639a5c6310320adf62, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_from_ast", method_pointer_3f851da1e9d354c8b19363b6424eb204, "Whether this type comes from an AST file.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("contains_unexpanded_parameter_pack", method_pointer_3ed19665da655d4abe957a7b021b0fec, "Whether this type is or contains an unexpanded parameter pack, used to\nsupport C++0x variadic templates.\n\nA type that contains a parameter pack shall be expanded by the ellipsis\noperator at some point. For example, the typedef in the following\nexample contains an unexpanded parameter pack 'T':\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_canonical_unqualified", method_pointer_8fdb81c5d66552f4b297cf87d3871074, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_locally_unqualified_single_step_desugared_type", method_pointer_8d4a81e7079651b8896cb93aff748906, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_incomplete_or_object_type", method_pointer_daeb70def0ac5c609e0c5d0f35b7f57e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_object_type", method_pointer_2e52749d716e58dfb2a12cc9337c0bc7, "Determine whether this type is an object type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_standard_layout_type", method_pointer_27608830c95153cfb36813f6274e7231, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_builtin_type", method_pointer_785eb07b3dfc5320af9c348ab7d895e9, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_specific_builtin_type", method_pointer_73dd827d75935df3ba026e38f865cb7e, ":Parameter:\n    `K` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_placeholder_type", method_pointer_7a585a7fbf4e5b37b69e4d9afea5df24, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_placeholder_type", method_pointer_0a693c1f7f2e54e7b6f9f5e921830999, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_specific_placeholder_type", method_pointer_d4d50f195b4857418addbaf584d473ed, ":Parameter:\n    `K` (:cpp:any:`unsigned` int) - Undocumented\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_non_overload_placeholder_type", method_pointer_a9ea849f470c5242a086e615782946ba, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_integer_type", method_pointer_7e96fc6ad6c853a1b135194e031f72dc, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_enumeral_type", method_pointer_87e73df4b77f5072b3c216944ecd12b9, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_boolean_type", method_pointer_4c3b45db4d6e5dabb16357a5a04157e8, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_char_type", method_pointer_66209b4b24745833be66424afc70303d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_wide_char_type", method_pointer_84a0fb461f2c5ab7a50a8889375e148c, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_char_16_type", method_pointer_b3d463ef43c458beb999dbb5d9d535a3, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_char_32_type", method_pointer_f438995a650e546b94d43f4d2696c3e1, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_any_character_type", method_pointer_383d45b191b35f529b8c823229b2e204, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_integral_or_enumeration_type", method_pointer_8fabacc8bdeb5cd3b108cc4ad8b82bce, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_integral_or_unscoped_enumeration_type", method_pointer_9291c75cc6045fc499a866c4b38b1785, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_real_floating_type", method_pointer_7c4dbe1c1b2a5a39b16358c66f76ab4a, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_complex_type", method_pointer_dd93b1689c505e9faa597cba4e63469e, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_any_complex_type", method_pointer_13d43c55f8945fcaa070f1bf8b2c36b8, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_floating_type", method_pointer_2753085fce105004832f2e86d71a3a13, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_half_type", method_pointer_4e97a704427c5451b3f18e0715499f8b, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_real_type", method_pointer_9d4a90dc3ca6577bbf1c3be1c5f403bd, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_arithmetic_type", method_pointer_6760b81cf2315094938499e31eb4b061, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_void_type", method_pointer_ffa8143c60375ebdae40bc36e93da0d9, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_scalar_type", method_pointer_c4cd88c13cb35c98a3e9b67602e209a7, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_aggregate_type", method_pointer_a19649ec17205bd38602caeaa672e04a, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_fundamental_type", method_pointer_0ddfc3cfab825fbb99da1dd4bf138181, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_compound_type", method_pointer_cc110f37768758b08f4ba25429fd0a3f, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_function_type", method_pointer_a799385ef8b250e1b5bde7b72ab3eacb, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_function_no_proto_type", method_pointer_765a5acd958057e5b1e70136c8cc2439, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_function_proto_type", method_pointer_7926cb38b2c75c1694a26a397826c58b, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_pointer_type", method_pointer_6ec8c308afbe5888b5997bd6aaba366a, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_any_pointer_type", method_pointer_af0c28969c335074b4e2cd38b8a451d3, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_block_pointer_type", method_pointer_d6aa35abe41b5da9a04509f65f410998, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_void_pointer_type", method_pointer_14abdffb6bb754de8abd99c058a67c65, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_reference_type", method_pointer_dbd556bce0d25b7195c0709033261241, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_l_value_reference_type", method_pointer_d0c7bda2e00357a6829f99338a82507c, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_r_value_reference_type", method_pointer_76a4cfe233be50be8faf62a99e532e53, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_function_pointer_type", method_pointer_fe706c4ed162570db1afd3c9ca64ed52, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_member_pointer_type", method_pointer_7ae427eab4945186ab201168a5cda3d4, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_member_function_pointer_type", method_pointer_47c84e5609ee5a60a6474d9efb489f6e, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_member_data_pointer_type", method_pointer_a1f215d9caa95a7e8b7f3967d1921239, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_array_type", method_pointer_76203d08538158a0aaf4682f9c5017e9, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_constant_array_type", method_pointer_664079d7a69b5c9b808817727c6ba5a8, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_incomplete_array_type", method_pointer_8365595ad95d56cf94db9aac77e3a9d9, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_variable_array_type", method_pointer_3d6db0aa9d5f512ba6f4daac04d0250e, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_dependent_sized_array_type", method_pointer_b6db3fbd73405f2a9ecfc29be7ff17a5, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_record_type", method_pointer_fc40e6c008045c09bcee5de53069cc58, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_class_type", method_pointer_a9c61b75e1f557fea7c2e436f28ebf5e, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_structure_type", method_pointer_b4fa415ddaaf5660ae100b2ff47aaf8b, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_boxable_record_type", method_pointer_82c1e107feb959099cc47ef08c2b4643, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_interface_type", method_pointer_22633cb3bf27536d9771a6922c720312, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_structure_or_class_type", method_pointer_8e4c609727a3543984803a32915e6abf, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_union_type", method_pointer_53cacf2228ce500b9a0c3bc22cfe238c, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_complex_integer_type", method_pointer_0e295660766651e89a9016b4458049f9, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_vector_type", method_pointer_9f4966f0dfac5419afa0977603128515, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ext_vector_type", method_pointer_065b0d9e66705ee2a99655984897e5ab, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_object_pointer_type", method_pointer_b9f0fa262524540fbb10cc30704184f1, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_retainable_type", method_pointer_9d5ccf344fed547db5c8cee8c5442def, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_lifetime_type", method_pointer_58bdcfcea97c5911a906ca65a2573194, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_indirect_lifetime_type", method_pointer_d98efaca4585584bbab048836b2966c3, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_cns_object_type", method_pointer_7ac1dbc74aec5946b321973f8fed9727, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_independent_class_type", method_pointer_1ca0a01ffce358f8a3e8314615b538a2, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_object_type", method_pointer_33ea5b21a47b548c9290f49890bf4e20, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_qualified_interface_type", method_pointer_de41aefca4bc54d9b5041404244e39eb, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_qualified_id_type", method_pointer_3cc05b56c0395cddba0d0525de8bcb69, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_qualified_class_type", method_pointer_86a6079a2cc9566e8950e8cb450a892b, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_object_or_interface_type", method_pointer_9e3ec6f8617f539d8d38f1aab5b930cd, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_id_type", method_pointer_d0f82c313bde5df48b69512e86eceb52, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_inert_unsafe_unretained_type", method_pointer_d10e39fe6a1e544391655644a0534f40, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_class_type", method_pointer_d4fa6239aea55ca684c0a4714dd7359e, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_class_or_class_kind_of_type", method_pointer_a31bb44e031e5e4b8238c62575dbd89f, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_block_compatible_obj_c_pointer_type", method_pointer_6cdfd2b3c0535f7cbc727c8243df3d2a, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_sel_type", method_pointer_a9fda9377c3153b5b17e396a8b82e29c, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_c_builtin_type", method_pointer_a2fd03eea7a25d2da27eebda095580a6, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_carc_bridgable_type", method_pointer_bacda378c512550d8fcee1aabae73a77, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_carc_bridgable_type", method_pointer_d93cd68741bb5972bdee10a006d376cf, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_template_type_parm_type", method_pointer_ad242e71fd6851a08a0e50f8322e0a62, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_null_ptr_type", method_pointer_98815941c180583e8da7457d15c201aa, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_align_val_t", method_pointer_80b6f3b2b9225ffc82cdc617f23d2939, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_atomic_type", method_pointer_b5c24951a4fc5591b819d3f570f1a2ee, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_ro_type", method_pointer_5ce905c17a3c52fb811d4dc8e990f870, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_array_ro_type", method_pointer_e17d9d9dbf7258649dbe9bf34d01ba1d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_buffer_ro_type", method_pointer_1448fe541bd0594d80b19778eb30e751, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_ro_type", method_pointer_2dc892e5365259eaac8dca0c39718161, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_ro_type", method_pointer_2685d1d17f0852e3a580480d6e00dd34, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_depth_ro_type", method_pointer_e35b2384581b5612b8ad3c9e8deb4ecd, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_depth_ro_type", method_pointer_0f07a5b86bba540ba0355bc1a3abe9b5, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_msaaro_type", method_pointer_580b69f750f45a928d1b6702c96a1db4, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_msaaro_type", method_pointer_a80f25e9230f54ec9d60b07a6a9c93ea, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_msaa_depth_ro_type", method_pointer_db74a6025cc1558fa3ed7e6f39e79fee, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_msaa_depth_ro_type", method_pointer_c39392fa55525daea8df3041266df40d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_3d_ro_type", method_pointer_e3d35e2f19f950dfbf42334f64bcff24, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_wo_type", method_pointer_d21eeff02c4e5e0f9137665f0413f3d9, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_array_wo_type", method_pointer_ac4d0734a54557f597ff8dcb690fdbf6, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_buffer_wo_type", method_pointer_1d76bba747c250e1a08aef4e777148c6, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_wo_type", method_pointer_ea8014e756ba53208782748c8df0f392, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_wo_type", method_pointer_2808dc7a42cf548592ba4253d74dbd30, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_depth_wo_type", method_pointer_197ab0c1fc8c5f898bb5639160aa5cd7, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_depth_wo_type", method_pointer_bd410510a3a75fdebf36ec3a17925028, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_msaawo_type", method_pointer_682ef55687c75bf1b83c24a14b6bee7d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_msaawo_type", method_pointer_b33ab0aa8a01596f884238204896e50d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_msaa_depth_wo_type", method_pointer_2af0d205d4105b26a209d14318d24416, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_msaa_depth_wo_type", method_pointer_b10a7ff9a0d2575385a90f40ac5e2356, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_3d_wo_type", method_pointer_78c6ae588bbf55f4b0a08208f69cc85a, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_rw_type", method_pointer_4c5751793c365ae7a5c88639f0e228e4, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_array_rw_type", method_pointer_7ff62f2b07b755ce9bf865dbc9e0248c, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_1d_buffer_rw_type", method_pointer_8c0a8ca6cda25739a2a3628304139eb6, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_rw_type", method_pointer_85c0a69bc80c5341bfb52420f530cc95, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_rw_type", method_pointer_beca962df70c54cba20a19aa1d3a85ba, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_depth_rw_type", method_pointer_e6e9c2ff4cb451c6b6accdc88d24c9c2, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_depth_rw_type", method_pointer_a37e87fccdaf597ab37b1f9dd35b951c, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_msaarw_type", method_pointer_2b7502426cc254f294f438c25f6b6291, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_msaarw_type", method_pointer_6206abae2cd15d3580fdc7507d0eaa77, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_msaa_depth_rw_type", method_pointer_c49efdd3e8525080a5418e80b4edb79d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_2d_array_msaa_depth_rw_type", method_pointer_d6c4fb38ab74552582f898945a225ea4, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_ocl_image_3d_rw_type", method_pointer_91047a7677a556139a59357c86303f81, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_image_type", method_pointer_aba36ed9fecf50168514ea3d79aec59b, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_sampler_t", method_pointer_0b48f2a618df594f93f7ff96a7384743, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_event_t", method_pointer_11c32ad26cac559f9436ca56abf5af67, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_clk_event_t", method_pointer_cecceb575f9d5f36b9e5da219381149d, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_queue_t", method_pointer_0829bebfb31b58abba1d6bdbe9a79cdc, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_nd_range_t", method_pointer_180ad1a7a6515f05b989f40b25c15320, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_reserve_idt", method_pointer_61e3fc6006115d9cbe77904fa21e8b96, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_pipe_type", method_pointer_1c2d4fdce005559f952c664741e05b21, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_open_cl_specific_type", method_pointer_9a99085f3fe85d5e8cefbbef10adf07f, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_obj_carc_implicitly_unretained_type", method_pointer_7db2be4d18a556ffaeb8945ae4982454, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_dependent_type", method_pointer_71b23fa4590b52bcab12109fbb1751be, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_instantiation_dependent_type", method_pointer_ff195fbc587d582688c50ffcb2cbd2d6, "Determine whether this type is an instantiation-dependent type, meaning\nthat the type involves a template parameter (even if the definition does\nnot actually depend on the type substituted for that template\nparameter).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_undeduced_type", method_pointer_3140e72646e753bda45c4ab262830a6d, "Determine whether this type is an undeduced type, meaning that it\nsomehow involves a C++11 'auto' type which has not yet been deduced.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_variably_modified_type", method_pointer_46b074cedbd45fbfa4ffa96c4b31acfb, "Whether this type is a variably-modified type (C99 6.7.5).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_sized_vla_type", method_pointer_da6776f619bf5c8faebe88e659ba855d, "Whether this type involves a variable-length array type with a definite\nsize.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_unnamed_or_local_type", method_pointer_14589b303ff655f39a7426c01dc7ed8f, "Whether this type is or contains a local or unnamed type.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_overloadable_type", method_pointer_3d53f528f5ee58a39c3a24666fa8611f, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_elaborated_type_specifier", method_pointer_7bda653f4fc25c50b850c8b33676b22a, "Determine wither this type is a C++ elaborated-type-specifier.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("can_decay_to_pointer_type", method_pointer_ef805fc88f2e5c1a84d2b1cdf0c30582, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_pointer_representation", method_pointer_4d9d4108193c5795bdb210e08af5ed99, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_obj_c_pointer_representation", method_pointer_439a2dd1f780571f8f2dfff4c0c17668, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_integer_representation", method_pointer_95c381b9a3235aeaaa5a7601d86949e6, "Determine whether this type has an integer representation of some sort,\ne.g., it is an integer type or a vector.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_signed_integer_representation", method_pointer_b126aaaa90615800bd8ac5ca31f9473e, "Determine whether this type has an signed integer representation of some\nsort, e.g., it is an signed integer type or a vector.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_unsigned_integer_representation", method_pointer_9f30acd90d065b7f9b5aef7a0e3d8105, "Determine whether this type has an unsigned integer representation of\nsome sort, e.g., it is an unsigned integer type or a vector.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("has_floating_representation", method_pointer_9b226c85c788536da56f4f50a3254864, "Determine whether this type has a floating-point representation of some\nsort, e.g., it is a floating-point type or a vector thereof.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_structure_type", method_pointer_4f003cdb9c69564a9919a11c5bfaeee6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_union_type", method_pointer_b1631536768155e3900fbad2801cc81f, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.RecordType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_complex_integer_type", method_pointer_311557adfc8e5effac3f94c40cccb718, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_obj_c_interface_type", method_pointer_09956d1f9f99526485688a79a3b50247, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_obj_c_interface_pointer_type", method_pointer_f5c7eb26012557afaa7ba72445c5ac88, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_obj_c_qualified_id_type", method_pointer_0973d8234cac5cc8b0c49f889c7ffad0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_obj_c_qualified_class_type", method_pointer_40486c1ed0285aaca87845fe43dcb1b5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_obj_c_qualified_interface_type", method_pointer_5ed7f9a9a8dc58ba81390885c2f80750, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_cxx_record_decl", method_pointer_d97bc20c3c965308949ba4baaf08b4de, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the CXXRecordDecl that this type refers to, either because the\ntype is a RecordType or because it is the injected-class-name type of a\nclass template or class template partial specialization.\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_tag_decl", method_pointer_6639873221095f27bc2ea1a41b44aff5, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the TagDecl that this type refers to, either because the type\nis a TagType or because it is the injected-class-name type of a class\ntemplate or class template partial specialization.\n\n:Return Type:\n    :py:class:`clanglite.clang.TagDecl`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_pointee_cxx_record_decl", method_pointer_c65f3a1248f65a8da4659983e80d0e43, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_contained_auto_type", method_pointer_727e90af5bc356899750d731c9dd7229, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.AutoType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_array_type_unsafe", method_pointer_0e1c54ce213356399ee2b611fcaa655c, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ArrayType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as_array_type_unsafe", method_pointer_0e3ef1de24495738a8a20bdcd08ed819, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.ArrayType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_base_element_type_unsafe", method_pointer_6665845b6e8358c2937df03100a20292, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.Type`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_array_element_type_no_type_qual", method_pointer_5329a299eea3516091dd32764ded047a, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.Type`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_pointee_or_array_element_type", method_pointer_b456f2d700a75ec692340bd32b230d14, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.Type`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_pointee_type", method_pointer_70258610ad8d5daa9b243388b78e7da8, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_unqualified_desugared_type", method_pointer_b43a03398625550b9b1bafb9b8eaca71, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.Type`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_promotable_integer_type", method_pointer_1f6d0177210f5af7b519a7a020db7c30, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_signed_integer_type", method_pointer_d8d5b8dd84df53b9af745a91f3235335, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_unsigned_integer_type", method_pointer_8311126f905b56c7a5f43abfe18783f7, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_signed_integer_or_enumeration_type", method_pointer_03d1ab95650b57c5b87915d9c3bfef12, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_unsigned_integer_or_enumeration_type", method_pointer_80f9e07bdd8e5a9b84f81113a20d4be8, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_constant_size_type", method_pointer_4ea929e11a82571ba013d007b277d3e6, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_specifier_type", method_pointer_0159c80dd5dc510295360cca04696109, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_visibility_explicit", method_pointer_a1c8d79d83545c6e94b63ba5a879cdea, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("is_linkage_valid", method_pointer_5839296ac988506db6e88a14a07794a2, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("can_have_nullability", method_pointer_cec40e1277d651f58e290a36e9278092, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("accepts_obj_c_type_params", method_pointer_2b49b20fa6f65d0b9f38b99d4f5a5332, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_canonical_type_internal", method_pointer_0507c5cc3767594a8db63b67498c476b, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("dump", method_pointer_8bcffc0503c254a1a566809823efb691, "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_6c380f61537455f8a5288ba27a28e9d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "This will check for a TypedefType by removing any existing sugar until\nit reaches a TypedefType or a non-sugared type.\n\n:Return Type:\n    :py:class:`clanglite.clang.TypedefType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_4eeb713254845f41bb0fe168b49b0306, boost::python::return_value_policy< boost::python::reference_existing_object >(), "This will check for a TemplateSpecializationType by removing any\nexisting sugar until it reaches a TemplateSpecializationType or a\nnon-sugared type.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateSpecializationType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_a08b46eff2d659f5a8aca6792bfe3036, boost::python::return_value_policy< boost::python::reference_existing_object >(), "This will check for an AttributedType by removing any existing sugar\nuntil it reaches an AttributedType or a non-sugared type.\n\n:Return Type:\n    :py:class:`clanglite.clang.AttributedType`\n\n");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_94d6aff7df775da68b290f7bd73e548a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_75d50b1a49b75e489a19b988254eeab9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_4b94a95622675c189effb487930ddce9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_fafa728ac61550fa87fc286342884b7b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_705a1b4d7aa85d00bcd36f7ef14f989f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_71622a3f7c81554594930b9221f58d17, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_b2b941582be8536e9ff7f4d606069efc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_46ba2425fc38557782928231d737d348, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_3f5da83118f3515796c1876a8ce68691, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_d79eb4edba70577b911e2d967ca9d230, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_0bb4ba7786135e6f93854e0a279b8441, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_923371ff733f56acbb1f9e42dc9fec68, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_7bccc9aca834588baddcb543b1a09b3c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_0470e8d0e60a5a8bb8c49185b2fdb989, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_8431e544111a5ec3b889172e674563bd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_d0365343733055ba877ca45eda887d2c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_780837786b2153989fbe8ba526da6f0e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_ca17934bfa695d42aa088e8767ced14d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_a4e82a8cef6c52da80d99b4bb6e4c4f8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_627b69774627568291543f28435dd84c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_7f825c2579b35d8fbf24ab936b6f409d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_e8e185cd19f95a53a599a5efa794d91c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("cast_as", method_pointer_b6b31461c480500dbf3ccb5b5e436cff, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_d99c89744fd2533b8f32e7ccd94b69ca, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as", method_pointer_65e8c7dae6025317865d70b53cb4d421, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_fa70cbf14eb958718b2fd94051e17863.def("get_as_typedef_name_decl", function_group::function_2339f3117da7501ea6f9a05d82d41377, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");

}