//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher.h"

@class JBTICommonMultiObjectFetcher;

@interface ComGoogleAppsBigtopSyncClientImplSettingsCumulusSettingsFetcher : ComGoogleAppsBigtopSyncClientImplSettingsSettingsFetcher
{
    JBTICommonMultiObjectFetcher *fetcher_;
    id <ComGoogleCumulusApiBigSet> bigSet_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleCumulusApiBigSet_withJBTICommonMultiObjectFetcher_withJCGCuDelayedWorkQueue_withComGoogleAppsBigtopSyncClientImplSettingsSettingsCache_withJavaUtilSet_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (void)invokeSettingsFetchWithJavaUtilSet:(id)arg1 withJavaUtilMap:(id)arg2 withJBTFetchModeEnum:(id)arg3 withComGoogleCumulusApiQuerySettings_PriorityEnum:(id)arg4 withJBTSpan:(id)arg5 withJBTICommonSapiCallback:(id)arg6;
- (id)initWithComGoogleCumulusApiBigSet:(id)arg1 withJBTICommonMultiObjectFetcher:(id)arg2 withJCGCuDelayedWorkQueue:(id)arg3 withComGoogleAppsBigtopSyncClientImplSettingsSettingsCache:(id)arg4 withJavaUtilSet:(id)arg5;

@end

