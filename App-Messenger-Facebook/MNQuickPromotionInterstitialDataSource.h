//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBQuickPromotionInterstitialDataSource.h"
#import "FBSessionClassProvidable.h"

@class FBUserSession, MNUserStore, NSString;

@interface MNQuickPromotionInterstitialDataSource : NSObject <FBQuickPromotionInterstitialDataSource, FBSessionClassProvidable>
{
    FBUserSession *_session;
    MNUserStore *_userStore;
}

@property(retain, nonatomic) MNUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)nuxIDForQuickPromotionInterstitialViewController:(id)arg1;
- (void)quickPromotionInterstitialViewController:(id)arg1 profilePictureURLsForUserIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

