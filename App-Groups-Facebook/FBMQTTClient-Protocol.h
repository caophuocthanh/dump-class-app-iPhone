//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMQTTClientParameter, FBMQTTEncodedMessage, NSArray, NSDictionary;

@protocol FBMQTTClient <NSObject>
@property(readonly) int connectStatus;
@property(nonatomic) BOOL inBackground;
@property(nonatomic) __weak id <FBMQTTClientDelegate> delegate;
@property(nonatomic) double lastMqttActivityTimeSecond;
@property(nonatomic) float connectTimeout;
@property(nonatomic) float pingResponseTimeout;
@property(nonatomic) int mqttForegroundKeepAliveTime;
@property(nonatomic) int mqttKeepAliveTime;
@property(nonatomic) BOOL useVOIP;
- (NSDictionary *)connectionDebugInfo;
- (void)stop;
- (void)resumeForegroundKeepAlive;
- (void)pauseForegroundKeepAlive;
- (void)runKeepAlive;
- (void)runExtraKeepAliveWhenSystemAwake:(double)arg1;
- (void)publishMessage:(FBMQTTEncodedMessage *)arg1;
- (void)unsubscribeFromPatterns:(NSArray *)arg1;
- (void)subscribeToPatterns:(NSArray *)arg1;
- (void)start;
- (id)initClientWithParameter:(FBMQTTClientParameter *)arg1;
@end

