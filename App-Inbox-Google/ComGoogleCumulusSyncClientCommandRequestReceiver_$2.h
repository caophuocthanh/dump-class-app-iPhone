//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback.h"

@class ComGoogleCumulusCommandCommandProto_Batch, ComGoogleCumulusSyncClientCommandRequestReceiver, NSString;

@interface ComGoogleCumulusSyncClientCommandRequestReceiver_$2 : NSObject <ComGoogleCumulusSyncClientObjectManager_LoadObjectsCallback>
{
    ComGoogleCumulusSyncClientCommandRequestReceiver *this$0_;
    BOOL finished_;
    BOOL isInCallback_;
    id <ComGoogleCumulusApiMetricsSpan> val$loadSpan_;
    int val$sequenceNumber_;
    ComGoogleCumulusCommandCommandProto_Batch *val$batchWithSpanIds_;
    id <ComGoogleCumulusApiMetricsSpan> val$batchSpan_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientCommandRequestReceiver:(id)arg1 withComGoogleCumulusApiMetricsSpan:(id)arg2 withInt:(int)arg3 withComGoogleCumulusCommandCommandProto_Batch:(id)arg4 withComGoogleCumulusApiMetricsSpan:(id)arg5;
- (id)getPreviousStatesWithComGoogleCumulusCommandCommandProto_Batch:(id)arg1 withComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg2;
- (void)onLoadWithComGoogleCumulusSyncClientObjectManager_ObjectGroup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

