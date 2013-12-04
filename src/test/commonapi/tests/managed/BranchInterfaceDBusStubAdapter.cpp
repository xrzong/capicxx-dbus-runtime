/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 2.1.4.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "BranchInterfaceDBusStubAdapter.h"
#include <commonapi/tests/managed/BranchInterface.h>

namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusStubAdapter> createBranchInterfaceDBusStubAdapter(
                   const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                   const std::string& commonApiAddress,
                   const std::string& interfaceName,
                   const std::string& busName,
                   const std::string& objectPath,
                   const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection,
                   const std::shared_ptr<CommonAPI::StubBase>& stubBase) {
    return std::make_shared<BranchInterfaceDBusStubAdapter>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection, stubBase);
}

__attribute__((constructor)) void registerBranchInterfaceDBusStubAdapter(void) {
    CommonAPI::DBus::DBusFactory::registerAdapterFactoryMethod(BranchInterface::getInterfaceId(),
                                                               &createBranchInterfaceDBusStubAdapter);
}



BranchInterfaceDBusStubAdapterInternal::~BranchInterfaceDBusStubAdapterInternal() {
    deactivateManagedInstances();
    BranchInterfaceDBusStubAdapterHelper::deinit();
}

void BranchInterfaceDBusStubAdapterInternal::deactivateManagedInstances() {
}

const char* BranchInterfaceDBusStubAdapterInternal::getMethodsDBusIntrospectionXmlData() const {
    static const std::string introspectionData =
        "<method name=\"getInterfaceVersion\">\n"
            "<arg name=\"value\" type=\"uu\" direction=\"out\" />"
        "</method>\n"
        "<method name=\"testBranchMethod\">\n"
            "<arg name=\"inInt\" type=\"i\" direction=\"in\" />\n"
            "<arg name=\"inString\" type=\"s\" direction=\"in\" />\n"
            "<arg name=\"methodError\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"outInt\" type=\"i\" direction=\"out\" />\n"
            "<arg name=\"outString\" type=\"s\" direction=\"out\" />\n"
        "</method>\n"

    ;
    return introspectionData.c_str();
}

static CommonAPI::DBus::DBusGetAttributeStubDispatcher<
        BranchInterfaceStub,
        CommonAPI::Version
        > getBranchInterfaceInterfaceVersionStubDispatcher(&BranchInterfaceStub::getInterfaceVersion, "uu");


static CommonAPI::DBus::DBusMethodWithReplyStubDispatcher<
    BranchInterfaceStub,
    std::tuple<int32_t, std::string>,
    std::tuple<BranchInterface::testBranchMethodError, int32_t, std::string>
    > testBranchMethodStubDispatcher(&BranchInterfaceStub::testBranchMethod, "iis");



const BranchInterfaceDBusStubAdapterHelper::StubDispatcherTable& BranchInterfaceDBusStubAdapterInternal::getStubDispatcherTable() {
    return stubDispatcherTable_;
}


BranchInterfaceDBusStubAdapterInternal::BranchInterfaceDBusStubAdapterInternal(
        const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
        const std::string& commonApiAddress,
        const std::string& dbusInterfaceName,
        const std::string& dbusBusName,
        const std::string& dbusObjectPath,
        const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
        const std::shared_ptr<CommonAPI::StubBase>& stub):
        CommonAPI::DBus::DBusStubAdapter(
                factory,
                commonApiAddress,
                dbusInterfaceName,
                dbusBusName,
                dbusObjectPath,
                dbusConnection,
                false),
        BranchInterfaceDBusStubAdapterHelper(
            factory,
            commonApiAddress,
            dbusInterfaceName,
            dbusBusName,
            dbusObjectPath,
            dbusConnection,
            std::dynamic_pointer_cast<BranchInterfaceStub>(stub),
            false),
        stubDispatcherTable_({
            { { "testBranchMethod", "is" }, &commonapi::tests::managed::testBranchMethodStubDispatcher }
            }) {

    stubDispatcherTable_.insert({ { "getInterfaceVersion", "" }, &commonapi::tests::managed::getBranchInterfaceInterfaceVersionStubDispatcher });
}

} // namespace managed
} // namespace tests
} // namespace commonapi
