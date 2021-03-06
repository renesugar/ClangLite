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


void wrapper_f651c14028675908a3d30652316d9859()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    std::string name_306b968f39b7549b8ac1af6424e98129 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + "._builtin_type");
    boost::python::object module_306b968f39b7549b8ac1af6424e98129(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_306b968f39b7549b8ac1af6424e98129.c_str()))));
    boost::python::scope().attr("_builtin_type") = module_306b968f39b7549b8ac1af6424e98129;
    boost::python::scope scope_306b968f39b7549b8ac1af6424e98129 = module_306b968f39b7549b8ac1af6424e98129;
    boost::python::enum_< enum ::clang::BuiltinType::Kind > enum_f651c14028675908a3d30652316d9859("kind");
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_RO", ::clang::BuiltinType::OCLImage1dRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_ARRAY_RO", ::clang::BuiltinType::OCLImage1dArrayRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_BUFFER_RO", ::clang::BuiltinType::OCLImage1dBufferRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_RO", ::clang::BuiltinType::OCLImage2dRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_RO", ::clang::BuiltinType::OCLImage2dArrayRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_DEPTH_RO", ::clang::BuiltinType::OCLImage2dDepthRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_DEPTH_RO", ::clang::BuiltinType::OCLImage2dArrayDepthRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAARO", ::clang::BuiltinType::OCLImage2dMSAARO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAARO", ::clang::BuiltinType::OCLImage2dArrayMSAARO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAA_DEPTH_RO", ::clang::BuiltinType::OCLImage2dMSAADepthRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RO", ::clang::BuiltinType::OCLImage2dArrayMSAADepthRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_3D_RO", ::clang::BuiltinType::OCLImage3dRO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_WO", ::clang::BuiltinType::OCLImage1dWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_ARRAY_WO", ::clang::BuiltinType::OCLImage1dArrayWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_BUFFER_WO", ::clang::BuiltinType::OCLImage1dBufferWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_WO", ::clang::BuiltinType::OCLImage2dWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_WO", ::clang::BuiltinType::OCLImage2dArrayWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_DEPTH_WO", ::clang::BuiltinType::OCLImage2dDepthWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_DEPTH_WO", ::clang::BuiltinType::OCLImage2dArrayDepthWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAAWO", ::clang::BuiltinType::OCLImage2dMSAAWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAAWO", ::clang::BuiltinType::OCLImage2dArrayMSAAWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAA_DEPTH_WO", ::clang::BuiltinType::OCLImage2dMSAADepthWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_WO", ::clang::BuiltinType::OCLImage2dArrayMSAADepthWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_3D_WO", ::clang::BuiltinType::OCLImage3dWO);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_RW", ::clang::BuiltinType::OCLImage1dRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_ARRAY_RW", ::clang::BuiltinType::OCLImage1dArrayRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_1D_BUFFER_RW", ::clang::BuiltinType::OCLImage1dBufferRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_RW", ::clang::BuiltinType::OCLImage2dRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_RW", ::clang::BuiltinType::OCLImage2dArrayRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_DEPTH_RW", ::clang::BuiltinType::OCLImage2dDepthRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_DEPTH_RW", ::clang::BuiltinType::OCLImage2dArrayDepthRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAARW", ::clang::BuiltinType::OCLImage2dMSAARW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAARW", ::clang::BuiltinType::OCLImage2dArrayMSAARW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_MSAA_DEPTH_RW", ::clang::BuiltinType::OCLImage2dMSAADepthRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_2D_ARRAY_MSAA_DEPTH_RW", ::clang::BuiltinType::OCLImage2dArrayMSAADepthRW);
    enum_f651c14028675908a3d30652316d9859.value("OCL_IMAGE_3D_RW", ::clang::BuiltinType::OCLImage3dRW);
    enum_f651c14028675908a3d30652316d9859.value("VOID", ::clang::BuiltinType::Void);
    enum_f651c14028675908a3d30652316d9859.value("BOOL", ::clang::BuiltinType::Bool);
    enum_f651c14028675908a3d30652316d9859.value("CHAR_U", ::clang::BuiltinType::Char_U);
    enum_f651c14028675908a3d30652316d9859.value("U_CHAR", ::clang::BuiltinType::UChar);
    enum_f651c14028675908a3d30652316d9859.value("W_CHAR_U", ::clang::BuiltinType::WChar_U);
    enum_f651c14028675908a3d30652316d9859.value("CHAR_16", ::clang::BuiltinType::Char16);
    enum_f651c14028675908a3d30652316d9859.value("CHAR_32", ::clang::BuiltinType::Char32);
    enum_f651c14028675908a3d30652316d9859.value("U_SHORT", ::clang::BuiltinType::UShort);
    enum_f651c14028675908a3d30652316d9859.value("U_INT", ::clang::BuiltinType::UInt);
    enum_f651c14028675908a3d30652316d9859.value("U_LONG", ::clang::BuiltinType::ULong);
    enum_f651c14028675908a3d30652316d9859.value("U_LONG_LONG", ::clang::BuiltinType::ULongLong);
    enum_f651c14028675908a3d30652316d9859.value("U_INT_128", ::clang::BuiltinType::UInt128);
    enum_f651c14028675908a3d30652316d9859.value("CHAR_S", ::clang::BuiltinType::Char_S);
    enum_f651c14028675908a3d30652316d9859.value("S_CHAR", ::clang::BuiltinType::SChar);
    enum_f651c14028675908a3d30652316d9859.value("W_CHAR_S", ::clang::BuiltinType::WChar_S);
    enum_f651c14028675908a3d30652316d9859.value("SHORT", ::clang::BuiltinType::Short);
    enum_f651c14028675908a3d30652316d9859.value("INT", ::clang::BuiltinType::Int);
    enum_f651c14028675908a3d30652316d9859.value("LONG", ::clang::BuiltinType::Long);
    enum_f651c14028675908a3d30652316d9859.value("LONG_LONG", ::clang::BuiltinType::LongLong);
    enum_f651c14028675908a3d30652316d9859.value("INT_128", ::clang::BuiltinType::Int128);
    enum_f651c14028675908a3d30652316d9859.value("HALF", ::clang::BuiltinType::Half);
    enum_f651c14028675908a3d30652316d9859.value("FLOAT", ::clang::BuiltinType::Float);
    enum_f651c14028675908a3d30652316d9859.value("DOUBLE", ::clang::BuiltinType::Double);
    enum_f651c14028675908a3d30652316d9859.value("LONG_DOUBLE", ::clang::BuiltinType::LongDouble);
    enum_f651c14028675908a3d30652316d9859.value("FLOAT_128", ::clang::BuiltinType::Float128);
    enum_f651c14028675908a3d30652316d9859.value("NULL_PTR", ::clang::BuiltinType::NullPtr);
    enum_f651c14028675908a3d30652316d9859.value("OBJ_C_ID", ::clang::BuiltinType::ObjCId);
    enum_f651c14028675908a3d30652316d9859.value("OBJ_C_CLASS", ::clang::BuiltinType::ObjCClass);
    enum_f651c14028675908a3d30652316d9859.value("OBJ_C_SEL", ::clang::BuiltinType::ObjCSel);
    enum_f651c14028675908a3d30652316d9859.value("OCL_SAMPLER", ::clang::BuiltinType::OCLSampler);
    enum_f651c14028675908a3d30652316d9859.value("OCL_EVENT", ::clang::BuiltinType::OCLEvent);
    enum_f651c14028675908a3d30652316d9859.value("OCL_CLK_EVENT", ::clang::BuiltinType::OCLClkEvent);
    enum_f651c14028675908a3d30652316d9859.value("OCL_QUEUE", ::clang::BuiltinType::OCLQueue);
    enum_f651c14028675908a3d30652316d9859.value("OCLND_RANGE", ::clang::BuiltinType::OCLNDRange);
    enum_f651c14028675908a3d30652316d9859.value("OCL_RESERVE_ID", ::clang::BuiltinType::OCLReserveID);
    enum_f651c14028675908a3d30652316d9859.value("DEPENDENT", ::clang::BuiltinType::Dependent);
    enum_f651c14028675908a3d30652316d9859.value("OVERLOAD", ::clang::BuiltinType::Overload);
    enum_f651c14028675908a3d30652316d9859.value("BOUND_MEMBER", ::clang::BuiltinType::BoundMember);
    enum_f651c14028675908a3d30652316d9859.value("PSEUDO_OBJECT", ::clang::BuiltinType::PseudoObject);
    enum_f651c14028675908a3d30652316d9859.value("UNKNOWN_ANY", ::clang::BuiltinType::UnknownAny);
    enum_f651c14028675908a3d30652316d9859.value("BUILTIN_FN", ::clang::BuiltinType::BuiltinFn);
    enum_f651c14028675908a3d30652316d9859.value("ARC_UNBRIDGED_CAST", ::clang::BuiltinType::ARCUnbridgedCast);
    enum_f651c14028675908a3d30652316d9859.value("OMP_ARRAY_SECTION", ::clang::BuiltinType::OMPArraySection);
    enum_f651c14028675908a3d30652316d9859.value("LAST_KIND", ::clang::BuiltinType::LastKind);

}