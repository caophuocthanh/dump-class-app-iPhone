//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuSingleOperationWatchdog.h"

@class ComGoogleCumulusCommonCollectTimedCircularBuffer, JCGCuWorkUtil_CancellableRunnable, NSString;

@interface JCGCuSameThreadWatchdog : NSObject <JCGCuSingleOperationWatchdog>
{
    NSString *name_;
    int intervalMs_;
    id <JCGCuSingleOperationWatchdog_Handler> handler_;
    ComGoogleCumulusCommonCollectTimedCircularBuffer *progressMessages_;
    JCGCuWorkUtil_CancellableRunnable *watchDogTask_;
    BOOL hasSeenActivity_;
}

+ (void)initialize;
- (void)dealloc;
- (void)cancelTask;
- (void)stop;
- (void)markProgressWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (id)initWithNSString:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withInt:(int)arg3 withJCGCuSingleOperationWatchdog_Handler:(id)arg4 withComGoogleCumulusCommonUtilClock:(id)arg5;
- (id)initWithNSString:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withJCGCuSingleOperationWatchdog_Handler:(id)arg3 withComGoogleCumulusCommonUtilClock:(id)arg4;
- (id)initWithNSString:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withInt:(int)arg3 withComGoogleCumulusCommonUtilClock:(id)arg4;
- (id)initWithNSString:(id)arg1 withJCGCuDelayedWorkQueue:(id)arg2 withComGoogleCumulusCommonUtilClock:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

