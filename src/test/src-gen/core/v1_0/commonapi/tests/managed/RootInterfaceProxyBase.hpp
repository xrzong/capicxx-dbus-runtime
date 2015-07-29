/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Root_Interface_PROXY_BASE_HPP_
#define COMMONAPI_TESTS_MANAGED_Root_Interface_PROXY_BASE_HPP_

#include <v1_0/commonapi/tests/managed/RootInterface.hpp>


#include <v1_0/commonapi/tests/managed/BranchInterfaceStub.hpp>
#include <v1_0/commonapi/tests/managed/LeafInterfaceStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/ProxyManager.hpp>
#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {
namespace tests {
namespace managed {

class RootInterfaceProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const RootInterface::testRootMethodError&, const int32_t&, const std::string&)> TestRootMethodAsyncCallback;



    virtual void testRootMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_internalCallStatus, RootInterface::testRootMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> testRootMethodAsync(const int32_t &_inInt, const std::string &_inString, TestRootMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual CommonAPI::ProxyManager& getProxyManagerLeafInterface() = 0;
    virtual CommonAPI::ProxyManager& getProxyManagerBranchInterface() = 0;
};

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_TESTS_MANAGED_Root_Interface_PROXY_BASE_HPP_
