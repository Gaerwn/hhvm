#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp cimport bool as cbool
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.set cimport set as cset
from libcpp.string cimport string
from libcpp.vector cimport vector

from folly cimport cFollyFuture, cFollyTry, cFollyUnit
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.common cimport cRpcOptions
from thrift.py3.client cimport cClientWrapper

cimport service.types as _service_types
cimport service.cbindings as _service_cbindings

cimport includes.types as _includes_types
cimport includes.cbindings as _includes_cbindings
cimport module.types as _module_types
cimport module.cbindings as _module_cbindings
cimport transitive.types as _transitive_types
cimport transitive.cbindings as _transitive_cbindings

cdef extern from "thrift/compiler/test/fixtures/includes/gen-cpp2/service_clients.h" namespace "::cpp2":
  cdef cppclass cMyServiceAsyncClient "::cpp2::MyServiceAsyncClient":
      pass

cdef extern from "<utility>" namespace "std":
  cdef unique_ptr[cMyServiceClientWrapper] move(unique_ptr[cMyServiceClientWrapper])

cdef extern from "thrift/lib/cpp/TProcessorEventHandler.h" namespace "::apache::thrift":
  cdef cppclass cTProcessorEventHandler "apache::thrift::TProcessorEventHandler":
    pass

cdef extern from "thrift/compiler/test/fixtures/includes/gen-py3/service/clients_wrapper.h" namespace "::cpp2":
  cdef cppclass cMyServiceClientWrapper "::cpp2::MyServiceClientWrapper":
    void setPersistentHeader(const string& key, const string& value)
    void addEventHandler(const shared_ptr[cTProcessorEventHandler]& handler)

    cFollyFuture[cFollyUnit] query(cRpcOptions, 
      _module_cbindings.cMyStruct arg_s,
      _includes_cbindings.cIncluded arg_i,)
    cFollyFuture[cFollyUnit] has_arg_docs(cRpcOptions, 
      _module_cbindings.cMyStruct arg_s,
      _includes_cbindings.cIncluded arg_i,)

