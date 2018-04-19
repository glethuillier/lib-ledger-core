// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#import "RCTCoreLGBitcoinLikeTransactionRequestCallback.h"


@implementation RCTCoreLGBitcoinLikeTransactionRequestCallback
//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeTransactionRequestCallback)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGBitcoinLikeTransactionRequestCallbackImpl alloc] init];
    }
    return self;
}

/**
 * Method triggered when main task complete
 * @params result optional of type T, non null if main task failed
 * @params error optional of type Error, non null if main task succeeded
 */
RCT_REMAP_METHOD(onCallback,onCallback:(nullable LGBitcoinLikeTransactionRequest *)result
                                 error:(nullable LGError *)error) {

    [self.objcImpl onCallback:result error:error];
}
@end
