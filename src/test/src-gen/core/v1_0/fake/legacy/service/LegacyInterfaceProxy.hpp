/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef FAKE_LEGACY_SERVICE_Legacy_Interface_PROXY_HPP_
#define FAKE_LEGACY_SERVICE_Legacy_Interface_PROXY_HPP_

#include <v1_0/fake/legacy/service/LegacyInterfaceProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace fake {
namespace legacy {
namespace service {

template <typename ... _AttributeExtensions>
class LegacyInterfaceProxy
    : virtual public LegacyInterface, 
      virtual public LegacyInterfaceProxyBase,
      public _AttributeExtensions... {
public:
    LegacyInterfaceProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~LegacyInterfaceProxy();

    typedef LegacyInterface InterfaceType;




    /**
     * Calls TestMethod with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void TestMethod(const int32_t &_input, CommonAPI::CallStatus &_internalCallStatus, int32_t &_val1, int32_t &_val2, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls TestMethod with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> TestMethodAsync(const int32_t &_input, TestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls OtherTestMethod with synchronous semantics.
     * 
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void OtherTestMethod(CommonAPI::CallStatus &_internalCallStatus, std::string &_greeting, int32_t &_identifier, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls OtherTestMethod with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> OtherTestMethodAsync(OtherTestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls finish with synchronous semantics.
     * 
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void finish(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls finish with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> finishAsync(FinishAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr);


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<LegacyInterfaceProxyBase> delegate_;
};

typedef LegacyInterfaceProxy<> LegacyInterfaceProxyDefault;


//
// LegacyInterfaceProxy Implementation
//
template <typename ... _AttributeExtensions>
LegacyInterfaceProxy<_AttributeExtensions...>::LegacyInterfaceProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<LegacyInterfaceProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<LegacyInterfaceProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
LegacyInterfaceProxy<_AttributeExtensions...>::~LegacyInterfaceProxy() {
}

template <typename ... _AttributeExtensions>
void LegacyInterfaceProxy<_AttributeExtensions...>::TestMethod(const int32_t &_input, CommonAPI::CallStatus &_internalCallStatus, int32_t &_val1, int32_t &_val2, const CommonAPI::CallInfo *_info) {
    delegate_->TestMethod(_input, _internalCallStatus, _val1, _val2, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> LegacyInterfaceProxy<_AttributeExtensions...>::TestMethodAsync(const int32_t &_input, TestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->TestMethodAsync(_input, _callback, _info);
}
template <typename ... _AttributeExtensions>
void LegacyInterfaceProxy<_AttributeExtensions...>::OtherTestMethod(CommonAPI::CallStatus &_internalCallStatus, std::string &_greeting, int32_t &_identifier, const CommonAPI::CallInfo *_info) {
    delegate_->OtherTestMethod(_internalCallStatus, _greeting, _identifier, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> LegacyInterfaceProxy<_AttributeExtensions...>::OtherTestMethodAsync(OtherTestMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->OtherTestMethodAsync(_callback, _info);
}
template <typename ... _AttributeExtensions>
void LegacyInterfaceProxy<_AttributeExtensions...>::finish(CommonAPI::CallStatus &_internalCallStatus, const CommonAPI::CallInfo *_info) {
    delegate_->finish(_internalCallStatus, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> LegacyInterfaceProxy<_AttributeExtensions...>::finishAsync(FinishAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->finishAsync(_callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &LegacyInterfaceProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool LegacyInterfaceProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool LegacyInterfaceProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& LegacyInterfaceProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& LegacyInterfaceProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace service
} // namespace legacy
} // namespace fake
} // namespace v1_0


#endif // FAKE_LEGACY_SERVICE_Legacy_Interface_PROXY_HPP_
