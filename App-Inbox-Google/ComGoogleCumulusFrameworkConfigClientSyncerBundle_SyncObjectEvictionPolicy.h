//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JCGCuExponentialLimitRetryPolicy.h"

@class ComGoogleCumulusCommonConfigConfiguration, ComGoogleCumulusSyncClientSyncManager;

@interface ComGoogleCumulusFrameworkConfigClientSyncerBundle_SyncObjectEvictionPolicy : JCGCuExponentialLimitRetryPolicy
{
    ComGoogleCumulusSyncClientSyncManager *syncManager_;
    ComGoogleCumulusCommonConfigConfiguration *config_;
}

- (void)__javaClone;
- (void)limitReachedWithNSString:(id)arg1;
- (id)initWithJCGCuDelayedWorkQueue:(id)arg1 withComGoogleCumulusCommonUtilEventBus:(id)arg2 withComGoogleCumulusCommonConfigConfiguration:(id)arg3;

@end

