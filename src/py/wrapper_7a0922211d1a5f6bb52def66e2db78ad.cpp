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
    template <> class ::clang::CXXMethodDecl const volatile * get_pointer<class ::clang::CXXMethodDecl const volatile >(class ::clang::CXXMethodDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_7a0922211d1a5f6bb52def66e2db78ad()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::CXXMethodDecl * (*method_pointer_f29174194073521d95762cd3b57339b9)(class ::clang::ASTContext &, unsigned int ) = ::clang::CXXMethodDecl::CreateDeserialized;
    bool  (::clang::CXXMethodDecl::*method_pointer_8c049fcc04605980a0b50ac1fb25a821)() const = &::clang::CXXMethodDecl::isStatic;
    bool  (::clang::CXXMethodDecl::*method_pointer_a045a0a823335ea8b4a935395a7060be)() const = &::clang::CXXMethodDecl::isInstance;
    bool  (::clang::CXXMethodDecl::*method_pointer_1385a27352f658c7a5e2e18d8e96e5d7)() const = &::clang::CXXMethodDecl::isConst;
    bool  (::clang::CXXMethodDecl::*method_pointer_6a9f6ec56ad05ecea9c3b0e028c5f658)() const = &::clang::CXXMethodDecl::isVolatile;
    bool  (::clang::CXXMethodDecl::*method_pointer_4bc46c9c59875b8786259df46d0add46)() const = &::clang::CXXMethodDecl::isVirtual;
    bool  (::clang::CXXMethodDecl::*method_pointer_0fc20de577415afe8ce35a2c64830269)() const = &::clang::CXXMethodDecl::isUsualDeallocationFunction;
    bool  (::clang::CXXMethodDecl::*method_pointer_0c1ccd2a40595cb5afe51cb30e633839)() const = &::clang::CXXMethodDecl::isCopyAssignmentOperator;
    bool  (::clang::CXXMethodDecl::*method_pointer_629fa609367c5402b697ef294e315fbf)() const = &::clang::CXXMethodDecl::isMoveAssignmentOperator;
    class ::clang::CXXMethodDecl * (::clang::CXXMethodDecl::*method_pointer_4c211e60bd4c5254b78218437e0da127)() = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl const * (::clang::CXXMethodDecl::*method_pointer_54724435c310540d832fdd4a669e9d56)() const = &::clang::CXXMethodDecl::getCanonicalDecl;
    class ::clang::CXXMethodDecl * (::clang::CXXMethodDecl::*method_pointer_5d9c735d41a65c9786c15fa6e04acf86)() = &::clang::CXXMethodDecl::getMostRecentDecl;
    class ::clang::CXXMethodDecl const * (::clang::CXXMethodDecl::*method_pointer_d411829052ca52959e17665dc89fc2b3)() const = &::clang::CXXMethodDecl::getMostRecentDecl;
    bool  (::clang::CXXMethodDecl::*method_pointer_590056ca822e5723a7f9aa12f5b7e462)() const = &::clang::CXXMethodDecl::isUserProvided;
    void  (::clang::CXXMethodDecl::*method_pointer_64a0586967305a72819d1dd6405793a3)(class ::clang::CXXMethodDecl const *) = &::clang::CXXMethodDecl::addOverriddenMethod;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_5059cc942b005bb5b60b748a9e68185b)() const = &::clang::CXXMethodDecl::size_overridden_methods;
    class ::clang::CXXRecordDecl const * (::clang::CXXMethodDecl::*method_pointer_cf26b12475495f4b9fcef86e7c2a5d8f)() const = &::clang::CXXMethodDecl::getParent;
    class ::clang::CXXRecordDecl * (::clang::CXXMethodDecl::*method_pointer_e47dc646df5d5b06a58ddc85aeab26a0)() = &::clang::CXXMethodDecl::getParent;
    class ::clang::QualType  (::clang::CXXMethodDecl::*method_pointer_9ed22e8a5e625879a34937e1cbf4e04a)(class ::clang::ASTContext &) const = &::clang::CXXMethodDecl::getThisType;
    unsigned int  (::clang::CXXMethodDecl::*method_pointer_e4e61fe9baf25a1692133270c96ac6f5)() const = &::clang::CXXMethodDecl::getTypeQualifiers;
    bool  (::clang::CXXMethodDecl::*method_pointer_188f5369e3ee54289ac7419c6124bc32)() const = &::clang::CXXMethodDecl::hasInlineBody;
    bool  (::clang::CXXMethodDecl::*method_pointer_92165ee583285db29660d61e2eb29afa)() const = &::clang::CXXMethodDecl::isLambdaStaticInvoker;
    class ::clang::CXXMethodDecl * (::clang::CXXMethodDecl::*method_pointer_1364e69e2f1d56e8919d375c2f52bb5f)(class ::clang::CXXRecordDecl const *, bool ) = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    class ::clang::CXXMethodDecl const * (::clang::CXXMethodDecl::*method_pointer_8f2d3f6bd2d1588989fb6f6de3474ac1)(class ::clang::CXXRecordDecl const *, bool ) const = &::clang::CXXMethodDecl::getCorrespondingMethodInClass;
    bool  (*method_pointer_7fd98fe4cb8156208d7d0f4b20569950)(class ::clang::Decl const *) = ::clang::CXXMethodDecl::classof;
    bool  (*method_pointer_d78746d72d2e597097016ee1a4acde11)(enum ::clang::Decl::Kind ) = ::clang::CXXMethodDecl::classofKind;
    boost::python::class_< class ::clang::CXXMethodDecl, autowig::Held< class ::clang::CXXMethodDecl >::Type, boost::python::bases< class ::clang::FunctionDecl >, boost::noncopyable > class_7a0922211d1a5f6bb52def66e2db78ad("CXXMethodDecl", "Represents a static or instance method of a struct/union/class.\n\nIn the terminology of the C++ Standard, these are the (static and\nnon-static) member functions, whether virtual or not.\n\n", boost::python::no_init);
    class_7a0922211d1a5f6bb52def66e2db78ad.def("create_deserialized", method_pointer_f29174194073521d95762cd3b57339b9, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_static", method_pointer_8c049fcc04605980a0b50ac1fb25a821, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_instance", method_pointer_a045a0a823335ea8b4a935395a7060be, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_const", method_pointer_1385a27352f658c7a5e2e18d8e96e5d7, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_volatile", method_pointer_6a9f6ec56ad05ecea9c3b0e028c5f658, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_virtual", method_pointer_4bc46c9c59875b8786259df46d0add46, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_usual_deallocation_function", method_pointer_0fc20de577415afe8ce35a2c64830269, "Determine whether this is a usual deallocation function (C++\n[basic.stc.dynamic.deallocation]p2), which is an overloaded delete or\ndelete[] operator with a particular signature.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_copy_assignment_operator", method_pointer_0c1ccd2a40595cb5afe51cb30e633839, "Determine whether this is a copy-assignment operator, regardless of\nwhether it was declared implicitly or explicitly.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_move_assignment_operator", method_pointer_629fa609367c5402b697ef294e315fbf, "Determine whether this is a move assignment operator.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_4c211e60bd4c5254b78218437e0da127, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_canonical_decl", method_pointer_54724435c310540d832fdd4a669e9d56, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_5d9c735d41a65c9786c15fa6e04acf86, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_most_recent_decl", method_pointer_d411829052ca52959e17665dc89fc2b3, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_user_provided", method_pointer_590056ca822e5723a7f9aa12f5b7e462, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("add_overridden_method", method_pointer_64a0586967305a72819d1dd6405793a3, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("size_overridden_methods", method_pointer_5059cc942b005bb5b60b748a9e68185b, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_cf26b12475495f4b9fcef86e7c2a5d8f, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_parent", method_pointer_e47dc646df5d5b06a58ddc85aeab26a0, boost::python::return_value_policy< boost::python::reference_existing_object >(), ":Return Type:\n    :py:class:`clanglite.clang.CXXRecordDecl`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_this_type", method_pointer_9ed22e8a5e625879a34937e1cbf4e04a, "Returns the type of the :raw-latex:`\\c t`his pointer.\n\nShould only be called for instance (i.e., non-static) methods.\n\n:Parameter:\n    `C` (:py:class:`clanglite.clang.ASTContext`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_type_qualifiers", method_pointer_e4e61fe9baf25a1692133270c96ac6f5, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("has_inline_body", method_pointer_188f5369e3ee54289ac7419c6124bc32, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("is_lambda_static_invoker", method_pointer_92165ee583285db29660d61e2eb29afa, "Determine whether this is a lambda closure type's static member function\nthat is used for the result of the lambda's conversion to function\npointer (for a lambda with no captures).\n\nThe function itself, if used, will have a placeholder body that will be\nsupplied by IR generation to either forward to the function call\noperator or clone the function call operator.\n\n:Return Type:\n    :cpp:any:`bool`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_1364e69e2f1d56e8919d375c2f52bb5f, boost::python::return_value_policy< boost::python::reference_existing_object >(), "Find the method in :raw-latex:`\\p `RD that corresponds to this one.\n\nFind if :raw-latex:`\\p `RD or one of the classes it inherits from\noverride this method. If so, return it. :raw-latex:`\\p `RD is assumed to\nbe a subclass of the class defining this method (or be the class\nitself), unless :raw-latex:`\\p `MayBeBase is set to true.\n\n:Parameters:\n  - `RD` (:py:class:`clanglite.clang.CXXRecordDecl`) - Undocumented\n  - `MayBeBase` (:cpp:any:`bool`) - Undocumented\n\n:Return Type:\n    :py:class:`clanglite.clang.CXXMethodDecl`\n\n");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("get_corresponding_method_in_class", method_pointer_8f2d3f6bd2d1588989fb6f6de3474ac1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof", method_pointer_7fd98fe4cb8156208d7d0f4b20569950, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.def("classof_kind", method_pointer_d78746d72d2e597097016ee1a4acde11, "");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof_kind");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("create_deserialized");
    class_7a0922211d1a5f6bb52def66e2db78ad.staticmethod("classof");

    if(autowig::Held< class ::clang::CXXMethodDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::CXXMethodDecl >::Type, autowig::Held< class ::clang::FunctionDecl >::Type >();
    }

}