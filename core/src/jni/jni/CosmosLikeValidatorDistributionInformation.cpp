// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from validators.djinni

#include "CosmosLikeValidatorDistributionInformation.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

CosmosLikeValidatorDistributionInformation::CosmosLikeValidatorDistributionInformation() = default;

CosmosLikeValidatorDistributionInformation::~CosmosLikeValidatorDistributionInformation() = default;

auto CosmosLikeValidatorDistributionInformation::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<CosmosLikeValidatorDistributionInformation>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.selfBondRewards)),
                                                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c.validatorCommission)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto CosmosLikeValidatorDistributionInformation::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<CosmosLikeValidatorDistributionInformation>::get();
    return {::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_selfBondRewards)),
            ::djinni::String::toCpp(jniEnv, (jstring)jniEnv->GetObjectField(j, data.field_validatorCommission))};
}

}  // namespace djinni_generated
