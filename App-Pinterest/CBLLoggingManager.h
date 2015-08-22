//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Context, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface CBLLoggingManager : NSObject
{
    int _deviceType;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    Context *_currentContext;
    NSString *_currentObjectId;
    NSString *_appVersion;
    NSString *_activeUserId;
    NSMutableArray *_events;
    NSMutableArray *_pinImpressions;
    NSMutableDictionary *_eventTypes;
    NSMutableDictionary *_viewTypes;
    NSMutableDictionary *_viewParameters;
    NSMutableDictionary *_componentTypes;
    NSMutableDictionary *_elementTypes;
    double _appColdStartTimestamp;
    double _appWarmStartTimestamp;
}

+ (int)currentAppState;
+ (long long)currentTimestamp;
+ (BOOL)isLoggingEnabled;
+ (id)sharedManager;
+ (id)inviteSourceTypeForPath:(id)arg1;
@property(nonatomic) double appWarmStartTimestamp; // @synthesize appWarmStartTimestamp=_appWarmStartTimestamp;
@property(nonatomic) double appColdStartTimestamp; // @synthesize appColdStartTimestamp=_appColdStartTimestamp;
@property(retain, nonatomic) NSMutableDictionary *elementTypes; // @synthesize elementTypes=_elementTypes;
@property(retain, nonatomic) NSMutableDictionary *componentTypes; // @synthesize componentTypes=_componentTypes;
@property(retain, nonatomic) NSMutableDictionary *viewParameters; // @synthesize viewParameters=_viewParameters;
@property(retain, nonatomic) NSMutableDictionary *viewTypes; // @synthesize viewTypes=_viewTypes;
@property(retain, nonatomic) NSMutableDictionary *eventTypes; // @synthesize eventTypes=_eventTypes;
@property(retain, nonatomic) NSMutableArray *pinImpressions; // @synthesize pinImpressions=_pinImpressions;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(copy, nonatomic) NSString *activeUserId; // @synthesize activeUserId=_activeUserId;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *currentObjectId; // @synthesize currentObjectId=_currentObjectId;
@property(retain, nonatomic) Context *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue; // @synthesize backgroundQueue=_backgroundQueue;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
- (void).cxx_destruct;
- (void)registerDefaultPreferences;
- (void)logFunnelAction:(id)arg1;
- (void)logPushNotification:(id)arg1 withEventType:(id)arg2;
- (void)beginRemoteLogging;
- (void)loadEventTypeStrings;
- (void)loadElementTypeStrings;
- (void)loadComponentTypeStrings;
- (void)loadViewParameterTypeStrings;
- (void)loadViewTypeStrings;
- (void)loadEnumStrings;
- (void)logUserDetails:(id)arg1;
- (void)startLogging;
- (void)flushQueuedNotifications;
- (void)sendLoggingRequest;
- (void)logDigestStoryImpression:(id)arg1 atIndexPath:(id)arg2 context:(id)arg3;
- (void)logPinImpression:(id)arg1 atIndexPath:(id)arg2 context:(id)arg3;
- (void)logPinImpressionsWithContext:(id)arg1 andPreviousObjectIdentifier:(id)arg2;
- (void)logGuideStep:(int)arg1 didComplete:(BOOL)arg2;
- (void)logGuideStep:(int)arg1;
- (void)logGuideAction:(id)arg1 educationTrigger:(int)arg2 experienceId:(int)arg3;
- (void)logGuideStart:(int)arg1 experienceId:(int)arg2;
- (void)logGuideTrigger:(int)arg1 experienceId:(int)arg2;
- (void)logRenderComponent:(int)arg1 metaData:(id)arg2 auxData:(id)arg3 objectId:(id)arg4;
- (void)logRenderComponent:(int)arg1 metaData:(id)arg2 objectId:(id)arg3;
- (void)logUserAction:(int)arg1 component:(int)arg2 element:(int)arg3 metaData:(id)arg4 auxData:(id)arg5 viewData:(id)arg6 objectId:(id)arg7;
- (void)logUserAction:(int)arg1 component:(int)arg2 element:(int)arg3 metaData:(id)arg4 auxData:(id)arg5;
- (void)logUserAction:(int)arg1 component:(int)arg2 element:(int)arg3;
- (void)logAction:(int)arg1 component:(int)arg2 componentData:(id)arg3 element:(int)arg4 elementData:(id)arg5 auxData:(id)arg6 viewData:(id)arg7 objectId:(id)arg8;
- (void)logEventComplete:(int)arg1 objectId:(id)arg2 componentType:(int)arg3 auxData:(id)arg4;
- (id)logEventComplete:(int)arg1 objectId:(id)arg2 viewType:(int)arg3 parameter:(int)arg4 auxData:(id)arg5;
- (void)logEventComplete:(int)arg1 objectId:(id)arg2 metaData:(id)arg3 auxData:(id)arg4;
- (void)logEventComplete:(int)arg1 objectId:(id)arg2 metaData:(id)arg3;
- (id)unauthId;
- (id)logViewLoad:(int)arg1 parameter:(int)arg2 objectId:(id)arg3 viewData:(id)arg4;
- (id)logViewLoad:(int)arg1 parameter:(int)arg2 objectId:(id)arg3;
- (id)appStartParametersWithViewType:(int)arg1 andViewParamterType:(int)arg2 timing:(double)arg3;
- (void)resetAppLoadFlags;
- (double)appStartTimestamp;
- (void)logDeltaTime:(id)arg1;
- (void)handleAppBackgroundAtTime:(double)arg1;
- (void)handleAppWarmStartAtTime:(double)arg1;
- (void)handleAppColdStartAtTime:(double)arg1;
- (id)initSharedManager;

@end
