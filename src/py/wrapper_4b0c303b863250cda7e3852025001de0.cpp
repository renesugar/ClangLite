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
    template <> class ::clang::PipeType const volatile * get_pointer<class ::clang::PipeType const volatile >(class ::clang::PipeType const volatile *c) { return c; }
}
    #endif
#endif



void wrapper_4b0c303b863250cda7e3852025001de0()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_a28dac01f14c563f851694931b746d7d)() const = &::clang::PipeType::getElementType;
    bool  (::clang::PipeType::*method_pointer_c4102d0df09056e2ad4b8622528a95fd)() const = &::clang::PipeType::isSugared;
    class ::clang::QualType  (::clang::PipeType::*method_pointer_7689b76cdf4e5a77b71e2b0c7c988bd8)() const = &::clang::PipeType::desugar;
    bool  (*method_pointer_81a6d05534945367b64c62d70e0e00cb)(class ::clang::Type const *) = ::clang::PipeType::classof;
    bool  (::clang::PipeType::*method_pointer_61145c82bd4f5972bc8ab737f729e741)() const = &::clang::PipeType::isReadOnly;
    boost::python::class_< class ::clang::PipeType, autowig::Held< class ::clang::PipeType >::Type, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_4b0c303b863250cda7e3852025001de0("PipeType", "", boost::python::no_init);
    class_4b0c303b863250cda7e3852025001de0.def("get_element_type", method_pointer_a28dac01f14c563f851694931b746d7d, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_sugared", method_pointer_c4102d0df09056e2ad4b8622528a95fd, "");
    class_4b0c303b863250cda7e3852025001de0.def("desugar", method_pointer_7689b76cdf4e5a77b71e2b0c7c988bd8, "");
    class_4b0c303b863250cda7e3852025001de0.def("classof", method_pointer_81a6d05534945367b64c62d70e0e00cb, "");
    class_4b0c303b863250cda7e3852025001de0.def("is_read_only", method_pointer_61145c82bd4f5972bc8ab737f729e741, "");
    class_4b0c303b863250cda7e3852025001de0.staticmethod("classof");

    if(autowig::Held< class ::clang::PipeType >::is_class)
    {
        boost::python::implicitly_convertible< autowig::Held< class ::clang::PipeType >::Type, autowig::Held< class ::clang::Type >::Type >();
    }

}