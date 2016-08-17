#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = std::shared_ptr< T >; }

namespace autowig
{
}


void wrapper_0418dea67efc501bbbeb15890bd22f08()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TemplateSpecializationType  const * (::clang::InjectedClassNameType::*method_pointer_297743b2d0cf51b2bbd61be86dbef2ae)() const = &::clang::InjectedClassNameType::getInjectedTST;
    bool  (::clang::InjectedClassNameType::*method_pointer_a072ea46c67954f590182e5171436bdd)() const = &::clang::InjectedClassNameType::isSugared;
    class ::clang::CXXRecordDecl  * (::clang::InjectedClassNameType::*method_pointer_28e2baea64fd5aee9c8f998e7deae4cb)() const = &::clang::InjectedClassNameType::getDecl;
    bool  (*method_pointer_ead766f209ba515a885b3b7248c2479e)(class ::clang::Type  const *) = ::clang::InjectedClassNameType::classof;
    boost::python::class_< class ::clang::InjectedClassNameType, autowig::HeldType< class ::clang::InjectedClassNameType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_0418dea67efc501bbbeb15890bd22f08("InjectedClassNameType", "", boost::python::no_init);
    class_0418dea67efc501bbbeb15890bd22f08.def("get_injected_tst", method_pointer_297743b2d0cf51b2bbd61be86dbef2ae, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("is_sugared", method_pointer_a072ea46c67954f590182e5171436bdd, "");
    class_0418dea67efc501bbbeb15890bd22f08.def("get_decl", method_pointer_28e2baea64fd5aee9c8f998e7deae4cb, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_0418dea67efc501bbbeb15890bd22f08.def("classof", method_pointer_ead766f209ba515a885b3b7248c2479e, "");
    class_0418dea67efc501bbbeb15890bd22f08.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::InjectedClassNameType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::InjectedClassNameType >, autowig::HeldType< class ::clang::Type > >();
    }

}