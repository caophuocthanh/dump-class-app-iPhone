//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NRMAMetricSet, NSDictionary, NSString;

@interface NRMAMethodProfiler : NSObject
{
    NSDictionary *tracingObjects;
    BOOL startTrace;
    NSString *profileName;
    NRMAMetricSet *collectedMetrics;
    float methodReplacementTime;
}

+ (id)whiteList;
+ (id)dictionaryWithKeys:(id)arg1 value:(id)arg2;
+ (int)traceTypeForClass:(id)arg1;
+ (int)categoryForSelector:(SEL)arg1;
+ (id)instrumentForTraceList;
+ (id)sharedInstance;
+ (id)blackWhiteDictionary;
@property(nonatomic) float methodReplacementTime; // @synthesize methodReplacementTime;
@property(retain) NRMAMetricSet *collectedMetrics; // @synthesize collectedMetrics;
- (id)metricNameForClassNamed:(id)arg1 andMethodNamed:(id)arg2;
- (void)profileMethodNamed:(id)arg1 inClassNamed:(id)arg2;
- (void)initializeProfilers;
- (void)startMethodReplacement;
- (id)init;

@end

