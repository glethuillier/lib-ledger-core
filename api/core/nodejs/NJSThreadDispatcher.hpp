// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#ifndef DJINNI_GENERATED_NJSTHREADDISPATCHER_HPP
#define DJINNI_GENERATED_NJSTHREADDISPATCHER_HPP


#include "../../../core/src/api/ExecutionContext.hpp"
#include "../../../core/src/api/Lock.hpp"
#include "NJSExecutionContext.hpp"
#include "NJSLock.hpp"
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../../../core/src/api/ThreadDispatcher.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSThreadDispatcher: public Nan::ObjectWrap, public ledger::core::api::ThreadDispatcher {
public:

    static void Initialize(Local<Object> target);
    ~NJSThreadDispatcher()
    {
        persistent().Reset();
        njs_impl.Reset();
        njs_impl.Reset();
    };
    NJSThreadDispatcher(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     *Get an execution context where tasks are executed sequentially
     *@param name, string, name of execution context to retrieve
     *@return ExecutionContext object
     */
    std::shared_ptr<ExecutionContext> getSerialExecutionContext(const std::string & name);

    /**
     *Get an execution context where tasks are executed in parallel thanks to a thread pool
     *where a system of inter-thread communication was designed
     *@param name, string, name of execution context to retrieve
     *@return ExecutionContext object
     */
    std::shared_ptr<ExecutionContext> getThreadPoolExecutionContext(const std::string & name);

    /**
     *Get main execution context (generally where tasks that should never get blocked are executed)
     *@return ExecutionContext object
     */
    std::shared_ptr<ExecutionContext> getMainExecutionContext();

    /**
     *Get lock to handle multithreading
     *@return Lock object
     */
    std::shared_ptr<Lock> newLock();

private:
    /**
     *Get an execution context where tasks are executed sequentially
     *@param name, string, name of execution context to retrieve
     *@return ExecutionContext object
     */
    static NAN_METHOD(getSerialExecutionContext);

    /**
     *Get an execution context where tasks are executed in parallel thanks to a thread pool
     *where a system of inter-thread communication was designed
     *@param name, string, name of execution context to retrieve
     *@return ExecutionContext object
     */
    static NAN_METHOD(getThreadPoolExecutionContext);

    /**
     *Get main execution context (generally where tasks that should never get blocked are executed)
     *@return ExecutionContext object
     */
    static NAN_METHOD(getMainExecutionContext);

    /**
     *Get lock to handle multithreading
     *@return Lock object
     */
    static NAN_METHOD(newLock);

    static NAN_METHOD(New);

    static NAN_METHOD(addRef);
    static NAN_METHOD(removeRef);
    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSTHREADDISPATCHER_HPP
