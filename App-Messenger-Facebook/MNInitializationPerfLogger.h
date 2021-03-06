//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMAppInitializedListening.h"
#import "FBMAppUserSetupListening.h"
#import "FBMessagingStoreDatabaseLifetimeEventListening.h"
#import "FBSessionClassProvidable.h"
#import "MNInboxAppearanceEventListener.h"

@class NSString;

@interface MNInitializationPerfLogger : NSObject <FBSessionClassProvidable, FBMAppInitializedListening, FBMAppUserSetupListening, FBMessagingStoreDatabaseLifetimeEventListening, MNInboxAppearanceEventListener>
{
    BOOL _hasMarkedAppearance;
    int _mqttClientConnectState;
}

- (void)willDiscardDatabaseContents;
- (void)didDiscardDatabaseFile;
- (void)didCreateDatabaseTables;
- (void)didFailToOpenDatabaseWithError:(id)arg1;
- (void)didOpenDatabase;
- (void)inboxDidLoadThreadListDataModel;
- (void)inboxDidDisplayThreadList;
- (void)inboxDidFailToLoadThreadListDataModel;
- (void)inboxViewAppearanceStateDidChangeTo:(unsigned int)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1;
- (void)applicationDidCompleteSettingUpBackgroundServices;
- (void)applicationDidCompleteSettingUpAllServices;
- (void)mqttConnectionStatusChanged:(id)arg1;
- (void)dealloc;
- (void)addEventExtrasForURL:(id)arg1 withSourceApplication:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

