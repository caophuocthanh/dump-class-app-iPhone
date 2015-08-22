//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGAutocompleteAbstractStore.h"

#import "IGAutocompleteAbstractStoreProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface IGAutocompleteUsersStore : IGAutocompleteAbstractStore <IGAutocompleteAbstractStoreProtocol>
{
    NSMutableDictionary *_users;
    NSMutableDictionary *_buckets;
    NSMutableArray *_recentUserPKs;
    NSString *_archivePath;
}

+ (id)sharedStore;
@property(readonly, nonatomic) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(retain, nonatomic) NSMutableArray *recentUserPKs; // @synthesize recentUserPKs=_recentUserPKs;
@property(retain, nonatomic) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain, nonatomic) NSMutableDictionary *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (void)logStoreLoaded;
- (void)onFriendStatusReceived:(id)arg1;
- (void)removeUser:(id)arg1;
- (void)unbucketUser:(id)arg1;
- (void)bucketUser:(id)arg1;
- (id)usersFromResponse:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)loadFromNetwork;
- (void)addUsers:(id)arg1 addToRecent:(BOOL)arg2;
- (void)addUser:(id)arg1 addToRecent:(BOOL)arg2;
- (id)followingUsers;
- (id)recentUsers;
- (id)allUsers;
- (void)invalidateExpirationOnAppUpgrade;
- (id)usersInBucket:(id)arg1;
- (id)storedUsersForKeys:(id)arg1 fromSet:(int)arg2;
- (void)clearHistory;
- (void)clear;
- (id)regexPattern;
- (void)loadUsers;
- (void)archive;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

