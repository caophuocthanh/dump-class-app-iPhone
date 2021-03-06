//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonObjectMonitor.h"

@class ComGoogleProtobufExtensionLite, JBTCBigTopCommonEnums_TypeIdEnum, JBTICommonSapiSpan_Factory, JBTPriorityEnum, NSString;

@interface JBTICommonCumulusObjectMonitor : NSObject <JBTICommonObjectMonitor>
{
    id <ComGoogleCumulusApiBigSet> bigSet_;
    id <ComGoogleCumulusApiObjectHandle> objectHandle_;
    id <JavaUtilCollection> sliceIds_;
    JBTCBigTopCommonEnums_TypeIdEnum *typeId_;
    ComGoogleProtobufExtensionLite *baseObjectExt_;
    id <JBTICommonListener> changeListener_;
    id <JBTICommonListener> errorListener_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    JBTPriorityEnum *priority_;
    BOOL forceRemoteFetch_;
    BOOL localOnly_;
    id <ComGoogleCumulusApiQuery> cumulusQuery_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_cumulusQuery_;
+ (void)initialize;
- (void)dealloc;
- (id)getPriority;
- (void)setPriorityWithJBTPriorityEnum:(id)arg1;
- (void)stop;
- (id)queryUpdateTypeToObjectMonitorSapiMetricWithComGoogleCumulusApiQueryUpdate_UpdateTypeEnum:(id)arg1;
- (void)startWithJBTSpan:(id)arg1;
- (id)initWithComGoogleCumulusApiBigSet:(id)arg1 withComGoogleCumulusApiObjectHandle:(id)arg2 withJavaUtilCollection:(id)arg3 withJBTCBigTopCommonEnums_TypeIdEnum:(id)arg4 withComGoogleProtobufExtensionLite:(id)arg5 withJBTFetchModeEnum:(id)arg6 withJBTICommonListener:(id)arg7 withJBTICommonListener:(id)arg8 withJBTICommonSapiSpan_Factory:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

