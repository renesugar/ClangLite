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
    template <> class ::clang::ComplexType const volatile * get_pointer<class ::clang::ComplexType const volatile >(class ::clang::ComplexType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_1ab4808ba4c9580baf99795b73ebb3b3()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_975e9cdae4c05a9fbbe5bcaa0631f45b)() const = &::clang::ComplexType::getElementType;
    bool  (::clang::ComplexType::*method_pointer_25682ac6a00a5edb86906f87cb73ba57)() const = &::clang::ComplexType::isSugared;
    class ::clang::QualType  (::clang::ComplexType::*method_pointer_373d6ea687ad5e44b1c157a082437e18)() const = &::clang::ComplexType::desugar;
    bool  (*method_pointer_eaacdd40770a5ebc8a5fd6f84f46df13)(class ::clang::Type const *) = ::clang::ComplexType::classof;
    boost::python::class_< class ::clang::ComplexType, autowig::Held< class ::clang::ComplexType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_1ab4808ba4c9580baf99795b73ebb3b3("ComplexType", "", boost::python::no_init);
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("get_element_type", method_pointer_975e9cdae4c05a9fbbe5bcaa0631f45b, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("is_sugared", method_pointer_25682ac6a00a5edb86906f87cb73ba57, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("desugar", method_pointer_373d6ea687ad5e44b1c157a082437e18, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.def("classof", method_pointer_eaacdd40770a5ebc8a5fd6f84f46df13, "");
    class_1ab4808ba4c9580baf99795b73ebb3b3.staticmethod("classof");

    if(autowig::Held< class ::clang::ComplexType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::ComplexType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}