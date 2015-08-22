//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMAppProperties.h"

@class NSString;

@interface MNMessengerAppProperties : NSObject <FBMAppProperties>
{
}

- (BOOL)shouldFetchThreadsAndMessagesViaGraphQL;
- (BOOL)shouldFetchUsersOnThreadFetch;
- (BOOL)shouldRefetchOnAppForeground;
- (double)inboxUpdateIntervalInSeconds;
- (double)incomingMessagesFrequencyThresholdInSeconds;
- (BOOL)supportInboxUpdateThrottling;
- (BOOL)shouldOwnSharedDiskStore;
- (BOOL)supportMessageThreadDiskStorage;
- (BOOL)shouldUseMessengerSharedDiskStore;
- (BOOL)supportTypingNotifications;
- (BOOL)oneTouchSendLikeEnabled;
- (BOOL)shouldSendMessageViaMQTT;
- (BOOL)supportSyncProtocol;
- (BOOL)shouldUseFBNuxForLocation;
- (BOOL)supportEarlyStartForLongAsyncBackgroundJobs;
- (BOOL)supportGroupsTab;
- (BOOL)supportAppStartDelaying;
- (BOOL)supportFileProtection;
- (BOOL)supportSendPhotoInNewMessage;
- (BOOL)shouldUpgradeCredentials;
- (BOOL)supportThreadComposerPhotoTray;
- (BOOL)supportBlastPhotoTray;
- (BOOL)locationEnabled;
- (BOOL)showNotificationSettings;
- (BOOL)showDiveBar;
- (BOOL)sendNewMessageEnabled;
- (BOOL)supportReminderSheetInThreadView;
- (BOOL)supportSticker;
- (BOOL)showComposeButtonInDivebar;
- (BOOL)supportQuickExperiments;
- (BOOL)supportPaperclip;
- (BOOL)supportMultipicker;
- (BOOL)supportZeroRating;
- (BOOL)supportAutoPlay;
- (BOOL)supportPushNotificationReminder;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)supportInAppNotificationNavigation;
- (BOOL)supportInAppNotifications;
- (BOOL)supportImageSearchPicker;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
