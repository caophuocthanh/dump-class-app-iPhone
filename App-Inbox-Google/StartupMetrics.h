//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AppDelegateListener.h"

@class NSMutableArray, NSString;

@interface StartupMetrics : NSObject <AppDelegateListener>
{
    BOOL _hasBeenBackgrounded;
    BOOL _hasSeenFirstLoad;
    BOOL _hasPendingOpenNotification;
    NSMutableArray *_startSpans;
    double _accountStartTimeMs;
    double _appInitializationStartTimeMs;
    double _applicationStartTimeMs;
    double _authStartTimeMs;
    double _backgroundLaunchTimeMs;
    double _backgroundNotificationTimeMs;
    double _breakpadStartTimeMs;
    double _lastInteractionTimeMs;
    double _lastBackgroundTimeMs;
    double _lastAuthErrorTimeMs;
    double _lastProcessNotificationTimeMs;
    double _lastForegroundTimeMs;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *startSpans; // @synthesize startSpans=_startSpans;
@property(nonatomic) BOOL hasPendingOpenNotification; // @synthesize hasPendingOpenNotification=_hasPendingOpenNotification;
@property(nonatomic) BOOL hasSeenFirstLoad; // @synthesize hasSeenFirstLoad=_hasSeenFirstLoad;
@property(nonatomic) BOOL hasBeenBackgrounded; // @synthesize hasBeenBackgrounded=_hasBeenBackgrounded;
@property(nonatomic) double lastForegroundTimeMs; // @synthesize lastForegroundTimeMs=_lastForegroundTimeMs;
@property(nonatomic) double lastProcessNotificationTimeMs; // @synthesize lastProcessNotificationTimeMs=_lastProcessNotificationTimeMs;
@property(nonatomic) double lastAuthErrorTimeMs; // @synthesize lastAuthErrorTimeMs=_lastAuthErrorTimeMs;
@property(nonatomic) double lastBackgroundTimeMs; // @synthesize lastBackgroundTimeMs=_lastBackgroundTimeMs;
@property(nonatomic) double lastInteractionTimeMs; // @synthesize lastInteractionTimeMs=_lastInteractionTimeMs;
@property(nonatomic) double breakpadStartTimeMs; // @synthesize breakpadStartTimeMs=_breakpadStartTimeMs;
@property(nonatomic) double backgroundNotificationTimeMs; // @synthesize backgroundNotificationTimeMs=_backgroundNotificationTimeMs;
@property(nonatomic) double backgroundLaunchTimeMs; // @synthesize backgroundLaunchTimeMs=_backgroundLaunchTimeMs;
@property(nonatomic) double authStartTimeMs; // @synthesize authStartTimeMs=_authStartTimeMs;
@property(nonatomic) double applicationStartTimeMs; // @synthesize applicationStartTimeMs=_applicationStartTimeMs;
@property(nonatomic) double appInitializationStartTimeMs; // @synthesize appInitializationStartTimeMs=_appInitializationStartTimeMs;
@property(nonatomic) double accountStartTimeMs; // @synthesize accountStartTimeMs=_accountStartTimeMs;
- (void).cxx_destruct;
- (id)createOpenFromNotificationSpanInStartSpan:(id)arg1 orWithMetrics:(id)arg2;
- (id)createFirstResultsSpanInStartSpan:(id)arg1;
- (id)createStartSpanWithMetrics:(id)arg1;
- (BOOL)shouldCancelSpanAtTime:(double)arg1 allowInBackground:(BOOL)arg2;
- (BOOL)shouldCancelSpanAtTime:(double)arg1;
- (void)completeDeferredSpansWithParent:(id)arg1;
- (void)finalizeStartSpan:(id)arg1 withAction:(id)arg2;
- (void)applicationDidStartBreakpadUpload;
- (void)applicationDidProcessOpenNotification;
- (void)applicationDidBlockFromUserInteraction;
- (void)appDelegateDidReceiveAuthFailure:(id)arg1;
- (void)appDelegateDidReceiveBackgroundNotification:(id)arg1;
- (void)appDelegateDidFinishLaunchingInBackground:(id)arg1;
- (void)appDelegateDidLaunchFromBackground:(id)arg1;
- (void)appDelegateDidFinishBreakpadUpload:(id)arg1;
- (void)appDelegateDidFinishInitialization:(id)arg1;
- (void)appDelegateDidStartInitialization:(id)arg1;
- (void)appDelegateWillSwitchAccount:(id)arg1;
- (void)applicationDidStartAt:(id)arg1;
- (void)updateLastBackgroundTime;
- (void)appWillEnterForeground;
- (void)appDidBecomeActive;
- (void)appDidEnterBackgroundState;
- (void)dealloc;
- (id)init;
- (double)currentTimeMs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

