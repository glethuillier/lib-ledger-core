// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSBlockCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSBlockCallback::onCallback(const std::experimental::optional<Block> & result, const std::experimental::optional<Error> & error)
{
    //Wrap parameters
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<String>((*result).hash).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("hash").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>((*result).uid).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("uid").ToLocalChecked(), arg_0_2);
    auto date_arg_0_3 = chrono::duration_cast<chrono::seconds>((*result).time.time_since_epoch()).count();
    auto arg_0_3 = Nan::New<Date>(date_arg_0_3).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("time").ToLocalChecked(), arg_0_3);
    auto arg_0_4 = Nan::New<String>((*result).currencyName).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("currencyName").ToLocalChecked(), arg_0_4);
    auto arg_0_5 = Nan::New<Number>((*result).height);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("height").ToLocalChecked(), arg_0_5);

    auto arg_1 = Nan::New<Object>();
    auto arg_1_1 = Nan::New<Integer>((int)(*error).code);
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("code").ToLocalChecked(), arg_1_1);
    auto arg_1_2 = Nan::New<String>((*error).message).ToLocalChecked();
    Nan::DefineOwnProperty(arg_1, Nan::New<String>("message").ToLocalChecked(), arg_1_2);

    Handle<Value> args[2] = {arg_0,arg_1};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSBlockCallback::onCallback fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("onCallback").ToLocalChecked()).ToLocalChecked();
    auto handle = this->handle();
    auto result_onCallback = Nan::CallAsFunction(calling_funtion->ToObject(),handle,2,args);
    if(result_onCallback.IsEmpty())
    {
        Nan::ThrowError("NJSBlockCallback::onCallback call failed");
    }
}

NAN_METHOD(NJSBlockCallback::addRef) {

    NJSBlockCallback *obj = Nan::ObjectWrap::Unwrap<NJSBlockCallback>(info.This());
    obj->Ref();
}

NAN_METHOD(NJSBlockCallback::removeRef) {

    NJSBlockCallback *obj = Nan::ObjectWrap::Unwrap<NJSBlockCallback>(info.This());
    obj->Unref();
}

NAN_METHOD(NJSBlockCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBlockCallback function can only be called as constructor (use New)");
    }

    NJSBlockCallback *node_instance = nullptr;
    if(info[0]->IsObject())
    {
        node_instance = new NJSBlockCallback(info[0]->ToObject());
    }
    else
    {
        return Nan::ThrowError("NJSBlockCallback::New requires an implementation from node");
    }

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}

void NJSBlockCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBlockCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBlockCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"addRef", addRef);
    Nan::SetPrototypeMethod(func_template,"removeRef", removeRef);

    //Add template to target
    target->Set(Nan::New<String>("NJSBlockCallback").ToLocalChecked(), func_template->GetFunction());
}
