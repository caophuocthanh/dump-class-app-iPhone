//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserSession, NSArray, NSSet, NSString;

@protocol FBAvatarTaggingSearchProviderProtocol <NSObject>
@property(copy, nonatomic) NSString *loggingSessionID;
@property(readonly, nonatomic, getter=isFetchingResults) BOOL fetchingResults;
@property(copy, nonatomic) NSSet *excludedIDs;
@property(readonly, nonatomic) FBUserSession *session;
@property(readonly, nonatomic) BOOL canTagSelf;
@property(copy, nonatomic) NSArray *avatarCollections;
- (void)searchForAvatarsWithText:(NSString *)arg1 fetchLimit:(unsigned int)arg2 flags:(unsigned int)arg3 completion:(void (^)(NSArray *, NSString *))arg4;
@end

