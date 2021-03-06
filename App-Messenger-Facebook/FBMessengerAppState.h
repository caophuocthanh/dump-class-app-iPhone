//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBMessengerAppState : FBValueObject <NSCopying, NSCoding>
{
    unsigned int _numberOfUnreadPendingRequests;
    unsigned long long _threadListSyncActionId;
    long long _muteUntil;
}

@property(readonly, nonatomic) unsigned int numberOfUnreadPendingRequests; // @synthesize numberOfUnreadPendingRequests=_numberOfUnreadPendingRequests;
@property(readonly, nonatomic) long long muteUntil; // @synthesize muteUntil=_muteUntil;
@property(readonly, nonatomic) unsigned long long threadListSyncActionId; // @synthesize threadListSyncActionId=_threadListSyncActionId;
- (id)initWithThreadListSyncActionId:(unsigned long long)arg1 muteUntil:(long long)arg2 numberOfUnreadPendingRequests:(unsigned int)arg3;

@end

