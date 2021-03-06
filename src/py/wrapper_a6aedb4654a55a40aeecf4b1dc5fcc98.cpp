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
    template <> class ::clang::Decl const volatile * get_pointer<class ::clang::Decl const volatile >(class ::clang::Decl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a6aedb4654a55a40aeecf4b1dc5fcc98()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_18f48b55cedd52589b34362d72834974)() const = &::clang::Decl::getLocStart;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_1b6b9adb08525934bbb7f9a140d71aa6)() const = &::clang::Decl::getLocEnd;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_595fbec88c4d53fba835b6d41821e772)() const = &::clang::Decl::getLocation;
    void  (::clang::Decl::*method_pointer_31ae51a7a78c51f0b00c9fff7a329788)(class ::clang::SourceLocation ) = &::clang::Decl::setLocation;
    enum ::clang::Decl::Kind  (::clang::Decl::*method_pointer_42dcce4d3f7c5b0fbc6134d1b9ab1a36)() const = &::clang::Decl::getKind;
    class ::clang::Decl * (::clang::Decl::*method_pointer_76e82661064654ec8baa09a4974d6db2)() = &::clang::Decl::getNextDeclInContext;
    class ::clang::Decl const * (::clang::Decl::*method_pointer_4c08fc97c466507b926f17a23bff7686)() const = &::clang::Decl::getNextDeclInContext;
    class ::clang::DeclContext * (::clang::Decl::*method_pointer_32a5a8c406c2588081fc89c8a9c6bc35)() = &::clang::Decl::getDeclContext;
    class ::clang::DeclContext const * (::clang::Decl::*method_pointer_c46c11f7bd4256ebbbf8b8a2f0294f66)() const = &::clang::Decl::getDeclContext;
    class ::clang::Decl * (::clang::Decl::*method_pointer_b8fbd92dffa5563088c61b26ec8e5382)() = &::clang::Decl::getNonClosureContext;
    class ::clang::Decl const * (::clang::Decl::*method_pointer_8768a1fed430577b9eb95c38cf043f54)() const = &::clang::Decl::getNonClosureContext;
    class ::clang::TranslationUnitDecl * (::clang::Decl::*method_pointer_f6ea647710db519392baf29daa579387)() = &::clang::Decl::getTranslationUnitDecl;
    class ::clang::TranslationUnitDecl const * (::clang::Decl::*method_pointer_3bce2cc82c5f569680453690d5501063)() const = &::clang::Decl::getTranslationUnitDecl;
    bool  (::clang::Decl::*method_pointer_a4d5f25bd89051649611b447e229afdc)() const = &::clang::Decl::isInAnonymousNamespace;
    bool  (::clang::Decl::*method_pointer_bfdacc5f619d5bc2ab3a707f7db04a64)() const = &::clang::Decl::isInStdNamespace;
    class ::clang::ASTContext & (::clang::Decl::*method_pointer_32a4cb430a755856b33d5af72e680a0b)() const = &::clang::Decl::getASTContext;
    void  (::clang::Decl::*method_pointer_c972a057184f5f57bdc823e4a67c1bfa)(enum ::clang::AccessSpecifier ) = &::clang::Decl::setAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_498eee9b33f75aa885599b361c171ad0)() const = &::clang::Decl::getAccess;
    enum ::clang::AccessSpecifier  (::clang::Decl::*method_pointer_98f8687293a552cbb77c7e6245b94394)() const = &::clang::Decl::getAccessUnsafe;
    bool  (::clang::Decl::*method_pointer_aa8828479ae5569f868051844adad21c)() const = &::clang::Decl::hasAttrs;
    void  (::clang::Decl::*method_pointer_5b63ab84de7d5d008cb39be45662e7e7)() = &::clang::Decl::dropAttrs;
    unsigned int  (::clang::Decl::*method_pointer_e874d275ca9058b98969dbe661109109)() const = &::clang::Decl::getMaxAlignment;
    void  (::clang::Decl::*method_pointer_5c8f476078eb5b45b94db4c814593f12)(bool ) = &::clang::Decl::setInvalidDecl;
    bool  (::clang::Decl::*method_pointer_b231bae89a1f5d4b9b40566fb7236710)() const = &::clang::Decl::isInvalidDecl;
    bool  (::clang::Decl::*method_pointer_fb599948919559ca9bafb0803da1b763)() const = &::clang::Decl::isImplicit;
    void  (::clang::Decl::*method_pointer_18f44eafa01757158ab3b25c40fcb969)(bool ) = &::clang::Decl::setImplicit;
    bool  (::clang::Decl::*method_pointer_4df2e39dadbd569a90de83ff1eca879b)(bool ) const = &::clang::Decl::isUsed;
    void  (::clang::Decl::*method_pointer_1eb55c2797705b1e903f62a88513cef3)() = &::clang::Decl::setIsUsed;
    void  (::clang::Decl::*method_pointer_4647df50c1df56ca9a3bce9055b75e92)(class ::clang::ASTContext &) = &::clang::Decl::markUsed;
    bool  (::clang::Decl::*method_pointer_351865f12a2950888b45ddb1169f58d7)() const = &::clang::Decl::isReferenced;
    bool  (::clang::Decl::*method_pointer_23d3fabc8c7f52278c694053bbe190f3)() const = &::clang::Decl::isThisDeclarationReferenced;
    void  (::clang::Decl::*method_pointer_0f333f67fa2d59ed919c65fa75d7bd87)(bool ) = &::clang::Decl::setReferenced;
    bool  (::clang::Decl::*method_pointer_d7523d52622c5385a59ed18d838e345f)() const = &::clang::Decl::isTopLevelDeclInObjCContainer;
    void  (::clang::Decl::*method_pointer_f8fc53f0bc815b5a9778af8ea1f7dda3)(bool ) = &::clang::Decl::setTopLevelDeclInObjCContainer;
    bool  (::clang::Decl::*method_pointer_a4715cf5b2a45aa4b355e98d648895a9)() const = &::clang::Decl::isModulePrivate;
    bool  (::clang::Decl::*method_pointer_59d81836d34058d6956c09c61d56fb18)() const = &::clang::Decl::isExported;
    bool  (::clang::Decl::*method_pointer_673bc6d09d685239a965581addbbf169)() const = &::clang::Decl::hasDefiningAttr;
    bool  (::clang::Decl::*method_pointer_a65e9199c1d9525dbd9d9dc7f89bf008)() const = &::clang::Decl::isWeakImported;
    bool  (::clang::Decl::*method_pointer_6f80afe072315ce1b45ef93ea9b2d031)(bool &) const = &::clang::Decl::canBeWeakImported;
    bool  (::clang::Decl::*method_pointer_f52c203a75175c788f3399ced5ffa007)() const = &::clang::Decl::isFromASTFile;
    unsigned int  (::clang::Decl::*method_pointer_1335f04cb21656919d0a849cfca4a636)() const = &::clang::Decl::getGlobalID;
    unsigned int  (::clang::Decl::*method_pointer_4c5a61e2cfdc5e1e915398fc57d48b53)() const = &::clang::Decl::getOwningModuleID;
    unsigned int  (::clang::Decl::*method_pointer_20b2f3a40ae55f17888da33c154a7a10)() const = &::clang::Decl::getIdentifierNamespace;
    bool  (::clang::Decl::*method_pointer_1667230d6b545517b29a01001498cdc2)(unsigned int ) const = &::clang::Decl::isInIdentifierNamespace;
    unsigned int  (*method_pointer_d4c8215ac3275e13923cc14a8d498ab7)(enum ::clang::Decl::Kind ) = ::clang::Decl::getIdentifierNamespaceForKind;
    bool  (::clang::Decl::*method_pointer_11e6618a7cbb5c7ab303d78c35e53f5c)() const = &::clang::Decl::hasTagIdentifierNamespace;
    bool  (*method_pointer_339472d81b6657e7ad938679db4c5e1d)(unsigned int ) = ::clang::Decl::isTagIdentifierNamespace;
    class ::clang::DeclContext * (::clang::Decl::*method_pointer_8fa105a2e75c5a4fb3a18ba5005dac1b)() = &::clang::Decl::getLexicalDeclContext;
    class ::clang::DeclContext const * (::clang::Decl::*method_pointer_965e37ddc32e5d86a092905da379653c)() const = &::clang::Decl::getLexicalDeclContext;
    bool  (::clang::Decl::*method_pointer_bad230075a185b7589556bb3dc8dc522)() const = &::clang::Decl::isOutOfLine;
    void  (::clang::Decl::*method_pointer_46e94d4b7ab252948dfea50e92987848)(class ::clang::DeclContext *) = &::clang::Decl::setDeclContext;
    void  (::clang::Decl::*method_pointer_09a593a48d6c51009344327175d02e36)(class ::clang::DeclContext *) = &::clang::Decl::setLexicalDeclContext;
    bool  (::clang::Decl::*method_pointer_6e1a64bcf61d5d2da63f38212f3a8f05)() const = &::clang::Decl::isDefinedOutsideFunctionOrMethod;
    bool  (::clang::Decl::*method_pointer_381bf0e9c4a25662ad08dd61081c0dc1)() const = &::clang::Decl::isLexicallyWithinFunctionOrMethod;
    class ::clang::DeclContext const * (::clang::Decl::*method_pointer_b5f6a35d07c55331bff96f2138e89823)() const = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::DeclContext * (::clang::Decl::*method_pointer_d1454fc25bb75c268c1e11de4c2c28ee)() = &::clang::Decl::getParentFunctionOrMethod;
    class ::clang::Decl * (::clang::Decl::*method_pointer_16ead57657b15d1c9f883f3ecdc6aaab)() = &::clang::Decl::getCanonicalDecl;
    class ::clang::Decl const * (::clang::Decl::*method_pointer_41d48e2e60b65845a318f203ee299b50)() const = &::clang::Decl::getCanonicalDecl;
    bool  (::clang::Decl::*method_pointer_d497523981755da189aa6297c3c4cd2c)() const = &::clang::Decl::isCanonicalDecl;
    class ::clang::Decl * (::clang::Decl::*method_pointer_ec17112a2a3455f287a1278ba7c22f1c)() = &::clang::Decl::getPreviousDecl;
    class ::clang::Decl const * (::clang::Decl::*method_pointer_fd4e5e35f34f5191a25609c0797a718a)() const = &::clang::Decl::getPreviousDecl;
    bool  (::clang::Decl::*method_pointer_0ffe0d6e58675909b0a6838e1e97433c)() const = &::clang::Decl::isFirstDecl;
    class ::clang::Decl * (::clang::Decl::*method_pointer_c5bdd79f999b5638a2027702f04b0ba8)() = &::clang::Decl::getMostRecentDecl;
    class ::clang::Decl const * (::clang::Decl::*method_pointer_d3136a95b93452279ee66c1fa4fc7ca4)() const = &::clang::Decl::getMostRecentDecl;
    bool  (::clang::Decl::*method_pointer_92bece94e50c57a1965574e3d4a31fa8)() const = &::clang::Decl::hasBody;
    class ::clang::SourceLocation  (::clang::Decl::*method_pointer_1c9a72043e7e5275b89b1b793f826bf5)() const = &::clang::Decl::getBodyRBrace;
    void  (*method_pointer_7734564332035d3f879f6faa372499fa)(enum ::clang::Decl::Kind ) = ::clang::Decl::add;
    void  (*method_pointer_9e0174e34c78506ab5bf0ae2a98d72c5)() = ::clang::Decl::EnableStatistics;
    void  (*method_pointer_6987925d3c4d56828b4f003ba7550fde)() = ::clang::Decl::PrintStats;
    bool  (::clang::Decl::*method_pointer_ac0c312b330859e7821620c6786ddec9)() const = &::clang::Decl::isTemplateParameter;
    bool  (::clang::Decl::*method_pointer_738ba9d006525e2c87ac060adc436e4d)() const = &::clang::Decl::isTemplateParameterPack;
    bool  (::clang::Decl::*method_pointer_8cb9e7bf27345697867be65dcd93bc39)() const = &::clang::Decl::isParameterPack;
    bool  (::clang::Decl::*method_pointer_25e5a8172591544490abc4c9c4cc60ad)() const = &::clang::Decl::isTemplateDecl;
    bool  (::clang::Decl::*method_pointer_dbb385c504525229ad02ade7d5639d89)() const = &::clang::Decl::isFunctionOrFunctionTemplate;
    class ::clang::TemplateDecl * (::clang::Decl::*method_pointer_30db276d72ca5ce8988b2c0e7656ecae)() const = &::clang::Decl::getDescribedTemplate;
    class ::clang::FunctionDecl * (::clang::Decl::*method_pointer_c7d5f907692c500bbc1d8ff3baa19cb2)() = &::clang::Decl::getAsFunction;
    class ::clang::FunctionDecl const * (::clang::Decl::*method_pointer_dd16cb1f2e4451108e4f5a6f28197288)() const = &::clang::Decl::getAsFunction;
    void  (::clang::Decl::*method_pointer_c34f7130b9ca521190da602d802e5451)() = &::clang::Decl::setLocalExternDecl;
    bool  (::clang::Decl::*method_pointer_a62c5d07f7e557dd9601514626c7aef0)() = &::clang::Decl::isLocalExternDecl;
    void  (::clang::Decl::*method_pointer_1150c4a65ca2504b9e445d25d0b9a6e2)(bool ) = &::clang::Decl::setObjectOfFriendDecl;
    void  (::clang::Decl::*method_pointer_f29408d4ae345f3f9a78d6a21de9b927)() = &::clang::Decl::setNonMemberOperator;
    bool  (*method_pointer_704a3f10ced258b0bac034b6a301055d)(enum ::clang::Decl::Kind ) = ::clang::Decl::classofKind;
    class ::clang::DeclContext * (*method_pointer_193cb55e9d765539baac8d0318027b48)(class ::clang::Decl const *) = ::clang::Decl::castToDeclContext;
    class ::clang::Decl * (*method_pointer_a0e08aa6f9a05dc69aaf76da75e17579)(class ::clang::DeclContext const *) = ::clang::Decl::castFromDeclContext;
    void  (::clang::Decl::*method_pointer_4b9883849bb558dfae26d1c60e23a0e0)() const = &::clang::Decl::dump;
    void  (::clang::Decl::*method_pointer_ff1c53521cfa52cab55c2de557d129a8)() const = &::clang::Decl::dumpColor;
    class ::clang::FunctionType const * (::clang::Decl::*method_pointer_874687c60a895c038f1c888a79ede56a)(bool ) const = &::clang::Decl::getFunctionType;
    struct function_group
    {
        static class ::boost::python::str  function_315c299a2b19523688b35830b14c276d(class ::clang::Decl * parameter_0)
        { return ::clanglite::get_comment(parameter_0); }
    };
    boost::python::class_< class ::clang::Decl, autowig::Held< class ::clang::Decl >::Type, boost::noncopyable > class_a6aedb4654a55a40aeecf4b1dc5fcc98("Decl", "", boost::python::no_init);
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_start", method_pointer_18f48b55cedd52589b34362d72834974, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_loc_end", method_pointer_1b6b9adb08525934bbb7f9a140d71aa6, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_location", method_pointer_595fbec88c4d53fba835b6d41821e772, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_location", method_pointer_31ae51a7a78c51f0b00c9fff7a329788, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_kind", method_pointer_42dcce4d3f7c5b0fbc6134d1b9ab1a36, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_76e82661064654ec8baa09a4974d6db2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_next_decl_in_context", method_pointer_4c08fc97c466507b926f17a23bff7686, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_32a5a8c406c2588081fc89c8a9c6bc35, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_decl_context", method_pointer_c46c11f7bd4256ebbbf8b8a2f0294f66, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_b8fbd92dffa5563088c61b26ec8e5382, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_non_closure_context", method_pointer_8768a1fed430577b9eb95c38cf043f54, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_f6ea647710db519392baf29daa579387, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_translation_unit_decl", method_pointer_3bce2cc82c5f569680453690d5501063, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_anonymous_namespace", method_pointer_a4d5f25bd89051649611b447e229afdc, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_std_namespace", method_pointer_bfdacc5f619d5bc2ab3a707f7db04a64, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_ast_context", method_pointer_32a4cb430a755856b33d5af72e680a0b, boost::python::return_internal_reference<>(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_access", method_pointer_c972a057184f5f57bdc823e4a67c1bfa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access", method_pointer_498eee9b33f75aa885599b361c171ad0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_access_unsafe", method_pointer_98f8687293a552cbb77c7e6245b94394, "Retrieve the access specifier for this declaration, even though it may\nnot yet have been properly set.\n\n:Return Type:\n    :py:obj:`clanglite.clang.access_specifier`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_attrs", method_pointer_aa8828479ae5569f868051844adad21c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("drop_attrs", method_pointer_5b63ab84de7d5d008cb39be45662e7e7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_max_alignment", method_pointer_e874d275ca9058b98969dbe661109109, ":Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_invalid_decl", method_pointer_5c8f476078eb5b45b94db4c814593f12, ":Parameter:\n    `Invalid` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_invalid_decl", method_pointer_b231bae89a1f5d4b9b40566fb7236710, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_implicit", method_pointer_fb599948919559ca9bafb0803da1b763, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_implicit", method_pointer_18f44eafa01757158ab3b25c40fcb969, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_used", method_pointer_4df2e39dadbd569a90de83ff1eca879b, "Whether *any* (re-)declaration of the entity was used, meaning that a\ndefinition is required.\n\n:Parameter:\n    `CheckUsedAttr` (:cpp:any:`bool`) - When true, also consider the 'used' attribute (in addition to the 'used'\n                                        bit set by :raw-latex:`\\c s`etUsed()) when determining whether the\n                                        function is used.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_is_used", method_pointer_1eb55c2797705b1e903f62a88513cef3, "Set whether the declaration is used, in the sense of odr-use.\n\nThis should only be used immediately after creating a declaration. It\nintentionally doesn't notify any listeners.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("mark_used", method_pointer_4647df50c1df56ca9a3bce9055b75e92, "Mark the declaration used, in the sense of odr-use.\n\nThis notifies any mutation listeners in addition to setting a bit\nindicating the declaration is used.\n\n:Parameter:\n    `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_referenced", method_pointer_351865f12a2950888b45ddb1169f58d7, "Whether any declaration of this entity was referenced.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_this_declaration_referenced", method_pointer_23d3fabc8c7f52278c694053bbe190f3, "Whether this declaration was referenced. This should not be relied upon\nfor anything other than debugging.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_referenced", method_pointer_0f333f67fa2d59ed919c65fa75d7bd87, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_top_level_decl_in_obj_c_container", method_pointer_d7523d52622c5385a59ed18d838e345f, "Whether this declaration is a top-level declaration (function, global\nvariable, etc.) that is lexically inside an objc container definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_top_level_decl_in_obj_c_container", method_pointer_f8fc53f0bc815b5a9778af8ea1f7dda3, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_module_private", method_pointer_a4715cf5b2a45aa4b355e98d648895a9, "Whether this declaration was marked as being private to the module in\nwhich it was defined.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_exported", method_pointer_59d81836d34058d6956c09c61d56fb18, "Whether this declaration is exported (by virtue of being lexically\nwithin an ExportDecl or by being a NamespaceDecl).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_defining_attr", method_pointer_673bc6d09d685239a965581addbbf169, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_weak_imported", method_pointer_a65e9199c1d9525dbd9d9dc7f89bf008, "Determine whether this is a weak-imported symbol.\n\nWeak-imported symbols are typically marked with the 'weak\\_import'\nattribute, but may also be marked with an 'availability' attribute where\nwe're targing a platform prior to the introduction of this feature.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("can_be_weak_imported", method_pointer_6f80afe072315ce1b45ef93ea9b2d031, "Determines whether this symbol can be weak-imported, e.g., whether it\nwould be well-formed to add the weak\\_import attribute.\n\n:Parameter:\n    `IsDefinition` (:cpp:any:`bool`) - Set to :raw-latex:`\\c t`rue to indicate that this declaration cannot be\n                                       weak-imported because it has a definition.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_from_ast_file", method_pointer_f52c203a75175c788f3399ced5ffa007, "Determine whether this declaration came from an AST file (such as a\nprecompiled header or module) rather than having been parsed.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_global_id", method_pointer_1335f04cb21656919d0a849cfca4a636, "Retrieve the global declaration ID associated with this declaration,\nwhich specifies where in the\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_owning_module_id", method_pointer_4c5a61e2cfdc5e1e915398fc57d48b53, "Retrieve the global ID of the module that owns this particular\ndeclaration.\n\n:Return Type:\n    :cpp:any:`unsigned` int\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace", method_pointer_20b2f3a40ae55f17888da33c154a7a10, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_in_identifier_namespace", method_pointer_1667230d6b545517b29a01001498cdc2, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_identifier_namespace_for_kind", method_pointer_d4c8215ac3275e13923cc14a8d498ab7, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_tag_identifier_namespace", method_pointer_11e6618a7cbb5c7ab303d78c35e53f5c, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_tag_identifier_namespace", method_pointer_339472d81b6657e7ad938679db4c5e1d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_8fa105a2e75c5a4fb3a18ba5005dac1b, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_lexical_decl_context", method_pointer_965e37ddc32e5d86a092905da379653c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_out_of_line", method_pointer_bad230075a185b7589556bb3dc8dc522, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_decl_context", method_pointer_46e94d4b7ab252948dfea50e92987848, ":Parameter:\n    `DC` (:py:class:`clanglite.clang.DeclContext`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_lexical_decl_context", method_pointer_09a593a48d6c51009344327175d02e36, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_defined_outside_function_or_method", method_pointer_6e1a64bcf61d5d2da63f38212f3a8f05, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_lexically_within_function_or_method", method_pointer_381bf0e9c4a25662ad08dd61081c0dc1, "Returns true if this declaration lexically is inside a function. It\nrecognizes non-defining declarations as well as members of local\nclasses:\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_b5f6a35d07c55331bff96f2138e89823, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this decl is defined inside a function/method/block it returns the\ncorresponding DeclContext, otherwise it returns null.\n\n:Return Type:\n    :py:class:`clanglite.clang.DeclContext`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_parent_function_or_method", method_pointer_d1454fc25bb75c268c1e11de4c2c28ee, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_16ead57657b15d1c9f883f3ecdc6aaab, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieves the 'canonical' declaration of the given declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_canonical_decl", method_pointer_41d48e2e60b65845a318f203ee299b50, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_canonical_decl", method_pointer_d497523981755da189aa6297c3c4cd2c, "Whether this particular Decl is a canonical one.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_ec17112a2a3455f287a1278ba7c22f1c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the previous declaration that declares the same entity as this\ndeclaration, or NULL if there is no previous declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_previous_decl", method_pointer_fd4e5e35f34f5191a25609c0797a718a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the most recent declaration that declares the same entity as\nthis declaration, or NULL if there is no previous declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_first_decl", method_pointer_0ffe0d6e58675909b0a6838e1e97433c, "True if this is the first declaration in its redeclaration chain.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_c5bdd79f999b5638a2027702f04b0ba8, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the most recent declaration that declares the same entity as\nthis declaration (which may be this declaration).\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_most_recent_decl", method_pointer_d3136a95b93452279ee66c1fa4fc7ca4, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Retrieve the most recent declaration that declares the same entity as\nthis declaration (which may be this declaration).\n\n:Return Type:\n    :py:class:`clanglite.clang.Decl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("has_body", method_pointer_92bece94e50c57a1965574e3d4a31fa8, "Returns true if this :raw-latex:`\\c D`ecl represents a declaration for a\nbody of code, such as a function or method definition. Note that\n:raw-latex:`\\c h`asBody can also return true if any redeclaration of\nthis\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_body_r_brace", method_pointer_1c9a72043e7e5275b89b1b793f826bf5, ":Return Type:\n    :py:class:`clanglite.clang.SourceLocation`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("add", method_pointer_7734564332035d3f879f6faa372499fa, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("enable_statistics", method_pointer_9e0174e34c78506ab5bf0ae2a98d72c5, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("print_stats", method_pointer_6987925d3c4d56828b4f003ba7550fde, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter", method_pointer_ac0c312b330859e7821620c6786ddec9, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_parameter_pack", method_pointer_738ba9d006525e2c87ac060adc436e4d, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_parameter_pack", method_pointer_8cb9e7bf27345697867be65dcd93bc39, "Whether this declaration is a parameter pack.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_template_decl", method_pointer_25e5a8172591544490abc4c9c4cc60ad, "returns true if this declaration is a template\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_function_or_function_template", method_pointer_dbb385c504525229ad02ade7d5639d89, "Whether this declaration is a function or function template.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_described_template", method_pointer_30db276d72ca5ce8988b2c0e7656ecae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "If this is a declaration that describes some template, this method\nreturns that template declaration.\n\n:Return Type:\n    :py:class:`clanglite.clang.TemplateDecl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_c7d5f907692c500bbc1d8ff3baa19cb2, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Returns the function itself, or the templated function if this is a\nfunction template.\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionDecl`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_as_function", method_pointer_dd16cb1f2e4451108e4f5a6f28197288, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_local_extern_decl", method_pointer_c34f7130b9ca521190da602d802e5451, "Changes the namespace of this declaration to reflect that it's a\nfunction-local extern declaration.\n\nThese declarations appear in the lexical context of the extern\ndeclaration, but in the semantic context of the enclosing namespace\nscope.\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("is_local_extern_decl", method_pointer_a62c5d07f7e557dd9601514626c7aef0, "Determine whether this is a block-scope declaration with linkage. This\nwill either be a local variable declaration declared 'extern', or a\nlocal function declaration.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_object_of_friend_decl", method_pointer_1150c4a65ca2504b9e445d25d0b9a6e2, "Changes the namespace of this declaration to reflect that it's the\nobject of a friend declaration.\n\nThese declarations appear in the lexical context of the friending class,\nbut in the semantic context of the actual entity. This property applies\nonly to a specific decl object; other redeclarations of the same entity\nmay not (and probably don't) share this property.\n\n:Parameter:\n    `PerformFriendInjection` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("set_non_member_operator", method_pointer_f29408d4ae345f3f9a78d6a21de9b927, ":Return Type:\n    :cpp:any:`void`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("classof_kind", method_pointer_704a3f10ced258b0bac034b6a301055d, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_to_decl_context", method_pointer_193cb55e9d765539baac8d0318027b48, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("cast_from_decl_context", method_pointer_a0e08aa6f9a05dc69aaf76da75e17579, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump", method_pointer_4b9883849bb558dfae26d1c60e23a0e0, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("dump_color", method_pointer_ff1c53521cfa52cab55c2de557d129a8, "");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_function_type", method_pointer_874687c60a895c038f1c888a79ede56a, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Looks through the Decl's underlying type to extract a FunctionType when\npossible. Will return null if the type underlying the Decl does not have\na FunctionType.\n\n:Parameter:\n    `BlocksToo` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.FunctionType`\n\n");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("get_identifier_namespace_for_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_to_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("enable_statistics");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("add");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("classof_kind");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("print_stats");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("is_tag_identifier_namespace");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.staticmethod("cast_from_decl_context");
    class_a6aedb4654a55a40aeecf4b1dc5fcc98.def("get_comment", function_group::function_315c299a2b19523688b35830b14c276d, "");

}