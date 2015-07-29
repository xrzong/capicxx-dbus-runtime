/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Root_Interface_STUB_DEFAULT_HPP_
#define COMMONAPI_TESTS_MANAGED_Root_Interface_STUB_DEFAULT_HPP_


#include <v1_0/commonapi/tests/managed/RootInterfaceStub.hpp>
#include <sstream>

namespace v1_0 {
namespace commonapi {
namespace tests {
namespace managed {

/**
 * Provides a default implementation for RootInterfaceStubRemoteEvent and
 * RootInterfaceStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 *
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class RootInterfaceStubDefault
    : public virtual RootInterfaceStub {
public:
    RootInterfaceStubDefault();

    RootInterfaceStubRemoteEvent* initStubAdapter(const std::shared_ptr<RootInterfaceStubAdapter> &_adapter);

    const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client);


    virtual void testRootMethod(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _inInt, std::string _inString, testRootMethodReply_t _reply);


    bool registerManagedStubLeafInterfaceAutoInstance(std::shared_ptr<LeafInterfaceStub>);
    bool registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub>, const std::string&);
    bool deregisterManagedStubLeafInterface(const std::string&);
    std::set<std::string>& getLeafInterfaceInstances();
    bool registerManagedStubBranchInterfaceAutoInstance(std::shared_ptr<BranchInterfaceStub>);
    bool registerManagedStubBranchInterface(std::shared_ptr<BranchInterfaceStub>, const std::string&);
    bool deregisterManagedStubBranchInterface(const std::string&);
    std::set<std::string>& getBranchInterfaceInstances();

protected:
    class RemoteEventHandler: public virtual RootInterfaceStubRemoteEvent {
    public:
        RemoteEventHandler(RootInterfaceStubDefault *_defaultStub);


    private:
        RootInterfaceStubDefault *defaultStub_;
    };
private:
    RootInterfaceStubDefault::RemoteEventHandler remoteEventHandler_;
    uint32_t autoInstanceCounter_;


    CommonAPI::Version interfaceVersion_;
};

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_TESTS_MANAGED_Root_Interface_STUB_DEFAULT
