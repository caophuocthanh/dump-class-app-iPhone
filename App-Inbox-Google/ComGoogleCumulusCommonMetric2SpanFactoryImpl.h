//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiMetricsSpan_Factory.h"

@class ComGoogleCumulusCommonMetric2SpanEventFactory, NSString;

@interface ComGoogleCumulusCommonMetric2SpanFactoryImpl : NSObject <ComGoogleCumulusApiMetricsSpan_Factory>
{
    id <ComGoogleCumulusCommonMetric2SpanIdGenerator> idGenerator_;
    id <ComGoogleCumulusCommonMetric2SpanEventReceiver> receiver_;
    id <ComGoogleCumulusCommonMetric2SpanPolicy> spanPolicy_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    ComGoogleCumulusCommonMetric2SpanEventFactory *spanEventFactory_;
    id <ComGoogleCumulusCommonMetric2SysTraceService> sysTraceService_;
}

- (void)dealloc;
- (void)stopSysTraceWithNSString:(id)arg1;
- (void)startSysTraceWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getWithNSString:(id)arg1;
- (void)extendWithNSString:(id)arg1 withComGoogleProtobufExtensionLite:(id)arg2 withId:(id)arg3;
- (void)stopAtWithNSString:(id)arg1 withDouble:(double)arg2;
- (void)stopWithNSString:(id)arg1;
- (id)startInternalWithNSString:(id)arg1 withNSString:(id)arg2 withComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg3 withInt:(int)arg4 withDouble:(double)arg5;
- (id)startChildAtWithNSString:(id)arg1 withComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg2 withInt:(int)arg3 withDouble:(double)arg4;
- (id)startChildWithNSString:(id)arg1 withComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg2 withInt:(int)arg3;
- (id)startAtWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2 withDouble:(double)arg3;
- (id)startWithComGoogleCumulusCommonMetricsProto_ComponentEnum:(id)arg1 withInt:(int)arg2;
- (id)initWithComGoogleCumulusCommonMetric2SpanIdGenerator:(id)arg1 withComGoogleCumulusCommonMetric2SpanEventFactory:(id)arg2 withComGoogleCumulusCommonMetric2SpanEventReceiver:(id)arg3 withComGoogleCumulusCommonMetric2SpanPolicy:(id)arg4 withComGoogleCumulusCommonUtilClock:(id)arg5 withComGoogleCumulusCommonMetric2SysTraceService:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

