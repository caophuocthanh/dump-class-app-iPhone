//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonMetric2SpanEventReceiver.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientLoggingLoggingServiceSpanEventReceiver : NSObject <ComGoogleCumulusCommonMetric2SpanEventReceiver>
{
    id <ComGoogleAppsXplatLoggingEventsEventLogger> spanEventLogger_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_acceptWithComGoogleCumulusCommonMetricsProto_SpanEvent__params;
- (void)dealloc;
- (void)acceptWithId:(id)arg1;
- (id)initWithComGoogleAppsXplatLoggingEventsEventLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

