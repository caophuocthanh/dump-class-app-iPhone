//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol.h"

@class FBFriendRequestHideInputData, FBMemFriendRequestHideResponsePayload;

@protocol FBFriendRequestHideMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemFriendRequestHideResponsePayload *)rollbackOptimisticPayload:(FBFriendRequestHideInputData *)arg1;
- (FBMemFriendRequestHideResponsePayload *)optimisticPayload:(FBFriendRequestHideInputData *)arg1;
@end
