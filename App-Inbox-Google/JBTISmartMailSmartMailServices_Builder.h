//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTCBigTopApplicationInfo, JBTICommonMultiLoginUrlRewriter, JavaLangBoolean;

@interface JBTISmartMailSmartMailServices_Builder : NSObject
{
    id <JBTICommonImageMetadataFetcher> imageMetadataFetcher_;
    JBTICommonMultiLoginUrlRewriter *multiLoginUrlRewriter_;
    id <JBTISmartMailSmartMailMetricsRecorder> metricsRecorder_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    JBTCBigTopApplicationInfo *applicationInfo_;
    id <JBTDateTimeFormatter> dateTimeFormatter_;
    id <JBTISmartMailSmartMailTranslator> translator_;
    id <TMLTimeService> timeService_;
    JavaLangBoolean *enableContactPickerExperiment_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (id)build;
- (id)setEnableContactPickerExperimentWithJavaLangBoolean:(id)arg1;
- (id)setTimeServiceWithTMLTimeService:(id)arg1;
- (id)setSmartMailTranslatorWithJBTISmartMailSmartMailTranslator:(id)arg1;
- (id)setDateTimeFormatterWithJBTDateTimeFormatter:(id)arg1;
- (id)setApplicationInfoWithJBTCBigTopApplicationInfo:(id)arg1;
- (id)setClockWithComGoogleCumulusCommonUtilClock:(id)arg1;
- (id)setMetricsRecorderWithJBTISmartMailSmartMailMetricsRecorder:(id)arg1;
- (id)setMultiLoginUrlRewriterWithJBTICommonMultiLoginUrlRewriter:(id)arg1;
- (id)setImageMetadataFetcherWithJBTICommonImageMetadataFetcher:(id)arg1;

@end

