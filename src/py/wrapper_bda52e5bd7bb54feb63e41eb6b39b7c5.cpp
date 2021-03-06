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
    template <> class ::clang::BlockPointerType const volatile * get_pointer<class ::clang::BlockPointerType const volatile >(class ::clang::BlockPointerType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_bda52e5bd7bb54feb63e41eb6b39b7c5()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::BlockPointerType::*method_pointer_ac326caf5d225910bb57e1e4dd267deb)() const = &::clang::BlockPointerType::getPointeeType;
    bool  (::clang::BlockPointerType::*method_pointer_e20a3b52bd94599cb72da0fb7563f41c)() const = &::clang::BlockPointerType::isSugared;
    class ::clang::QualType  (::clang::BlockPointerType::*method_pointer_e0ec0b39968a557fa0c9739ee98a702f)() const = &::clang::BlockPointerType::desugar;
    bool  (*method_pointer_547a4e01b42e58979c54e846ca51ca05)(class ::clang::Type const *) = ::clang::BlockPointerType::classof;
    boost::python::class_< class ::clang::BlockPointerType, autowig::Held< class ::clang::BlockPointerType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_bda52e5bd7bb54feb63e41eb6b39b7c5("BlockPointerType", "", boost::python::no_init);
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("get_pointee_type", method_pointer_ac326caf5d225910bb57e1e4dd267deb, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("is_sugared", method_pointer_e20a3b52bd94599cb72da0fb7563f41c, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("desugar", method_pointer_e0ec0b39968a557fa0c9739ee98a702f, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.def("classof", method_pointer_547a4e01b42e58979c54e846ca51ca05, "");
    class_bda52e5bd7bb54feb63e41eb6b39b7c5.staticmethod("classof");

    if(autowig::Held< class ::clang::BlockPointerType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::BlockPointerType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}