/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_HPP_
#define COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_HPP_

#include <functional>




#include <v1_0/commonapi/tests/managed/LeafInterface.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <vector>

#include <CommonAPI/Stub.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {
namespace tests {
namespace managed {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service LeafInterface. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class LeafInterfaceStubAdapter
    : virtual public CommonAPI::StubAdapter, 
      public LeafInterface {
 public:



    virtual void deactivateManagedInstances() = 0;
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};

/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for LeafInterface.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LeafInterfaceStubRemoteEvent
{
public:
    virtual ~LeafInterfaceStubRemoteEvent() { }

};

/**
 * Defines the interface that must be implemented by any class that should provide
 * the service LeafInterface to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class LeafInterfaceStub
    : public virtual CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>
{
public:
    typedef std::function<void (LeafInterface::testLeafMethodError _error, int32_t _outInt, std::string _outString)>testLeafMethodReply_t;

    virtual ~LeafInterfaceStub() {}
    virtual const CommonAPI::Version& getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> clientId) = 0;


    /// This is the method that will be called on remote calls on the method testLeafMethod.
    virtual void testLeafMethod(const std::shared_ptr<CommonAPI::ClientId> _client, int32_t _inInt, std::string _inString, testLeafMethodReply_t _reply) = 0;

    using CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::initStubAdapter;
    typedef CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::StubAdapterType StubAdapterType;
    typedef CommonAPI::Stub<LeafInterfaceStubAdapter, LeafInterfaceStubRemoteEvent>::RemoteEventHandlerType RemoteEventHandlerType;
    typedef LeafInterfaceStubRemoteEvent RemoteEventType;
    typedef LeafInterface StubInterface;
};

} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1_0

#endif // COMMONAPI_TESTS_MANAGED_Leaf_Interface_STUB_HPP_
