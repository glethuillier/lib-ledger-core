// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKEMSGCREATEVALIDATOR_HPP_JNI_
#define DJINNI_GENERATED_COSMOSLIKEMSGCREATEVALIDATOR_HPP_JNI_

#include "../../api/CosmosLikeMsgCreateValidator.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class CosmosLikeMsgCreateValidator final {
public:
    using CppType = ::ledger::core::api::CosmosLikeMsgCreateValidator;
    using JniType = jobject;

    using Boxed = CosmosLikeMsgCreateValidator;

    ~CosmosLikeMsgCreateValidator();

    static CppType toCpp(JNIEnv* jniEnv, JniType j);
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c);

private:
    CosmosLikeMsgCreateValidator();
    friend ::djinni::JniClass<CosmosLikeMsgCreateValidator>;

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("co/ledger/core/CosmosLikeMsgCreateValidator") };
    const jmethodID jconstructor { ::djinni::jniGetMethodID(clazz.get(), "<init>", "(Lco/ledger/core/CosmosLikeValidatorDescription;Lco/ledger/core/CosmosLikeValidatorCommission;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lco/ledger/core/CosmosLikeAmount;)V") };
    const jfieldID field_descr { ::djinni::jniGetFieldID(clazz.get(), "descr", "Lco/ledger/core/CosmosLikeValidatorDescription;") };
    const jfieldID field_commission { ::djinni::jniGetFieldID(clazz.get(), "commission", "Lco/ledger/core/CosmosLikeValidatorCommission;") };
    const jfieldID field_minSelfDelegation { ::djinni::jniGetFieldID(clazz.get(), "minSelfDelegation", "Ljava/lang/String;") };
    const jfieldID field_delegatorAddress { ::djinni::jniGetFieldID(clazz.get(), "delegatorAddress", "Ljava/lang/String;") };
    const jfieldID field_validatorAddress { ::djinni::jniGetFieldID(clazz.get(), "validatorAddress", "Ljava/lang/String;") };
    const jfieldID field_pubkey { ::djinni::jniGetFieldID(clazz.get(), "pubkey", "Ljava/lang/String;") };
    const jfieldID field_value { ::djinni::jniGetFieldID(clazz.get(), "value", "Lco/ledger/core/CosmosLikeAmount;") };
};

}  // namespace djinni_generated
#endif //DJINNI_GENERATED_COSMOSLIKEMSGCREATEVALIDATOR_HPP_JNI_
