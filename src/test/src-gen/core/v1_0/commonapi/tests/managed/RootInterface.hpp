/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.1.2.v201507021046.
* Used org.franca.core 0.9.1.201412191134.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_ROOT_INTERFACE_HPP_
#define COMMONAPI_TESTS_MANAGED_ROOT_INTERFACE_HPP_


#include <set>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif

#include <CommonAPI/InputStream.hpp>
#include <CommonAPI/OutputStream.hpp>
#include <CommonAPI/Types.hpp>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace v1_0 {
namespace commonapi {
namespace tests {
namespace managed {

class RootInterface {
public:
    virtual ~RootInterface() { }

    static inline const char* getInterface();
    static inline CommonAPI::Version getInterfaceVersion();
    
    struct testRootMethodError : CommonAPI::Enumeration<int32_t> {
        enum Literal : int32_t {
            OK = 0,
            NOTOK = 1
        };
        
        testRootMethodError() = default;
        testRootMethodError(const Literal &_value) 
            : CommonAPI::Enumeration<int32_t>(static_cast<int32_t>(_value)) {}
    
        inline bool operator==(const testRootMethodError &_other) const { return (value_ == _other.value_); }
        inline bool operator!=(const testRootMethodError &_other) const { return (value_ != _other.value_); }
        inline bool operator<=(const testRootMethodError &_other) const { return (value_ <= _other.value_); }
        inline bool operator>=(const testRootMethodError &_other) const { return (value_ >= _other.value_); }
        inline bool operator<(const testRootMethodError &_other) const { return (value_ < _other.value_); }
        inline bool operator>(const testRootMethodError &_other) const { return (value_ > _other.value_); }
        
        inline bool operator==(const Literal &_value) const { return (value_ == static_cast<int32_t>(_value)); }
        inline bool operator!=(const Literal &_value) const { return (value_ != static_cast<int32_t>(_value)); }
        inline bool operator<=(const Literal &_value) const { return (value_ <= static_cast<int32_t>(_value)); }
        inline bool operator>=(const Literal &_value) const { return (value_ >= static_cast<int32_t>(_value)); }
        inline bool operator<(const Literal &_value) const { return (value_ < static_cast<int32_t>(_value)); }
        inline bool operator>(const Literal &_value) const { return (value_ > static_cast<int32_t>(_value)); }
    };
};

const char* RootInterface::getInterface() {
    return ("commonapi.tests.managed.RootInterface");
}

CommonAPI::Version RootInterface::getInterfaceVersion() {
    return CommonAPI::Version(1, 0);
}


} // namespace managed
} // namespace tests
} // namespace commonapi
} // namespace v1_0

namespace CommonAPI {
}

#endif // COMMONAPI_TESTS_MANAGED_ROOT_INTERFACE_HPP_
