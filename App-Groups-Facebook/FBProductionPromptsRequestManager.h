//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLMemResponseController, FBUserSession;

@interface FBProductionPromptsRequestManager : NSObject
{
    FBGraphQLMemResponseController *_memResponseController;
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)closePrompt:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrompts:(CDUnknownBlockType)arg1;
- (id)initWithGraphQLMemResponseController:(id)arg1 session:(id)arg2;

@end

