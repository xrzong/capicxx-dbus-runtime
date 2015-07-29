/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Branch_Interface_PROXY_HPP_
#define COMMONAPI_TESTS_MANAGED_Branch_Interface_PROXY_HPP_

#include <v1_0/commonapi/tests/managed/BranchInterfaceProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {
namespace tests {
namespace managed {

template <typename ... _AttributeExtensions>
class BranchInterfaceProxy
    : virtual public BranchInterface, 
      virtual public BranchInterfaceProxyBase,
      public _AttributeExtensions... {
public:
    BranchInterfaceProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~BranchInterfaceProxy();

    typedef BranchInterface InterfaceType;




    /**
     * Calls testBranchMethod with synchronous semantics.
     * 
    * All const parameters are input parameters to this method.
    * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void testBranchMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_internalCallStatus, BranchInterface::testBranchMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls testBranchMethod with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> testBranchMethodAsync(const int32_t &_inInt, const std::string &_inString, TestBranchMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info = nullptr);


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
    std::shared_ptr<BranchInterfaceProxyBase> delegate_;
};

typedef BranchInterfaceProxy<> BranchInterfaceProxyDefault;


//
// BranchInterfaceProxy Implementation
//
template <typename ... _AttributeExtensions>
BranchInterfaceProxy<_AttributeExtensions...>::BranchInterfaceProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast<BranchInterfaceProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast<BranchInterfaceProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
BranchInterfaceProxy<_AttributeExtensions...>::~BranchInterfaceProxy() {
}

template <typename ... _AttributeExtensions>
void BranchInterfaceProxy<_AttributeExtensions...>::testBranchMethod(const int32_t &_inInt, const std::string &_inString, CommonAPI::CallStatus &_internalCallStatus, BranchInterface::testBranchMethodError &_error, int32_t &_outInt, std::string &_outString, const CommonAPI::CallInfo *_info) {
    delegate_->testBranchMethod(_inInt, _inString, _internalCallStatus, _error, _outInt, _outString, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> BranchInterfaceProxy<_AttributeExtensions...>::testBranchMethodAsync(const int32_t &_inInt, const std::string &_inString, TestBranchMethodAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->testBranchMethodAsync(_inInt, _inString, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &BranchInterfaceProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool BranchInterfaceProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool BranchInterfaceProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& BranchInterfaceProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& BranchInterfaceProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1_0


#endif // COMMONAPI_TESTS_MANAGED_Branch_Interface_PROXY_HPP_
