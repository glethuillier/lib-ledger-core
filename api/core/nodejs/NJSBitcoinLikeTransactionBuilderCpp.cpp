// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeTransactionBuilderCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSBitcoinLikeTransactionBuilder::addInput) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addInput needs 3 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();
    auto arg_2 = Nan::To<int32_t>(info[2]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addInput : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->addInput(arg_0,arg_1,arg_2);

    //Wrap result in node object
    auto arg_3_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_3 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_3_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_3);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::addOutput) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addOutput needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();

    Local<Object> njs_arg_1 = info[1]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBitcoinLikeScript *njs_ptr_arg_1 = static_cast<NJSBitcoinLikeScript *>(Nan::GetInternalFieldPointer(njs_arg_1,0));
    if(!njs_ptr_arg_1)
    {
        return Nan::ThrowError("NodeJs Object to NJSBitcoinLikeScript failed");
    }
    auto arg_1 = njs_ptr_arg_1->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addOutput : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->addOutput(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_2 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_2_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::addChangePath) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addChangePath needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::addChangePath : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->addChangePath(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::excludeUtxo) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::excludeUtxo needs 2 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::excludeUtxo : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->excludeUtxo(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_2 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_2_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setNumberOfChangeAddresses : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setNumberOfChangeAddresses(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setMaxAmountOnChange) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMaxAmountOnChange needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMaxAmountOnChange : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setMaxAmountOnChange(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setMinAmountOnChange) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMinAmountOnChange needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setMinAmountOnChange : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setMinAmountOnChange(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::pickInputs) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::pickInputs needs 2 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = (ledger::core::api::BitcoinLikePickingStrategy)Nan::To<int>(info[0]).FromJust();
    auto arg_1 = Nan::To<int32_t>(info[1]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::pickInputs : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->pickInputs(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_2 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_2_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::sendToAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::sendToAddress needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();

    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::sendToAddress : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->sendToAddress(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_2 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_2_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::setFeesPerByte) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setFeesPerByte needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmount *njs_ptr_arg_0 = static_cast<NJSAmount *>(Nan::GetInternalFieldPointer(njs_arg_0,0));
    if(!njs_ptr_arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }
    auto arg_0 = njs_ptr_arg_0->getCppImpl();


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::setFeesPerByte : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setFeesPerByte(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::build) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::build needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callcack
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBitcoinLikeTransactionCallback *njs_ptr_arg_0 = new NJSBitcoinLikeTransactionCallback(arg_0_resolver);
    std::shared_ptr<NJSBitcoinLikeTransactionCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::build : implementation of BitcoinLikeTransactionBuilder is not valid");
    }
    cpp_impl->build(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::clone) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::clone needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::clone : implementation of BitcoinLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->clone();

    //Wrap result in node object
    auto arg_0_wrap = NJSBitcoinLikeTransactionBuilder::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSBitcoinLikeTransactionBuilder::reset) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::reset needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSBitcoinLikeTransactionBuilder* obj = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeTransactionBuilder>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::reset : implementation of BitcoinLikeTransactionBuilder is not valid");
    }
    cpp_impl->reset();
}

NAN_METHOD(NJSBitcoinLikeTransactionBuilder::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeTransactionBuilder function can only be called as constructor (use New)");
    }
    NJSBitcoinLikeTransactionBuilder *node_instance = new NJSBitcoinLikeTransactionBuilder(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeTransactionBuilder::BitcoinLikeTransactionBuilder_prototype;

Handle<Object> NJSBitcoinLikeTransactionBuilder::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeTransactionBuilder> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeTransactionBuilder_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSBitcoinLikeTransactionBuilder *new_obj = new NJSBitcoinLikeTransactionBuilder(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeTransactionBuilder::wrap: object template not valid");
    }
    return obj;
}

void NJSBitcoinLikeTransactionBuilder::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeTransactionBuilder::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeTransactionBuilder").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"addInput", addInput);
    Nan::SetPrototypeMethod(func_template,"addOutput", addOutput);
    Nan::SetPrototypeMethod(func_template,"addChangePath", addChangePath);
    Nan::SetPrototypeMethod(func_template,"excludeUtxo", excludeUtxo);
    Nan::SetPrototypeMethod(func_template,"setNumberOfChangeAddresses", setNumberOfChangeAddresses);
    Nan::SetPrototypeMethod(func_template,"setMaxAmountOnChange", setMaxAmountOnChange);
    Nan::SetPrototypeMethod(func_template,"setMinAmountOnChange", setMinAmountOnChange);
    Nan::SetPrototypeMethod(func_template,"pickInputs", pickInputs);
    Nan::SetPrototypeMethod(func_template,"sendToAddress", sendToAddress);
    Nan::SetPrototypeMethod(func_template,"setFeesPerByte", setFeesPerByte);
    Nan::SetPrototypeMethod(func_template,"build", build);
    Nan::SetPrototypeMethod(func_template,"clone", clone);
    Nan::SetPrototypeMethod(func_template,"reset", reset);
    //Set object prototype
    BitcoinLikeTransactionBuilder_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeTransactionBuilder").ToLocalChecked(), func_template->GetFunction());
}
