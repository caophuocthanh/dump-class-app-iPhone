//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNBatchInviteControllerListener.h"

@class NSString;

@interface MNBatchInviteControllerAnalyticsLogger : NSObject <MNBatchInviteControllerListener>
{
    unsigned int _source;
}

@property(readonly, nonatomic) unsigned int source; // @synthesize source=_source;
- (void)_logEvent:(id)arg1 extra:(id)arg2;
- (void)_logEvent:(id)arg1;
- (void)batchInviteRequestDidSucceed;
- (void)batchInviteRequestDidFail;
- (void)batchInviteDidCancel;
- (void)batchInviteDidSendInvites:(unsigned int)arg1;
- (id)analyticsModule;
- (id)init;
- (id)initWithSourceType:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
