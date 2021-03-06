//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSString;

@interface FBItemUnsaveInputData : FBGraphQLInput
{
    NSString *_itemNodeId;
    NSString *_legacyTimelineAppCollectionId;
    NSString *_curationMechanism;
    NSString *_curationSurface;
    NSString *_saveContext;
    NSString *_sourceStoryId;
    NSArray *_tracking;
    NSString *_clientMutationId;
    NSString *_actorId;
}

@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
@property(copy, nonatomic) NSArray *tracking; // @synthesize tracking=_tracking;
@property(copy, nonatomic) NSString *sourceStoryId; // @synthesize sourceStoryId=_sourceStoryId;
@property(copy, nonatomic) NSString *saveContext; // @synthesize saveContext=_saveContext;
@property(copy, nonatomic) NSString *curationSurface; // @synthesize curationSurface=_curationSurface;
@property(copy, nonatomic) NSString *curationMechanism; // @synthesize curationMechanism=_curationMechanism;
@property(copy, nonatomic) NSString *legacyTimelineAppCollectionId; // @synthesize legacyTimelineAppCollectionId=_legacyTimelineAppCollectionId;
@property(copy, nonatomic) NSString *itemNodeId; // @synthesize itemNodeId=_itemNodeId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

