#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_5f3400ee088d515f9794a26f335ab560)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_a448618c05fe5214b807ff85e2c597b5)() const = &::clang::RecordType::isSugared;
    bool  (::clang::RecordType::*method_pointer_e5ba3891368c51f5a59cf110086f3d40)() const = &::clang::RecordType::hasConstFields;
    bool  (*method_pointer_6b741399077b55bfb1850aa7962a54f0)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_5f3400ee088d515f9794a26f335ab560, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_a448618c05fe5214b807ff85e2c597b5, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_e5ba3891368c51f5a59cf110086f3d40, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_6b741399077b55bfb1850aa7962a54f0, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}