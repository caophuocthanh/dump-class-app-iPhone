//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBStoreProductViewControllerDelegate.h"
#import "MNAttributionAppSupplementaryInfoLoaderListener.h"

@class FBStoreProductWithInformationViewController, FBUserSession, MNAttributionAppSupplementaryInfoLoader, MNPlatformAppActionHandlerListenerAnnouncer, MNPlatformAppFirstOpenedTimeCache, MNPlatformAppInstallationChecker, MNPlatformReplyHandler, NSString;

@interface MNPlatformAppActionHandler : NSObject <FBStoreProductViewControllerDelegate, MNAttributionAppSupplementaryInfoLoaderListener, FBClassProvidable>
{
    id <MNModalPresentation> _modalPresenter;
    MNPlatformReplyHandler *_platformReplyHandler;
    MNPlatformAppInstallationChecker *_platformAppInstallationChecker;
    FBStoreProductWithInformationViewController *_storeProductViewController;
    MNAttributionAppSupplementaryInfoLoader *_attributionInfoLoader;
    MNPlatformAppFirstOpenedTimeCache *_platformAppFirstOpenedTimeCache;
    MNPlatformAppActionHandlerListenerAnnouncer *_announcer;
    FBUserSession *_session;
    id <MNPlatformAppActionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPlatformAppActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_saveFirstAppOpenTimeForAppID:(id)arg1;
- (void)didLoadAttributionAppSupplementaryInfoWithThreadKey:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)performAction:(id)arg1 threadKey:(id)arg2;
- (id)initWithModalPresenter:(id)arg1 platformReplyHandler:(id)arg2 platformAppInstallationChecker:(id)arg3 attributionAppSupplementaryInfoLoader:(id)arg4 atttributionAppSupplementaryInforLoaderListenerAnnouncer:(id)arg5 platformAppFirstOpenedTimeCache:(id)arg6 session:(id)arg7;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

