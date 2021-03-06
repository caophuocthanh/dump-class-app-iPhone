//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusApiMetricsAppContext, ComGoogleCumulusApiQuerySettings_PriorityEnum, ComGoogleCumulusApiQuerySpec, ComGoogleCumulusApiQuerySpec_PageOrderEnum, JavaLangInteger, NSString;

@protocol ComGoogleCumulusApiQuery <NSObject, JavaObject>
- (BOOL)isExpectingResult;
- (NSString *)getQueryVersion;
- (int)getVersion;
- (NSString *)getQueryId;
- (void)stop;
- (ComGoogleCumulusApiQuerySpec *)getQuerySpec;
- (void)updatePriorityWithComGoogleCumulusApiQuerySettings_PriorityEnum:(ComGoogleCumulusApiQuerySettings_PriorityEnum *)arg1;
- (void)refreshWithComGoogleCumulusApiMetricsAppContext:(ComGoogleCumulusApiMetricsAppContext *)arg1;
- (void)refresh;
- (ComGoogleCumulusApiQuerySpec *)updateBoundsWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withJavaLangInteger:(JavaLangInteger *)arg3 withComGoogleCumulusApiQuerySpec_PageOrderEnum:(ComGoogleCumulusApiQuerySpec_PageOrderEnum *)arg4 withComGoogleCumulusApiMetricsAppContext:(ComGoogleCumulusApiMetricsAppContext *)arg5;
- (ComGoogleCumulusApiQuerySpec *)updateRangeWithInt:(int)arg1 withComGoogleCumulusApiMetricsAppContext:(ComGoogleCumulusApiMetricsAppContext *)arg2;
- (ComGoogleCumulusApiQuerySpec *)updateRangeWithInt:(int)arg1;
- (void)updateQuerySpecWithComGoogleCumulusApiQuerySpec:(ComGoogleCumulusApiQuerySpec *)arg1 withComGoogleCumulusApiMetricsAppContext:(ComGoogleCumulusApiMetricsAppContext *)arg2;
- (void)updateQuerySpecWithComGoogleCumulusApiQuerySpec:(ComGoogleCumulusApiQuerySpec *)arg1;
@end

