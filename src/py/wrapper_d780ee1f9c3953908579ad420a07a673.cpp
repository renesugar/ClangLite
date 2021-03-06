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
    template <> class ::clang::BuiltinTemplateDecl const volatile * get_pointer<class ::clang::BuiltinTemplateDecl const volatile >(class ::clang::BuiltinTemplateDecl const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_d780ee1f9c3953908579ad420a07a673()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_506c844dcb83509993e2b5e7946fc3a6)(class ::clang::Decl const *) = ::clang::BuiltinTemplateDecl::classof;
    bool  (*method_pointer_e05f0673de745da787d6cf12afe97356)(enum ::clang::Decl::Kind ) = ::clang::BuiltinTemplateDecl::classofKind;
    boost::python::class_< class ::clang::BuiltinTemplateDecl, autowig::Held< class ::clang::BuiltinTemplateDecl >::Type, boost::python::bases< class ::clang::TemplateDecl >, boost::noncopyable > class_d780ee1f9c3953908579ad420a07a673("BuiltinTemplateDecl", "Represents the builtin template declaration which is used to implement\n\\_\\_make\\_integer\\_seq and other builtin templates. It serves no real\npurpose beyond existing as a place to hold template parameters.\n\n", boost::python::no_init);
    class_d780ee1f9c3953908579ad420a07a673.def("classof", method_pointer_506c844dcb83509993e2b5e7946fc3a6, "");
    class_d780ee1f9c3953908579ad420a07a673.def("classof_kind", method_pointer_e05f0673de745da787d6cf12afe97356, "");
    class_d780ee1f9c3953908579ad420a07a673.staticmethod("classof_kind");
    class_d780ee1f9c3953908579ad420a07a673.staticmethod("classof");

    if(autowig::Held< class ::clang::BuiltinTemplateDecl >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::BuiltinTemplateDecl >::Type, autowig::Held< class ::clang::TemplateDecl >::Type >();
    }

}