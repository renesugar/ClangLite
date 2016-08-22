#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_e536a5cae34e54058d1fe69715937f7a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::ASTContext::*method_pointer_ee8fac372f3f526ea574a197280b8b1d)() = &::clang::ASTContext::AnyObjCImplementation;
    unsigned int  (::clang::ASTContext::*method_pointer_60bda93ecbea522286df6b73ae49de74)(class ::clang::ObjCInterfaceDecl  const *) const = &::clang::ASTContext::CountNonClassIvars;
    bool  (::clang::ASTContext::*method_pointer_4263e257d69e590d8f2ecf4c81e22df6)(class ::clang::Decl  const *) = &::clang::ASTContext::DeclMustBeEmitted;
    bool  (::clang::ASTContext::*method_pointer_7d53a6faa333562ba4327bb022b0cdc0)(class ::clang::FunctionProtoType  const *, class ::clang::FunctionProtoType  const *) = &::clang::ASTContext::FunctionTypesMatchOnNSConsumedAttrs;
    bool  (::clang::ASTContext::*method_pointer_c73622b6ac24552c822a5d7f16f111c4)(class ::clang::ObjCMethodDecl  const *, class ::clang::ObjCMethodDecl  const *) = &::clang::ASTContext::ObjCMethodsAreEqual;
    void  (::clang::ASTContext::*method_pointer_670b14d8693b52c3b9f61ccb17a2f25c)() const = &::clang::ASTContext::PrintStats;
    bool  (::clang::ASTContext::*method_pointer_18ca2759748952589b4257d3c5160390)(class ::clang::ObjCProtocolDecl  *, class ::clang::ObjCProtocolDecl  *) const = &::clang::ASTContext::ProtocolCompatibleWithProtocol;
    void  (::clang::ASTContext::*method_pointer_c50b179cf7d5504bb68b11a9fe9dcec3)(class ::clang::ObjCContainerDecl  const *) = &::clang::ASTContext::ResetObjCLayout;
    void  (::clang::ASTContext::*method_pointer_7dabe7d9717458baa9ffead700f54edd)(class ::clang::CXXRecordDecl  *, class ::clang::CXXConstructorDecl  *) = &::clang::ASTContext::addCopyConstructorForExceptionObject;
    void  (::clang::ASTContext::*method_pointer_a2239459713e5cc8bb82ba3434d53500)(class ::clang::TagDecl  *, class ::clang::DeclaratorDecl  *) = &::clang::ASTContext::addDeclaratorForUnnamedTagDecl;
    void  (::clang::ASTContext::*method_pointer_1970e24dfe5a52279123ec81b3620b4a)(class ::clang::CXXMethodDecl  const *, class ::clang::CXXMethodDecl  const *) = &::clang::ASTContext::addOverriddenMethod;
    void  (::clang::ASTContext::*method_pointer_0c02decbf90c55fc864179c47d75e9b8)(class ::clang::TagDecl  *, class ::clang::TypedefNameDecl  *) = &::clang::ASTContext::addTypedefNameForUnnamedTagDecl;
    void  (::clang::ASTContext::*method_pointer_b689b0bf7a0d5775bc19da4716b16268)(class ::clang::ImportDecl  *) = &::clang::ASTContext::addedLocalImportDecl;
    bool  (::clang::ASTContext::*method_pointer_a0807fb3023a57b5ad73a15e26422a28)(unsigned int ) const = &::clang::ASTContext::addressSpaceMapManglingFor;
    bool  (::clang::ASTContext::*method_pointer_03f668978691520eb4e591dd9a8e9088)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_8ec1eafb831e58089b439f555e86a5aa)(class ::clang::ObjCObjectType  const *, class ::clang::ObjCObjectType  const *) = &::clang::ASTContext::canAssignObjCInterfaces;
    bool  (::clang::ASTContext::*method_pointer_079c183b6d345f7f972954788e486118)(class ::clang::ObjCObjectPointerType  const *, class ::clang::ObjCObjectPointerType  const *, bool ) = &::clang::ASTContext::canAssignObjCInterfacesInBlockPointer;
    void  (::clang::ASTContext::*method_pointer_5054cbf6eda75dd4a64b8771ac1d56ae)(class ::clang::NamedDecl  *) = &::clang::ASTContext::deduplicateMergedDefinitonsFor;
    void  (::clang::ASTContext::*method_pointer_08a1c4ab7f07581ebc65dff49745ccf7)(class ::clang::Decl  const *) = &::clang::ASTContext::eraseDeclAttrs;
    unsigned long int  (::clang::ASTContext::*method_pointer_5d9dd8e2725357c2946bdabe4b364494)() const = &::clang::ASTContext::getASTAllocatedMemory;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_bf76da9314d15112b6b0764527e155bf)() const = &::clang::ASTContext::getBOOLDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_1db5296f89c35911a769f5f31afb796c)() const = &::clang::ASTContext::getBuiltinMSVaListDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_8f5e585ce04d5c78b0b01af1fab2d0ed)() const = &::clang::ASTContext::getBuiltinVaListDecl;
    class ::clang::Type  const * (::clang::ASTContext::*method_pointer_7401bd2162215c0dbecb9b2d441380d2)(class ::clang::Type  const *) const = &::clang::ASTContext::getCanonicalType;
    unsigned long int  (::clang::ASTContext::*method_pointer_757214a231ef5df38351d798f4fc0acf)() const = &::clang::ASTContext::getCharWidth;
    class ::clang::FunctionDecl  * (::clang::ASTContext::*method_pointer_ab8aad32cd845c3f888a9e59611eae1a)(class ::clang::FunctionDecl  const *) = &::clang::ASTContext::getClassScopeSpecializationPattern;
    unsigned long int  (::clang::ASTContext::*method_pointer_e3e84d80a24f5b8a8347d78188a505a2)(class ::clang::ConstantArrayType  const *) const = &::clang::ASTContext::getConstantArrayElementCount;
    class ::clang::CXXConstructorDecl  const * (::clang::ASTContext::*method_pointer_f5ee27f5f00d5723ab5ff9dee2a2dcd4)(class ::clang::CXXRecordDecl  *) = &::clang::ASTContext::getCopyConstructorForExceptionObject;
    class ::clang::CXXMethodDecl  const * (::clang::ASTContext::*method_pointer_81262f4536d754abb9e55dfac565e49b)(class ::clang::CXXRecordDecl  const *) = &::clang::ASTContext::getCurrentKeyFunction;
    class ::clang::DeclaratorDecl  * (::clang::ASTContext::*method_pointer_0db8ee1329b858bbb7ba55294b6051ba)(class ::clang::TagDecl  const *) = &::clang::ASTContext::getDeclaratorForUnnamedTagDecl;
    class ::clang::ExternCContextDecl  * (::clang::ASTContext::*method_pointer_7d4363b9772055878b9bb8809452d827)() const = &::clang::ASTContext::getExternCContextDecl;
    unsigned long int  (::clang::ASTContext::*method_pointer_a335596b1f91580c8df32b86b4699953)(class ::clang::ValueDecl  const *) const = &::clang::ASTContext::getFieldOffset;
    class ::clang::TypeDecl  * (::clang::ASTContext::*method_pointer_87c417ff5c905d819a895e5981fd9c23)() const = &::clang::ASTContext::getFloat128StubType;
    class ::clang::FieldDecl  * (::clang::ASTContext::*method_pointer_ccdd4030c7e159dda0faea0fcedf6d9e)(class ::clang::FieldDecl  *) = &::clang::ASTContext::getInstantiatedFromUnnamedFieldDecl;
    class ::clang::NamedDecl  * (::clang::ASTContext::*method_pointer_43dabfd3382f5230941b249284c16ec6)(class ::clang::UsingDecl  *) = &::clang::ASTContext::getInstantiatedFromUsingDecl;
    class ::clang::UsingShadowDecl  * (::clang::ASTContext::*method_pointer_6a022fbef86c506ebe08bcf0a759e29e)(class ::clang::UsingShadowDecl  *) = &::clang::ASTContext::getInstantiatedFromUsingShadowDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_f9b2f6d077355cc7b2f961a06b5bc70d)() const = &::clang::ASTContext::getInt128Decl;
    class ::clang::BuiltinTemplateDecl  * (::clang::ASTContext::*method_pointer_fc1e89f7af0757c693debe41877a829b)() const = &::clang::ASTContext::getMakeIntegerSeqDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_1ebe0997e19050a7980541ed443066f8)(class ::clang::NamedDecl  const *) const = &::clang::ASTContext::getManglingNumber;
    class ::clang::ImportDecl  * (*method_pointer_fef2717ef45659bbb99eaa0407123b40)(class ::clang::ImportDecl  *) = ::clang::ASTContext::getNextLocalImport;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_0a0ed5533ec85f1cb9d6df0819fd285f)() const = &::clang::ASTContext::getObjCClassDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_f6dd896e3df95f55a305bfc9ea29a323)() const = &::clang::ASTContext::getObjCIdDecl;
    class ::clang::ObjCImplementationDecl  * (::clang::ASTContext::*method_pointer_789fbc9c767d5c7884bc146dd519e6dd)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ASTContext::getObjCImplementation;
    class ::clang::ObjCCategoryImplDecl  * (::clang::ASTContext::*method_pointer_16340166aed65e5295213ce92325aced)(class ::clang::ObjCCategoryDecl  *) = &::clang::ASTContext::getObjCImplementation;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_6760959fceea588c9f6778a85ef41424)() = &::clang::ASTContext::getObjCInstanceTypeDecl;
    class ::clang::ObjCMethodDecl  const * (::clang::ASTContext::*method_pointer_c7655c4e16f35fc9ac32e7c1dc1468e0)(class ::clang::ObjCMethodDecl  const *) const = &::clang::ASTContext::getObjCMethodRedeclaration;
    class ::clang::ObjCPropertyImplDecl  * (::clang::ASTContext::*method_pointer_92d0530e40dd53cda9ca71143ef578e3)(class ::clang::ObjCPropertyDecl  const *, class ::clang::Decl  const *) const = &::clang::ASTContext::getObjCPropertyImplDeclForPropertyDecl;
    class ::clang::ObjCInterfaceDecl  * (::clang::ASTContext::*method_pointer_7c01494e1a2958208e2a19ac7f961059)() const = &::clang::ASTContext::getObjCProtocolDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_feaac02413ed5e21a3852e355d6377bc)() const = &::clang::ASTContext::getObjCSelDecl;
    class ::clang::ObjCInterfaceDecl  const * (::clang::ASTContext::*method_pointer_9448a352bdc3597caaaf2d228db046a6)(class ::clang::NamedDecl  const *) const = &::clang::ASTContext::getObjContainingInterface;
    unsigned int  (::clang::ASTContext::*method_pointer_f41472e97eef55b19f62ef8db34a9a1c)(class ::clang::ParmVarDecl  const *) const = &::clang::ASTContext::getParameterIndex;
    unsigned int  (::clang::ASTContext::*method_pointer_c0ee383fda3453f491238a51377c8b6d)(class ::clang::Type  const *) const = &::clang::ASTContext::getPreferredTypeAlign;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_725f382667aa59bb951a2e80ec528e9a)(class ::clang::Decl  *) = &::clang::ASTContext::getPrimaryMergedDecl;
    unsigned long int  (::clang::ASTContext::*method_pointer_8e47d45626945373a9d06e11cc8e8f05)() const = &::clang::ASTContext::getSideTableAllocatedMemory;
    unsigned int  (::clang::ASTContext::*method_pointer_790fce7b992f5f7296af0aea81077761)(class ::clang::VarDecl  const *) const = &::clang::ASTContext::getStaticLocalNumber;
    unsigned int  (::clang::ASTContext::*method_pointer_152ca9e22dfe5b7b8dc22fdd9d3fac59)(unsigned int ) const = &::clang::ASTContext::getTargetAddressSpace;
    unsigned int  (::clang::ASTContext::*method_pointer_4f25b8fb1f7253329c4d2c557a2a7791)() const = &::clang::ASTContext::getTargetDefaultAlignForAttributeAligned;
    class ::clang::TranslationUnitDecl  * (::clang::ASTContext::*method_pointer_e798ae79cd9154f3826b093cfa680919)() const = &::clang::ASTContext::getTranslationUnitDecl;
    unsigned int  (::clang::ASTContext::*method_pointer_490bef00e660549e9788c31bdb36c12e)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeAlign;
    unsigned long int  (::clang::ASTContext::*method_pointer_6c7d18c6cf025e3390c566dda656c178)(class ::clang::Type  const *) const = &::clang::ASTContext::getTypeSize;
    class ::clang::TypedefNameDecl  * (::clang::ASTContext::*method_pointer_c9176f0d6e9354f8b0f1e6569df75188)(class ::clang::TagDecl  const *) = &::clang::ASTContext::getTypedefNameForUnnamedTagDecl;
    class ::clang::TypedefDecl  * (::clang::ASTContext::*method_pointer_d83e86f7953f59a0904722a53e28cbd0)() const = &::clang::ASTContext::getUInt128Decl;
    class ::clang::Decl  * (::clang::ASTContext::*method_pointer_0a84a2519ffc5fb4993bd461cc5308d8)() const = &::clang::ASTContext::getVaListTagDecl;
    class ::clang::FunctionDecl  * (::clang::ASTContext::*method_pointer_6141e583b5e559829f06183f7b7de782)() = &::clang::ASTContext::getcudaConfigureCallDecl;
    bool  (::clang::ASTContext::*method_pointer_04e92eb0b540500c971d1420e0c2ef2d)(class ::clang::Type  const *, class ::clang::Type  const *) const = &::clang::ASTContext::hasSameType;
    bool  (::clang::ASTContext::*method_pointer_7a38a183b93b5da78a759e5f9d7412ea)(class ::clang::Type  const *) const = &::clang::ASTContext::isAlignmentRequired;
    bool  (::clang::ASTContext::*method_pointer_b83a8459d91d57df9b5a762b7101bf29)(class ::clang::VarDecl  const *) const = &::clang::ASTContext::isMSStaticDataMemberInlineDefinition;
    bool  (::clang::ASTContext::*method_pointer_90e513389c5054f58485bc298f0fcfc6)(class ::clang::CXXRecordDecl  const *) const = &::clang::ASTContext::isNearlyEmpty;
    unsigned int  (::clang::ASTContext::*method_pointer_c1675d5996fe594bba32d2155f4acb64)(class ::clang::CXXMethodDecl  const *) const = &::clang::ASTContext::overridden_methods_size;
    void  (::clang::ASTContext::*method_pointer_88991cbe0d5f5b1ab3c64740e9815b66)(class ::clang::TypedefDecl  *) = &::clang::ASTContext::setBOOLDecl;
    void  (::clang::ASTContext::*method_pointer_0c591c25cd775624b788818aa4359039)(class ::clang::FunctionDecl  *, class ::clang::FunctionDecl  *) = &::clang::ASTContext::setClassScopeSpecializationPattern;
    void  (::clang::ASTContext::*method_pointer_e3d2e0cf7f5354789231b1750edad48e)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setFILEDecl;
    void  (::clang::ASTContext::*method_pointer_044593c83e4352f5992abfc83695791a)(class ::clang::FieldDecl  *, class ::clang::FieldDecl  *) = &::clang::ASTContext::setInstantiatedFromUnnamedFieldDecl;
    void  (::clang::ASTContext::*method_pointer_d99942c8407750cea3dfaaa74dd89e85)(class ::clang::UsingDecl  *, class ::clang::NamedDecl  *) = &::clang::ASTContext::setInstantiatedFromUsingDecl;
    void  (::clang::ASTContext::*method_pointer_28ef1d32a0395c90a4bada5cf434b54d)(class ::clang::UsingShadowDecl  *, class ::clang::UsingShadowDecl  *) = &::clang::ASTContext::setInstantiatedFromUsingShadowDecl;
    void  (::clang::ASTContext::*method_pointer_788d9a29644e5df6a14a496f2d6aa6bf)(class ::clang::NamedDecl  const *, unsigned int ) = &::clang::ASTContext::setManglingNumber;
    void  (::clang::ASTContext::*method_pointer_94f6814f8a39593086d8cdc5cd880cd8)(class ::clang::CXXMethodDecl  const *) = &::clang::ASTContext::setNonKeyFunction;
    void  (::clang::ASTContext::*method_pointer_be222442f01b5342a7c17c9624fe4868)(class ::clang::ObjCInterfaceDecl  *) = &::clang::ASTContext::setObjCConstantStringInterface;
    void  (::clang::ASTContext::*method_pointer_2cbec33f77f752ecb5e4cef92dde0882)(class ::clang::ObjCCategoryDecl  *, class ::clang::ObjCCategoryImplDecl  *) = &::clang::ASTContext::setObjCImplementation;
    void  (::clang::ASTContext::*method_pointer_6894cec629025c95b36a717a94cc4a11)(class ::clang::ObjCInterfaceDecl  *, class ::clang::ObjCImplementationDecl  *) = &::clang::ASTContext::setObjCImplementation;
    void  (::clang::ASTContext::*method_pointer_667fa73ab5fc5810b25acfbfb1b5cf77)(class ::clang::ObjCMethodDecl  const *, class ::clang::ObjCMethodDecl  const *) = &::clang::ASTContext::setObjCMethodRedeclaration;
    void  (::clang::ASTContext::*method_pointer_b142b69eb7ac5f2d8bb709312fc10148)(class ::clang::ParmVarDecl  const *, unsigned int ) = &::clang::ASTContext::setParameterIndex;
    void  (::clang::ASTContext::*method_pointer_08a7b5b3cd885f079b1f8fdb71b12476)(class ::clang::Decl  *, class ::clang::Decl  *) = &::clang::ASTContext::setPrimaryMergedDecl;
    void  (::clang::ASTContext::*method_pointer_35fe93c0975d500eb3871f49a44235af)(class ::clang::VarDecl  const *, unsigned int ) = &::clang::ASTContext::setStaticLocalNumber;
    void  (::clang::ASTContext::*method_pointer_e34417bdcd5a5088bdc15cc6f40d71ac)(class ::clang::FunctionDecl  *) = &::clang::ASTContext::setcudaConfigureCallDecl;
    void  (::clang::ASTContext::*method_pointer_a8e985edbc825c799ea68835dfe27cf6)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setjmp_bufDecl;
    void  (::clang::ASTContext::*method_pointer_dbb0d1885dd55588a5d1ca34c796cb8e)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setsigjmp_bufDecl;
    void  (::clang::ASTContext::*method_pointer_c7858f7dd58c5ec18959e50f3e2f077e)(class ::clang::TypeDecl  *) = &::clang::ASTContext::setucontext_tDecl;
    boost::python::class_< class ::clang::ASTContext, autowig::HeldType< class ::clang::ASTContext >, boost::noncopyable > class_e536a5cae34e54058d1fe69715937f7a("ASTContext", "", boost::python::no_init);
    class_e536a5cae34e54058d1fe69715937f7a.def("any_obj_c_implementation", method_pointer_ee8fac372f3f526ea574a197280b8b1d, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("count_non_class_ivars", method_pointer_60bda93ecbea522286df6b73ae49de74, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("decl_must_be_emitted", method_pointer_4263e257d69e590d8f2ecf4c81e22df6, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("function_types_match_on_ns_consumed_attrs", method_pointer_7d53a6faa333562ba4327bb022b0cdc0, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("obj_c_methods_are_equal", method_pointer_c73622b6ac24552c822a5d7f16f111c4, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("print_stats", method_pointer_670b14d8693b52c3b9f61ccb17a2f25c, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("protocol_compatible_with_protocol", method_pointer_18ca2759748952589b4257d3c5160390, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("reset_obj_c_layout", method_pointer_c50b179cf7d5504bb68b11a9fe9dcec3, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_copy_constructor_for_exception_object", method_pointer_7dabe7d9717458baa9ffead700f54edd, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_declarator_for_unnamed_tag_decl", method_pointer_a2239459713e5cc8bb82ba3434d53500, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_overridden_method", method_pointer_1970e24dfe5a52279123ec81b3620b4a, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("add_typedef_name_for_unnamed_tag_decl", method_pointer_0c02decbf90c55fc864179c47d75e9b8, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("added_local_import_decl", method_pointer_b689b0bf7a0d5775bc19da4716b16268, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("address_space_map_mangling_for", method_pointer_a0807fb3023a57b5ad73a15e26422a28, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_03f668978691520eb4e591dd9a8e9088, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces", method_pointer_8ec1eafb831e58089b439f555e86a5aa, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("can_assign_obj_c_interfaces_in_block_pointer", method_pointer_079c183b6d345f7f972954788e486118, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("deduplicate_merged_definitons_for", method_pointer_5054cbf6eda75dd4a64b8771ac1d56ae, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("erase_decl_attrs", method_pointer_08a1c4ab7f07581ebc65dff49745ccf7, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_ast_allocated_memory", method_pointer_5d9dd8e2725357c2946bdabe4b364494, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_bool_decl", method_pointer_bf76da9314d15112b6b0764527e155bf, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_builtin_ms_va_list_decl", method_pointer_1db5296f89c35911a769f5f31afb796c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_builtin_va_list_decl", method_pointer_8f5e585ce04d5c78b0b01af1fab2d0ed, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_canonical_type", method_pointer_7401bd2162215c0dbecb9b2d441380d2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_char_width", method_pointer_757214a231ef5df38351d798f4fc0acf, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_class_scope_specialization_pattern", method_pointer_ab8aad32cd845c3f888a9e59611eae1a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_constant_array_element_count", method_pointer_e3e84d80a24f5b8a8347d78188a505a2, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_copy_constructor_for_exception_object", method_pointer_f5ee27f5f00d5723ab5ff9dee2a2dcd4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_current_key_function", method_pointer_81262f4536d754abb9e55dfac565e49b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_declarator_for_unnamed_tag_decl", method_pointer_0db8ee1329b858bbb7ba55294b6051ba, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_extern_c_context_decl", method_pointer_7d4363b9772055878b9bb8809452d827, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_field_offset", method_pointer_a335596b1f91580c8df32b86b4699953, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_float_128_stub_type", method_pointer_87c417ff5c905d819a895e5981fd9c23, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_instantiated_from_unnamed_field_decl", method_pointer_ccdd4030c7e159dda0faea0fcedf6d9e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_instantiated_from_using_decl", method_pointer_43dabfd3382f5230941b249284c16ec6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_instantiated_from_using_shadow_decl", method_pointer_6a022fbef86c506ebe08bcf0a759e29e, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_int_128_decl", method_pointer_f9b2f6d077355cc7b2f961a06b5bc70d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_make_integer_seq_decl", method_pointer_fc1e89f7af0757c693debe41877a829b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_mangling_number", method_pointer_1ebe0997e19050a7980541ed443066f8, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_next_local_import", method_pointer_fef2717ef45659bbb99eaa0407123b40, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_class_decl", method_pointer_0a0ed5533ec85f1cb9d6df0819fd285f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_id_decl", method_pointer_f6dd896e3df95f55a305bfc9ea29a323, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_implementation", method_pointer_789fbc9c767d5c7884bc146dd519e6dd, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_implementation", method_pointer_16340166aed65e5295213ce92325aced, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_instance_type_decl", method_pointer_6760959fceea588c9f6778a85ef41424, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_method_redeclaration", method_pointer_c7655c4e16f35fc9ac32e7c1dc1468e0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_property_impl_decl_for_property_decl", method_pointer_92d0530e40dd53cda9ca71143ef578e3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_protocol_decl", method_pointer_7c01494e1a2958208e2a19ac7f961059, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_c_sel_decl", method_pointer_feaac02413ed5e21a3852e355d6377bc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_obj_containing_interface", method_pointer_9448a352bdc3597caaaf2d228db046a6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_parameter_index", method_pointer_f41472e97eef55b19f62ef8db34a9a1c, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_preferred_type_align", method_pointer_c0ee383fda3453f491238a51377c8b6d, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_primary_merged_decl", method_pointer_725f382667aa59bb951a2e80ec528e9a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_side_table_allocated_memory", method_pointer_8e47d45626945373a9d06e11cc8e8f05, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_static_local_number", method_pointer_790fce7b992f5f7296af0aea81077761, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_address_space", method_pointer_152ca9e22dfe5b7b8dc22fdd9d3fac59, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_target_default_align_for_attribute_aligned", method_pointer_4f25b8fb1f7253329c4d2c557a2a7791, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_translation_unit_decl", method_pointer_e798ae79cd9154f3826b093cfa680919, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_align", method_pointer_490bef00e660549e9788c31bdb36c12e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_type_size", method_pointer_6c7d18c6cf025e3390c566dda656c178, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_typedef_name_for_unnamed_tag_decl", method_pointer_c9176f0d6e9354f8b0f1e6569df75188, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_u_int_128_decl", method_pointer_d83e86f7953f59a0904722a53e28cbd0, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("get_va_list_tag_decl", method_pointer_0a84a2519ffc5fb4993bd461cc5308d8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("getcuda_configure_call_decl", method_pointer_6141e583b5e559829f06183f7b7de782, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_e536a5cae34e54058d1fe69715937f7a.def("has_same_type", method_pointer_04e92eb0b540500c971d1420e0c2ef2d, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_alignment_required", method_pointer_7a38a183b93b5da78a759e5f9d7412ea, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_ms_static_data_member_inline_definition", method_pointer_b83a8459d91d57df9b5a762b7101bf29, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("is_nearly_empty", method_pointer_90e513389c5054f58485bc298f0fcfc6, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("overridden_methods_size", method_pointer_c1675d5996fe594bba32d2155f4acb64, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_bool_decl", method_pointer_88991cbe0d5f5b1ab3c64740e9815b66, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_class_scope_specialization_pattern", method_pointer_0c591c25cd775624b788818aa4359039, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_file_decl", method_pointer_e3d2e0cf7f5354789231b1750edad48e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_instantiated_from_unnamed_field_decl", method_pointer_044593c83e4352f5992abfc83695791a, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_instantiated_from_using_decl", method_pointer_d99942c8407750cea3dfaaa74dd89e85, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_instantiated_from_using_shadow_decl", method_pointer_28ef1d32a0395c90a4bada5cf434b54d, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_mangling_number", method_pointer_788d9a29644e5df6a14a496f2d6aa6bf, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_non_key_function", method_pointer_94f6814f8a39593086d8cdc5cd880cd8, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_constant_string_interface", method_pointer_be222442f01b5342a7c17c9624fe4868, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_implementation", method_pointer_2cbec33f77f752ecb5e4cef92dde0882, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_implementation", method_pointer_6894cec629025c95b36a717a94cc4a11, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_obj_c_method_redeclaration", method_pointer_667fa73ab5fc5810b25acfbfb1b5cf77, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_parameter_index", method_pointer_b142b69eb7ac5f2d8bb709312fc10148, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_primary_merged_decl", method_pointer_08a7b5b3cd885f079b1f8fdb71b12476, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("set_static_local_number", method_pointer_35fe93c0975d500eb3871f49a44235af, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setcuda_configure_call_decl", method_pointer_e34417bdcd5a5088bdc15cc6f40d71ac, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setjmp_buf_decl", method_pointer_a8e985edbc825c799ea68835dfe27cf6, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setsigjmp_buf_decl", method_pointer_dbb0d1885dd55588a5d1ca34c796cb8e, "");
    class_e536a5cae34e54058d1fe69715937f7a.def("setucontext_t_decl", method_pointer_c7858f7dd58c5ec18959e50f3e2f077e, "");
    class_e536a5cae34e54058d1fe69715937f7a.staticmethod("get_next_local_import");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("comments_loaded", &::clang::ASTContext::CommentsLoaded, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_assignment_operators", ::clang::ASTContext::NumImplicitCopyAssignmentOperators, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_assignment_operators_declared", ::clang::ASTContext::NumImplicitCopyAssignmentOperatorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_constructors", ::clang::ASTContext::NumImplicitCopyConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_copy_constructors_declared", ::clang::ASTContext::NumImplicitCopyConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_default_constructors", ::clang::ASTContext::NumImplicitDefaultConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_default_constructors_declared", ::clang::ASTContext::NumImplicitDefaultConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_destructors", ::clang::ASTContext::NumImplicitDestructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_destructors_declared", ::clang::ASTContext::NumImplicitDestructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_assignment_operators", ::clang::ASTContext::NumImplicitMoveAssignmentOperators, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_assignment_operators_declared", ::clang::ASTContext::NumImplicitMoveAssignmentOperatorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_constructors", ::clang::ASTContext::NumImplicitMoveConstructors, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("num_implicit_move_constructors_declared", ::clang::ASTContext::NumImplicitMoveConstructorsDeclared, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("parsed_comments", &::clang::ASTContext::ParsedComments, "");
    class_e536a5cae34e54058d1fe69715937f7a.def_readwrite("redecl_comments", &::clang::ASTContext::RedeclComments, "");

}