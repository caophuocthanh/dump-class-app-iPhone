//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BTVenmoAppSwitchRequestURL : NSObject
{
}

+ (id)appSwitchBaseURLComponents;
+ (id)returnURLWithScheme:(id)arg1 result:(id)arg2;
+ (id)appSwitchURLForMerchantID:(id)arg1 returnURLScheme:(id)arg2 offline:(BOOL)arg3 error:(id *)arg4;
+ (BOOL)isAppSwitchAvailable;

@end

