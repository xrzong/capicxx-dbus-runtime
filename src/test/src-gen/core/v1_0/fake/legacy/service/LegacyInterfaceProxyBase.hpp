/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef FAKE_LEGACY_SERVICE_Legacy_Interface_PROXY_BASE_HPP_
#define FAKE_LEGACY_SERVICE_Legacy_Interface_PROXY_BASE_HPP_

#include <v1_0/fake/legacy/service/LegacyInterface.hpp>



#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Proxy.hpp>
#include <functional>
#include <future>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace fake {
namespace legacy {
namespace service {

class LegacyInterfaceProxyBase
    : virtual public CommonAPI::Proxy {
public:

    typedef std::function<void(const CommonAPI::CallStatus&, const int32_t&, const int32_t&)> TestMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&, const std::string&, const int32_t&)> OtherTestMethodAsyncCallback;
    typedef std::function<void(const CommonAPI::CallStatus&)> FinishAsyncCallback;



    virtual void TestMethod(const int32_t &_input, CommonAPI::CallStatus &_internalCallStatus, int32_t &_val1, int32_t &_val2, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> TestMethodAsync(const int32_t &_input, TestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void OtherTestMethod(CommonAPI::CallStatus &_internalCallStatus, std::string &_greeting, int32_t &_identifier, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> OtherTestMethodAsync(OtherTestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual void finish(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr) = 0;
    virtual std::future<CommonAPI::CallStatus> finishAsync(FinishAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr) = 0;
};

} // namespace service
} // namespace legacy
} // namespace fake
} // namespace v1_0

#endif // FAKE_LEGACY_SERVICE_Legacy_Interface_PROXY_BASE_HPP_
