//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBServiceTransactionMutating.h"

@class FBServiceNetworkerRequest, NSString;

@interface FBServiceTransactionToken : NSObject <FBServiceTransactionMutating>
{
    FBServiceNetworkerRequest *_request;
    id <FBServiceTransactionTokenDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)changePriorityToNewPriority:(int)arg1;
- (void)cancel;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

