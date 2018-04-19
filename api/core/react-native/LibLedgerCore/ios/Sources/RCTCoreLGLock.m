// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#import "RCTCoreLGLock.h"


@implementation RCTCoreLGLock
//Export module
RCT_EXPORT_MODULE(RCTCoreLGLock)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGLockImpl alloc] init];
    }
    return self;
}

/**
 *Acquire lock by thread calling this method,
 *If Lock already acquired by another thread, execution of calling thread should be blocked
 *until the other thread call the unlock method
 */
RCT_EXPORT_METHOD(lock) {

    [self.objcImpl lock];
}

/**
 *Try to acquire lock
 *If Lock already aquired by another thread, method returns false for calling thread
 *without blocking its execution
 *@return bool, return true if Lock acquire by calling thread, false otherwise
 */
RCT_REMAP_METHOD(tryLock,tryLockWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :@([self.objcImpl tryLock])};if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGLockImpl::tryLock", nil);
    }
}

/**Release Lock ownership by calling thread */
RCT_EXPORT_METHOD(unlock) {

    [self.objcImpl unlock];
}
@end
