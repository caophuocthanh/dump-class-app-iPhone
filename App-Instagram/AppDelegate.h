//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class NSMutableSet, NSString, UIWindow;

@interface AppDelegate : NSObject <UIApplicationDelegate>
{
    BOOL _handledPushNoteInDidFinishLaunching;
    UIWindow *_window;
    NSMutableSet *_seenErrorURLs;
}

@property(retain, nonatomic) NSMutableSet *seenErrorURLs; // @synthesize seenErrorURLs=_seenErrorURLs;
@property(nonatomic) BOOL handledPushNoteInDidFinishLaunching; // @synthesize handledPushNoteInDidFinishLaunching=_handledPushNoteInDidFinishLaunching;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)networkRequestDidFail:(id)arg1;
- (void)logMemoryCrashAndPromptToRestartIfNeeded;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)willHandleException:(id)arg1;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)registerForPush;
- (BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (BOOL)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)userLogout:(id)arg1;
- (void)userLoginCompleted:(id)arg1;
- (void)startMainAppWithMainFeedSource:(id)arg1 animated:(BOOL)arg2;
- (void)setUpInstagramNotifications;
- (void)setUpDefaults;
- (void)applicationLifecycleChange:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)exitIfSafe;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

