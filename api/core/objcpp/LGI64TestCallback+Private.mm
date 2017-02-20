// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from core.djinni

#import "LGI64TestCallback+Private.h"
#import "LGI64TestCallback.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#import "LGError+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class I64TestCallback::ObjcProxy final
: public ::ledger::core::api::I64TestCallback
, public ::djinni::ObjcProxyCache::Handle<ObjcType>
{
public:
    using Handle::Handle;
    void onCallback(std::experimental::optional<int64_t> c_value, const std::experimental::optional<::ledger::core::api::Error> & c_error) override
    {
        @autoreleasepool {
            [Handle::get() onCallback:(::djinni::Optional<std::experimental::optional, ::djinni::I64>::fromCpp(c_value))
                                error:(::djinni::Optional<std::experimental::optional, ::djinni_generated::Error>::fromCpp(c_error))];
        }
    }
    void onValue(int64_t c_value) override
    {
        @autoreleasepool {
            [Handle::get() onValue:(::djinni::I64::fromCpp(c_value))];
        }
    }
    int64_t getValue() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [Handle::get() getValue];
            return ::djinni::I64::toCpp(objcpp_result_);
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto I64TestCallback::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto I64TestCallback::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).Handle::get();
}

}  // namespace djinni_generated