#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

void wrapper_b96de3155b7b5e0da5ca4b7273f8bf14()
{

    std::string name_21ee8db290f35815a57c7bf74dca851d = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".boost");
    boost::python::object module_21ee8db290f35815a57c7bf74dca851d(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_21ee8db290f35815a57c7bf74dca851d.c_str()))));
    boost::python::scope().attr("boost") = module_21ee8db290f35815a57c7bf74dca851d;
    boost::python::scope scope_21ee8db290f35815a57c7bf74dca851d = module_21ee8db290f35815a57c7bf74dca851d;
    std::string name_fc29b231afcc5a6587b428f2bab37266 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".python");
    boost::python::object module_fc29b231afcc5a6587b428f2bab37266(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_fc29b231afcc5a6587b428f2bab37266.c_str()))));
    boost::python::scope().attr("python") = module_fc29b231afcc5a6587b428f2bab37266;
    boost::python::scope scope_fc29b231afcc5a6587b428f2bab37266 = module_fc29b231afcc5a6587b428f2bab37266;
    std::string name_b385b245309e5200b45940efd4006f86 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".detail");
    boost::python::object module_b385b245309e5200b45940efd4006f86(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_b385b245309e5200b45940efd4006f86.c_str()))));
    boost::python::scope().attr("detail") = module_b385b245309e5200b45940efd4006f86;
    boost::python::scope scope_b385b245309e5200b45940efd4006f86 = module_b385b245309e5200b45940efd4006f86;
}