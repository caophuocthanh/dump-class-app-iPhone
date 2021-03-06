//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMessengerStatusUpdateFetchListener.h"
#import "FBSyncEngine.h"

@class NSString;

@interface FBMessengerStatusUpdateSyncEngine : NSObject <FBSyncEngine, FBMessengerStatusUpdateFetchListener>
{
    BOOL _hasOutstandingFetch;
    id <FBMessengerStatusUpdateFetcher> _messengerStatusUpdateFetcher;
    id <FBSyncEngineDelegate> _delegate;
}

@property id <FBSyncEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failedToFetchMessengerStatusUpdates;
- (void)fetchedMessengerStatusUpdates:(id)arg1;
- (void)cancelSync;
- (void)forceUserSyncWithPreviousSyncSummary:(id)arg1;
- (void)syncUsersWithPreviousSyncSummary:(id)arg1;
- (void)dealloc;
- (id)initWithMessengerStatusUpdateFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

