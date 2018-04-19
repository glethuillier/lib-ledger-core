// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#import "RCTCoreLGBitcoinLikeScript.h"


@implementation RCTCoreLGBitcoinLikeScript
//Export module
RCT_EXPORT_MODULE(RCTCoreLGBitcoinLikeScript)

-(instancetype)init
{
    self = [super init];
    //Init Objc implementation
    if(self)
    {
        self.objcImpl = [[LGBitcoinLikeScript alloc] init];
    }
    return self;
}

RCT_REMAP_METHOD(head,headWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl head]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeScript::head", nil);
    }
}

RCT_REMAP_METHOD(toString,toStringWithResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[self.objcImpl toString]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeScript::toString", nil);
    }
}

RCT_REMAP_METHOD(parse,parse:(nonnull NSData *)data withResolver:(RCTPromiseResolveBlock)resolve rejecter:(RCTPromiseRejectBlock)reject) {

    id result = @{@"result" :[LGBitcoinLikeScript parse:data]};
    if(result)
    {
        resolve(result);
    }
    else
    {
        reject(@"impl_call_error", @"Error while calling LGBitcoinLikeScript::parse", nil);
    }
}
@end
