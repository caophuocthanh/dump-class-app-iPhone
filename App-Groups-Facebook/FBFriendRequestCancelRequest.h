//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSString;

@interface FBFriendRequestCancelRequest : FBNetworkerRequest
{
    NSString *_uid;
}

- (void).cxx_destruct;
- (id)networkRequest;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithUid:(id)arg1 callbackPerformer:(id)arg2;

@end

