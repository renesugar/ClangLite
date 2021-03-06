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
    template <> class ::clang::ElaboratedType const volatile * get_pointer<class ::clang::ElaboratedType const volatile >(class ::clang::ElaboratedType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_e4cef5772c4f56478cdedd9f0b21301a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_c3ecb4da55d654c6b7bd85b091867b66)() const = &::clang::ElaboratedType::getNamedType;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_208a3bca904a5cb1809a6791ba81eca3)() const = &::clang::ElaboratedType::desugar;
    bool  (::clang::ElaboratedType::*method_pointer_6ca2441e2cf656fca7cb1c8c6e17c7e5)() const = &::clang::ElaboratedType::isSugared;
    bool  (*method_pointer_fc58dcad99fc5bcdbaa1f837e3c11b8e)(class ::clang::Type const *) = ::clang::ElaboratedType::classof;
    boost::python::class_< class ::clang::ElaboratedType, autowig::Held< class ::clang::ElaboratedType >::Type, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_e4cef5772c4f56478cdedd9f0b21301a("ElaboratedType", "Represents a type that was referred to using an elaborated type keyword,\ne.g., struct S, or via a qualified name, e.g., N::M::type, or both.\n\nThis type is used to keep track of a type name as written in the source\ncode, including tag keywords and any nested-name-specifiers. The type\nitself is always 'sugar', used to express what was written in the source\ncode but containing no additional semantic information.\n\n", boost::python::no_init);
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_c3ecb4da55d654c6b7bd85b091867b66, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_208a3bca904a5cb1809a6791ba81eca3, ":Return Type:\n    :py:class:`clanglite.clang.QualType`\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_6ca2441e2cf656fca7cb1c8c6e17c7e5, ":Return Type:\n    :cpp:any:`bool`\n\n");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("classof", method_pointer_fc58dcad99fc5bcdbaa1f837e3c11b8e, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.staticmethod("classof");

    if(autowig::Held< class ::clang::ElaboratedType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ElaboratedType >::Type, autowig::Held< class ::clang::TypeWithKeyword >::Type >();
    }

}