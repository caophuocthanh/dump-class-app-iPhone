//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonCollectIntrusiveQueue_Node.h"

@class ComGoogleCumulusCommonCollectTimedCircularBuffer, NSString;

@interface JCGCuSameThreadGlobalWatchdog_OperationTracker : ComGoogleCumulusCommonCollectIntrusiveQueue_Node
{
    ComGoogleCumulusCommonCollectTimedCircularBuffer *messages_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    double relativeTimeMs_;
    int relativeStartTimeMillis_;
    BOOL hasSeenActivity_;
    NSString *name_;
}

- (void)dealloc;
- (id)description;
- (id)getMessages;
- (BOOL)getHasSeenActivity;
- (void)resetHasSeenActivity;
- (void)updateStatusWithComGoogleCumulusCommonUtilSubstitutedString:(id)arg1;
- (void)startOperationWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1 withInt:(int)arg2;

@end

