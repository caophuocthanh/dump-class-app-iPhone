//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusQueryClientCQUpdateQueue_Task.h"

@class ComGoogleCumulusQueryClientCQUpdateQueue;

@interface ComGoogleCumulusQueryClientCQUpdateQueue_LocalQueryRunner : ComGoogleCumulusQueryClientCQUpdateQueue_Task
{
    ComGoogleCumulusQueryClientCQUpdateQueue *this$1_;
    int queryDelay_;
}

- (void)dealloc;
- (id)description;
- (BOOL)runWithComGoogleCumulusQueryClientCQUpdateQueue_MatchUpdater:(id)arg1;
- (BOOL)runImmediatelyWithDouble:(double)arg1;
- (int)getDelayMs;
- (id)initWithComGoogleCumulusQueryClientCQUpdateQueue:(id)arg1 withInt:(int)arg2;

@end

