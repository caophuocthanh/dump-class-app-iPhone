//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MNWatchMessageListGenerator : NSObject
{
    id <MNAggregatedAppMessageQuerying> _messageQuerier;
    id <MNAuthenticationManager> _authManager;
}

- (void).cxx_destruct;
- (void)cancelReqeustWithId:(long long)arg1;
- (long long)generateMessageListWithThreadKey:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)initWithMessageQuerier:(id)arg1 authManager:(id)arg2;

@end

