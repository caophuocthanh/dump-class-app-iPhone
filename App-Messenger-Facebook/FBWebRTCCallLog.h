//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBWebRTCCallLogDatabase, FBWebRTCCallLogListenerAnnouncer, NSObject<OS_dispatch_queue>, NSString;

@interface FBWebRTCCallLog : NSObject <FBSessionClassProvidable>
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    FBWebRTCCallLogDatabase *_database;
    FBWebRTCCallLogListenerAnnouncer *_announcer;
}

+ (id)_openDatabaseIfNeeded:(id)arg1;
+ (id)_rebuildDatabaseIfNeeded:(id)arg1;
- (void).cxx_destruct;
- (void)_executeAsyncDatabaseCall:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_executeAsyncOpenDatabaseCall:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryRecentCallsForUserID:(id)arg1 maxCount:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryRecentCallsMaxCount:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)queryRecentCallersMaxCount:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteCallsBeforeTime:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addCall:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeLog:(CDUnknownBlockType)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1 callbackQueue:(id)arg2;
- (id)initWithDatabasePath:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
