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
    template <> class ::clang::NamedDecl const volatile * get_pointer<class ::clang::NamedDecl const volatile >(class ::clang::NamedDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_a049632b742a55ecb3317bc028db1124()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::llvm::StringRef  (::clang::NamedDecl::*method_pointer_0a5e0dc8c60354c5a9f1dca21da60d9a)() const = &::clang::NamedDecl::getName;
    bool  (::clang::NamedDecl::*method_pointer_03f7e8caf0405893a0eb36f85ae79bea)(class ::clang::NamedDecl *, bool ) const = &::clang::NamedDecl::declarationReplaces;
    bool  (::clang::NamedDecl::*method_pointer_25de7ef3ff1757c5b2d2cdea291fb49f)() const = &::clang::NamedDecl::hasLinkage;
    bool  (::clang::NamedDecl::*method_pointer_c9d0322d995e544285eae8cf07bbc3a9)() const = &::clang::NamedDecl::isHidden;
    void  (::clang::NamedDecl::*method_pointer_9c33cb190fd25e02810e6adf07f31f89)(bool ) = &::clang::NamedDecl::setHidden;
    bool  (::clang::NamedDecl::*method_pointer_2e943b4798b55ece8ad9812028702f8a)() const = &::clang::NamedDecl::isCXXClassMember;
    bool  (::clang::NamedDecl::*method_pointer_4816a0ccaa7155fd8e8ca9c7bab801f1)() const = &::clang::NamedDecl::isCXXInstanceMember;
    bool  (::clang::NamedDecl::*method_pointer_df8120c443a257139bf0c99b889c232e)() const = &::clang::NamedDecl::hasExternalFormalLinkage;
    bool  (::clang::NamedDecl::*method_pointer_dc92d7ff2cc35f84991f37280536c9fa)() const = &::clang::NamedDecl::isExternallyVisible;
    bool  (::clang::NamedDecl::*method_pointer_7ea612c06e575ec1a366f65f59c2b55d)() const = &::clang::NamedDecl::isLinkageValid;
    bool  (::clang::NamedDecl::*method_pointer_11a48941f970588a95d6c4a9ad9c95fc)() const = &::clang::NamedDecl::hasLinkageBeenComputed;
    class ::clang::NamedDecl * (::clang::NamedDecl::*method_pointer_41f6783aa6a05e21861014c2671ddf6c)() = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl const * (::clang::NamedDecl::*method_pointer_8753074a256e59749316dfcba468dccc)() const = &::clang::NamedDecl::getUnderlyingDecl;
    class ::clang::NamedDecl * (::clang::NamedDecl::*method_pointer_91c4676b02a954e595c8c5a2fdd7f9f9)() = &::clang::NamedDecl::getMostRecentDecl;
    class ::clang::NamedDecl const * (::clang::NamedDecl::*method_pointer_3c37a8d2b4ea5aae981f2c456941780d)() const = &::clang::NamedDecl::getMostRecentDecl;
    bool  (*method_pointer_186ec2d4203d5f02858ec81467cbacb8)(class ::clang::Decl const *) = ::clang::NamedDecl::classof;
    bool  (*method_pointer_576dd11f81ac56d68d015e18c0eb171e)(enum ::clang::Decl::Kind ) = ::clang::NamedDecl::classofKind;
    struct function_group
    {
        static class ::boost::python::str  function_c389d761f2875a329d4c0d2833d0d1fb(class ::clang::NamedDecl * parameter_0)
        { return ::clanglite::get_name(parameter_0); }
    };
    boost::python::class_< class ::clang::NamedDecl, autowig::Held< class ::clang::NamedDecl >::Type, boost::python::bases< class ::clang::Decl >, boost::noncopyable > class_a049632b742a55ecb3317bc028db1124("NamedDecl", "", boost::python::no_init);
    class_a049632b742a55ecb3317bc028db1124.def("get_name", method_pointer_0a5e0dc8c60354c5a9f1dca21da60d9a, ":Return Type:\n    :py:class:`clanglite.llvm.StringRef`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("declaration_replaces", method_pointer_03f7e8caf0405893a0eb36f85ae79bea, "Determine whether this declaration, if known to be well-formed within\nits context, will replace the declaration OldD if introduced into scope.\nA declaration will replace another declaration if, for example, it is a\nredeclaration of the same variable or function, but not if it is a\ndeclaration of a different kind (function vs. class) or an overloaded\nfunction.\n\n:Parameters:\n  - `OldD` (:py:class:`clanglite.clang.NamedDecl`) - Undocumented\n  - `IsKnownNewer` (:cpp:any:`bool`) - :raw-latex:`\\c t`rue if this declaration is known to be newer than\n                                       :raw-latex:`\\p `OldD (for instance, if this declaration is\n                                       newly-created).\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage", method_pointer_25de7ef3ff1757c5b2d2cdea291fb49f, "Determine whether this declaration has linkage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("is_hidden", method_pointer_c9d0322d995e544285eae8cf07bbc3a9, "Determine whether this declaration is hidden from name lookup.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("set_hidden", method_pointer_9c33cb190fd25e02810e6adf07f31f89, "Set whether this declaration is hidden from name lookup.\n\n:Parameter:\n    `Hide` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :cpp:any:`void`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_class_member", method_pointer_2e943b4798b55ece8ad9812028702f8a, "Determine whether this declaration is a C++ class member.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("is_cxx_instance_member", method_pointer_4816a0ccaa7155fd8e8ca9c7bab801f1, "Determine whether the given declaration is an instance member of a C++\nclass.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("has_external_formal_linkage", method_pointer_df8120c443a257139bf0c99b889c232e, "True if this decl has external linkage.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("is_externally_visible", method_pointer_dc92d7ff2cc35f84991f37280536c9fa, "");
    class_a049632b742a55ecb3317bc028db1124.def("is_linkage_valid", method_pointer_7ea612c06e575ec1a366f65f59c2b55d, "True if the computed linkage is valid. Used for consistency checking.\nShould always return true.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("has_linkage_been_computed", method_pointer_11a48941f970588a95d6c4a9ad9c95fc, "True if something has required us to compute the linkage of this\ndeclaration.\n\nLanguage features which can retroactively change linkage (like a typedef\nname for linkage purposes) may need to consider this, but hopefully only\nin transitory ways during parsing.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_41f6783aa6a05e21861014c2671ddf6c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Looks through UsingDecls and ObjCCompatibleAliasDecls for the underlying\nnamed decl.\n\n:Return Type:\n    :py:class:`clanglite.clang.NamedDecl`\n\n");
    class_a049632b742a55ecb3317bc028db1124.def("get_underlying_decl", method_pointer_8753074a256e59749316dfcba468dccc, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_91c4676b02a954e595c8c5a2fdd7f9f9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("get_most_recent_decl", method_pointer_3c37a8d2b4ea5aae981f2c456941780d, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_a049632b742a55ecb3317bc028db1124.def("classof", method_pointer_186ec2d4203d5f02858ec81467cbacb8, "");
    class_a049632b742a55ecb3317bc028db1124.def("classof_kind", method_pointer_576dd11f81ac56d68d015e18c0eb171e, "");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof_kind");
    class_a049632b742a55ecb3317bc028db1124.staticmethod("classof");
    class_a049632b742a55ecb3317bc028db1124.def("get_name", function_group::function_c389d761f2875a329d4c0d2833d0d1fb, "");

    if(autowig::Held< class ::clang::NamedDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::NamedDecl >::Type, autowig::Held< class ::clang::Decl >::Type >();
    }

}