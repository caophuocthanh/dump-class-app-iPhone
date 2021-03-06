//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSSet;

@interface FBProductionPromptsStoreState : FBValueObject <NSCopying, NSCoding>
{
    NSArray *_prompts;
    NSSet *_closedPromptsGraphQLIDs;
    NSSet *_openedPromptsGraphQLIDs;
}

@property(readonly, copy, nonatomic) NSSet *openedPromptsGraphQLIDs; // @synthesize openedPromptsGraphQLIDs=_openedPromptsGraphQLIDs;
@property(readonly, copy, nonatomic) NSSet *closedPromptsGraphQLIDs; // @synthesize closedPromptsGraphQLIDs=_closedPromptsGraphQLIDs;
@property(readonly, copy, nonatomic) NSArray *prompts; // @synthesize prompts=_prompts;
- (void).cxx_destruct;
- (id)initWithPrompts:(id)arg1 closedPromptsGraphQLIDs:(id)arg2 openedPromptsGraphQLIDs:(id)arg3;

@end

