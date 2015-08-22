//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBActivityMonitor, NSMutableSet, NSNotificationCenter, UIApplication;

@interface FBApplicationActivityMonitorCoordinator : NSObject
{
    NSMutableSet *_applicationObservers;
    FBActivityMonitor *_activityMonitor;
    NSNotificationCenter *_notificationCenter;
    UIApplication *_application;
}

- (void).cxx_destruct;
- (void)_applicationBackgroundRefreshStatusDidChange;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidFinishLaunching:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidReceiveMemoryWarning;
- (void)observeApplication;
- (id)initWithActivityMonitor:(id)arg1 application:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithActivityMonitor:(id)arg1 application:(id)arg2;
- (id)initWithActivityMonitor:(id)arg1;

@end
