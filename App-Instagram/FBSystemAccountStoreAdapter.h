//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACAccountStore, ACAccountType;

@interface FBSystemAccountStoreAdapter : NSObject
{
    BOOL _forceBlockingRenew;
    ACAccountStore *_accountStore;
    ACAccountType *_accountTypeFB;
}

+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;
@property(readonly, retain, nonatomic) ACAccountType *accountTypeFB; // @synthesize accountTypeFB=_accountTypeFB;
@property(readonly, retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (id)renewSystemAuthorizationAsTask;
- (void)renewSystemAuthorization:(CDUnknownBlockType)arg1;
- (void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(int)arg2 isReauthorize:(BOOL)arg3 appID:(id)arg4 session:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)requestAccessToFacebookAccountStoreAsTask:(id)arg1;
@property(readonly) BOOL canRequestAccessWithoutUI;
@property BOOL forceBlockingRenew;
- (void)dealloc;
- (id)init;

@end

