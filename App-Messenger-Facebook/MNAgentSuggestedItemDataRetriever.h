//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLService;

@interface MNAgentSuggestedItemDataRetriever : NSObject
{
    FBGraphQLService *_graphQLService;
}

- (void).cxx_destruct;
- (void)retrieveObjectWithGraphQLId:(id)arg1 downloadedResponseBlock:(CDUnknownBlockType)arg2 cachedResponseBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)initWithGraphQLService:(id)arg1;
- (id)init;

@end

