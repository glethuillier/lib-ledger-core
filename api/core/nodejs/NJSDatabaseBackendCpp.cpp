// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from database.djinni

#include "NJSDatabaseBackendCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSDatabaseBackend::setUsername) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setUsername needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setUsername : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setUsername(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setPassword) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setPassword needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setPassword : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setPassword(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setHost) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setHost needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setHost : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setHost(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setHostAddr) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setHostAddr needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setHostAddr : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setHostAddr(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setPort) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setPort needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setPort : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setPort(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setOptions) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setOptions needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setOptions : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setOptions(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setSslMode) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setSslMode needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setSslMode : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setSslMode(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setKerberosName) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setKerberosName needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setKerberosName : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setKerberosName(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setService) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setService needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setService : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setService(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::setConnectionPoolSize) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setConnectionPoolSize needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<int32_t>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::setConnectionPoolSize : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->setConnectionPoolSize(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::enableQueryLogging) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSDatabaseBackend::enableQueryLogging needs 1 arguments");
    }

    //Check if parameters have correct types
    auto arg_0 = Nan::To<bool>(info[0]).FromJust();

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::enableQueryLogging : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->enableQueryLogging(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSDatabaseBackend::getUsername) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getUsername needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getUsername : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getUsername();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getPassword) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getPassword needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getPassword : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getPassword();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getHost) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getHost needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getHost : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getHost();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getHostAddr) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getHostAddr needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getHostAddr : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getHostAddr();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getPort) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getPort needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getPort : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getPort();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getOptions) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getOptions needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getOptions : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getOptions();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getSslMode) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getSslMode needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getSslMode : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getSslMode();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getKerberosName) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getKerberosName needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getKerberosName : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getKerberosName();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getService) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getService needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getService : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getService();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getConnectionPoolSize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getConnectionPoolSize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getConnectionPoolSize : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->getConnectionPoolSize();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::isLoggingEnabled) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::isLoggingEnabled needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSDatabaseBackend* obj = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSDatabaseBackend::isLoggingEnabled : implementation of DatabaseBackend is not valid");
    }

    auto result = cpp_impl->isLoggingEnabled();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getSqlite3Backend) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getSqlite3Backend needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = DatabaseBackend::getSqlite3Backend();

    //Wrap result in node object
    auto arg_0_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSDatabaseBackend::getPostgreSQLBackend) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::getPostgreSQLBackend needs 0 arguments");
    }

    //Check if parameters have correct types

    auto result = DatabaseBackend::getPostgreSQLBackend();

    //Wrap result in node object
    auto arg_0_wrap = NJSDatabaseBackend::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSDatabaseBackend>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSDatabaseBackend::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSDatabaseBackend function can only be called as constructor (use New)");
    }

    //Check if NJSDatabaseBackend::New called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSDatabaseBackend::New needs same number of arguments as ledger::core::api::DatabaseBackend::getSqlite3Backend method");
    }

    //Unwrap objects to get C++ classes

    //Call factory
    auto cpp_instance = ledger::core::api::DatabaseBackend::getSqlite3Backend();
    NJSDatabaseBackend *node_instance = new NJSDatabaseBackend(cpp_instance);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSDatabaseBackend::DatabaseBackend_prototype;

Handle<Object> NJSDatabaseBackend::wrap(const std::shared_ptr<ledger::core::api::DatabaseBackend> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(DatabaseBackend_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSDatabaseBackend *new_obj = new NJSDatabaseBackend(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSDatabaseBackend::wrap: object template not valid");
    }
    return obj;
}

void NJSDatabaseBackend::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSDatabaseBackend::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSDatabaseBackend").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"setUsername", setUsername);
    Nan::SetPrototypeMethod(func_template,"setPassword", setPassword);
    Nan::SetPrototypeMethod(func_template,"setHost", setHost);
    Nan::SetPrototypeMethod(func_template,"setHostAddr", setHostAddr);
    Nan::SetPrototypeMethod(func_template,"setPort", setPort);
    Nan::SetPrototypeMethod(func_template,"setOptions", setOptions);
    Nan::SetPrototypeMethod(func_template,"setSslMode", setSslMode);
    Nan::SetPrototypeMethod(func_template,"setKerberosName", setKerberosName);
    Nan::SetPrototypeMethod(func_template,"setService", setService);
    Nan::SetPrototypeMethod(func_template,"setConnectionPoolSize", setConnectionPoolSize);
    Nan::SetPrototypeMethod(func_template,"enableQueryLogging", enableQueryLogging);
    Nan::SetPrototypeMethod(func_template,"getUsername", getUsername);
    Nan::SetPrototypeMethod(func_template,"getPassword", getPassword);
    Nan::SetPrototypeMethod(func_template,"getHost", getHost);
    Nan::SetPrototypeMethod(func_template,"getHostAddr", getHostAddr);
    Nan::SetPrototypeMethod(func_template,"getPort", getPort);
    Nan::SetPrototypeMethod(func_template,"getOptions", getOptions);
    Nan::SetPrototypeMethod(func_template,"getSslMode", getSslMode);
    Nan::SetPrototypeMethod(func_template,"getKerberosName", getKerberosName);
    Nan::SetPrototypeMethod(func_template,"getService", getService);
    Nan::SetPrototypeMethod(func_template,"getConnectionPoolSize", getConnectionPoolSize);
    Nan::SetPrototypeMethod(func_template,"isLoggingEnabled", isLoggingEnabled);
    Nan::SetPrototypeMethod(func_template,"getSqlite3Backend", getSqlite3Backend);
    Nan::SetPrototypeMethod(func_template,"getPostgreSQLBackend", getPostgreSQLBackend);
    //Set object prototype
    DatabaseBackend_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSDatabaseBackend").ToLocalChecked(), func_template->GetFunction());
}
