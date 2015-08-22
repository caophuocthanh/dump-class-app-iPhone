//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAppBridgeScheme.h"

@class NSString, NSURL;

@interface FBWebAppBridgeScheme : FBAppBridgeScheme
{
    NSString *_method;
    NSURL *_URL;
}

+ (id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1;
+ (id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+ (id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1;
+ (id)bridgeSchemeForFBAppForLike;
+ (id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1;
+ (id)bridgeSchemeForFBAppForShareDialogPhotos;
+ (id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1;
+ (id)schemePrefix;
- (id)URLForMethod:(id)arg1 queryParams:(id)arg2;
- (void)dealloc;
- (id)initWithURL:(id)arg1 method:(id)arg2;

@end
