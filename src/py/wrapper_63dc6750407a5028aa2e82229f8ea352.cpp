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
    template <> class ::clang::UnaryTransformType const volatile * get_pointer<class ::clang::UnaryTransformType const volatile >(class ::clang::UnaryTransformType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_63dc6750407a5028aa2e82229f8ea352()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (::clang::UnaryTransformType::*method_pointer_60d436277c305535ad99f438a0b42298)() const = &::clang::UnaryTransformType::isSugared;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_5220dd43ef9e5e289b59002c32e0899d)() const = &::clang::UnaryTransformType::desugar;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_3d6493ce4f765b63b55020dae55ae398)() const = &::clang::UnaryTransformType::getUnderlyingType;
    class ::clang::QualType  (::clang::UnaryTransformType::*method_pointer_e7e8d907935b506ba1b104b8b26073d8)() const = &::clang::UnaryTransformType::getBaseType;
    bool  (*method_pointer_dcde29071db95e3aa112a23257a0be84)(class ::clang::Type const *) = ::clang::UnaryTransformType::classof;
    boost::python::class_< class ::clang::UnaryTransformType, autowig::Held< class ::clang::UnaryTransformType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_63dc6750407a5028aa2e82229f8ea352("UnaryTransformType", "", boost::python::no_init);
    class_63dc6750407a5028aa2e82229f8ea352.def("is_sugared", method_pointer_60d436277c305535ad99f438a0b42298, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("desugar", method_pointer_5220dd43ef9e5e289b59002c32e0899d, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_underlying_type", method_pointer_3d6493ce4f765b63b55020dae55ae398, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("get_base_type", method_pointer_e7e8d907935b506ba1b104b8b26073d8, "");
    class_63dc6750407a5028aa2e82229f8ea352.def("classof", method_pointer_dcde29071db95e3aa112a23257a0be84, "");
    class_63dc6750407a5028aa2e82229f8ea352.staticmethod("classof");

    if(autowig::Held< class ::clang::UnaryTransformType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::UnaryTransformType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}