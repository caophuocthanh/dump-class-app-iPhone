//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBNuxProvider.h"

@class FBUserSession, MNContactSyncInstructionsNagController, MNContactSyncPrimerDialogNagController, MNPushInstructionsController, MNQuickPromotionInterstitialDataSource, MNQuickPromotionThreadListQPPresenter, MNQuickPromotionThreadViewQPPresenter, NSString;

@interface MNNuxProvider : NSObject <FBNuxProvider, FBClassProvidable>
{
    MNPushInstructionsController *_pushInstructionsController;
    MNQuickPromotionThreadListQPPresenter *_threadListBannerQPPresenter;
    MNQuickPromotionThreadViewQPPresenter *_threadViewBannerQPPresenter;
    FBUserSession *_session;
    MNQuickPromotionInterstitialDataSource *_quickPromotionInterstitialDataSource;
    MNContactSyncPrimerDialogNagController *_contactSyncPrimerDialogNagController;
    MNContactSyncInstructionsNagController *_contactSyncInstructionsNagController;
}

- (void).cxx_destruct;
- (id)nuxPresenters;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
