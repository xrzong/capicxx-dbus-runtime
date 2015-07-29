/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include <v1_0/commonapi/tests/TestFreedesktopInterfaceStubDefault.hpp>
#include <assert.h>

namespace v1_0 {
namespace commonapi {
namespace tests {

TestFreedesktopInterfaceStubDefault::TestFreedesktopInterfaceStubDefault():
        remoteEventHandler_(this),
        interfaceVersion_(TestFreedesktopInterface::getInterfaceVersion()) {
}

const CommonAPI::Version& TestFreedesktopInterfaceStubDefault::getInterfaceVersion(std::shared_ptr<CommonAPI::ClientId> _client) {
    return interfaceVersion_;
}

TestFreedesktopInterfaceStubRemoteEvent* TestFreedesktopInterfaceStubDefault::initStubAdapter(const std::shared_ptr<TestFreedesktopInterfaceStubAdapter> &_adapter) {
    CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_ = _adapter;
    return &remoteEventHandler_;
}

const uint32_t& TestFreedesktopInterfaceStubDefault::getTestPredefinedTypeAttributeAttribute() {
    return testPredefinedTypeAttributeAttributeValue_;
}

const uint32_t& TestFreedesktopInterfaceStubDefault::getTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    return getTestPredefinedTypeAttributeAttribute();
}

void TestFreedesktopInterfaceStubDefault::setTestPredefinedTypeAttributeAttribute(uint32_t _value) {
    const bool valueChanged = trySetTestPredefinedTypeAttributeAttribute(std::move(_value));
    if (valueChanged && CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_ != NULL) {
         CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_->fireTestPredefinedTypeAttributeAttributeChanged(testPredefinedTypeAttributeAttributeValue_);
     }
}

bool TestFreedesktopInterfaceStubDefault::trySetTestPredefinedTypeAttributeAttribute(uint32_t _value) {
    if (!validateTestPredefinedTypeAttributeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (testPredefinedTypeAttributeAttributeValue_ != _value);
    testPredefinedTypeAttributeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool TestFreedesktopInterfaceStubDefault::validateTestPredefinedTypeAttributeAttributeRequestedValue(const uint32_t &_value) {
    return true;
}

void TestFreedesktopInterfaceStubDefault::setTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    setTestPredefinedTypeAttributeAttribute(_value);
}

void TestFreedesktopInterfaceStubDefault::onRemoteTestPredefinedTypeAttributeAttributeChanged() {
    // No operation in default
}

void TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteTestPredefinedTypeAttributeAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteTestPredefinedTypeAttributeAttributeChanged();
}

bool TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestPredefinedTypeAttributeAttribute(uint32_t _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetTestPredefinedTypeAttributeAttribute(std::move(_value));
}

bool TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestPredefinedTypeAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, uint32_t _value) {
    return onRemoteSetTestPredefinedTypeAttributeAttribute(_value);
}

const uint32_t& TestFreedesktopInterfaceStubDefault::getTestReadonlyAttributeAttribute() {
    return testReadonlyAttributeAttributeValue_;
}

const uint32_t& TestFreedesktopInterfaceStubDefault::getTestReadonlyAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    return getTestReadonlyAttributeAttribute();
}

void TestFreedesktopInterfaceStubDefault::setTestReadonlyAttributeAttribute(uint32_t _value) {
    const bool valueChanged = trySetTestReadonlyAttributeAttribute(std::move(_value));
    if (valueChanged && CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_ != NULL) {
         CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_->fireTestReadonlyAttributeAttributeChanged(testReadonlyAttributeAttributeValue_);
     }
}

bool TestFreedesktopInterfaceStubDefault::trySetTestReadonlyAttributeAttribute(uint32_t _value) {
    if (!validateTestReadonlyAttributeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (testReadonlyAttributeAttributeValue_ != _value);
    testReadonlyAttributeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool TestFreedesktopInterfaceStubDefault::validateTestReadonlyAttributeAttributeRequestedValue(const uint32_t &_value) {
    return true;
}


const ::commonapi::tests::DerivedTypeCollection::TestStructExtended& TestFreedesktopInterfaceStubDefault::getTestDerivedStructAttributeAttribute() {
    return testDerivedStructAttributeAttributeValue_;
}

const ::commonapi::tests::DerivedTypeCollection::TestStructExtended& TestFreedesktopInterfaceStubDefault::getTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    return getTestDerivedStructAttributeAttribute();
}

void TestFreedesktopInterfaceStubDefault::setTestDerivedStructAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestStructExtended _value) {
    const bool valueChanged = trySetTestDerivedStructAttributeAttribute(std::move(_value));
    if (valueChanged && CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_ != NULL) {
         CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_->fireTestDerivedStructAttributeAttributeChanged(testDerivedStructAttributeAttributeValue_);
     }
}

bool TestFreedesktopInterfaceStubDefault::trySetTestDerivedStructAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestStructExtended _value) {
    if (!validateTestDerivedStructAttributeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (testDerivedStructAttributeAttributeValue_ != _value);
    testDerivedStructAttributeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool TestFreedesktopInterfaceStubDefault::validateTestDerivedStructAttributeAttributeRequestedValue(const ::commonapi::tests::DerivedTypeCollection::TestStructExtended &_value) {
    return true;
}

void TestFreedesktopInterfaceStubDefault::setTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestStructExtended _value) {
    setTestDerivedStructAttributeAttribute(_value);
}

void TestFreedesktopInterfaceStubDefault::onRemoteTestDerivedStructAttributeAttributeChanged() {
    // No operation in default
}

void TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteTestDerivedStructAttributeAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteTestDerivedStructAttributeAttributeChanged();
}

bool TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedStructAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestStructExtended _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetTestDerivedStructAttributeAttribute(std::move(_value));
}

bool TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedStructAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestStructExtended _value) {
    return onRemoteSetTestDerivedStructAttributeAttribute(_value);
}

const ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64& TestFreedesktopInterfaceStubDefault::getTestDerivedArrayAttributeAttribute() {
    return testDerivedArrayAttributeAttributeValue_;
}

const ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64& TestFreedesktopInterfaceStubDefault::getTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client) {
    return getTestDerivedArrayAttributeAttribute();
}

void TestFreedesktopInterfaceStubDefault::setTestDerivedArrayAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value) {
    const bool valueChanged = trySetTestDerivedArrayAttributeAttribute(std::move(_value));
    if (valueChanged && CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_ != NULL) {
         CommonAPI::Stub<TestFreedesktopInterfaceStubAdapter, TestFreedesktopInterfaceStubRemoteEvent>::stubAdapter_->fireTestDerivedArrayAttributeAttributeChanged(testDerivedArrayAttributeAttributeValue_);
     }
}

bool TestFreedesktopInterfaceStubDefault::trySetTestDerivedArrayAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value) {
    if (!validateTestDerivedArrayAttributeAttributeRequestedValue(_value))
        return false;

    const bool valueChanged = (testDerivedArrayAttributeAttributeValue_ != _value);
    testDerivedArrayAttributeAttributeValue_ = std::move(_value);
    return valueChanged;
}

bool TestFreedesktopInterfaceStubDefault::validateTestDerivedArrayAttributeAttributeRequestedValue(const ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 &_value) {
    return true;
}

void TestFreedesktopInterfaceStubDefault::setTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value) {
    setTestDerivedArrayAttributeAttribute(_value);
}

void TestFreedesktopInterfaceStubDefault::onRemoteTestDerivedArrayAttributeAttributeChanged() {
    // No operation in default
}

void TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteTestDerivedArrayAttributeAttributeChanged() {
	assert(defaultStub_ !=NULL);
    defaultStub_->onRemoteTestDerivedArrayAttributeAttributeChanged();
}

bool TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedArrayAttributeAttribute(::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value) {
	assert(defaultStub_ !=NULL);
    return defaultStub_->trySetTestDerivedArrayAttributeAttribute(std::move(_value));
}

bool TestFreedesktopInterfaceStubDefault::RemoteEventHandler::onRemoteSetTestDerivedArrayAttributeAttribute(const std::shared_ptr<CommonAPI::ClientId> _client, ::commonapi::tests::DerivedTypeCollection::TestArrayUInt64 _value) {
    return onRemoteSetTestDerivedArrayAttributeAttribute(_value);
}





TestFreedesktopInterfaceStubDefault::RemoteEventHandler::RemoteEventHandler(TestFreedesktopInterfaceStubDefault *_defaultStub)
    : 
      defaultStub_(_defaultStub) {
}

} // namespace tests
} // namespace commonapi
} // namespace v1_0
