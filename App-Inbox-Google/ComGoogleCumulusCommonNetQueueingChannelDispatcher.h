//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonNetBaseDelegatingChannelDispatcher.h"

@interface ComGoogleCumulusCommonNetQueueingChannelDispatcher : ComGoogleCumulusCommonNetBaseDelegatingChannelDispatcher
{
    id <JavaUtilList> pendingRequests_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_destroyWithId__params;
+ (void)initialize;
- (void)dealloc;
- (void)destroyWithId:(id)arg1;
- (void)dispatchRequestWithId:(id)arg1;
- (void)onOpenInternal;
- (id)initWithComGoogleCumulusCommonNetChannelDispatcher:(id)arg1;

@end

