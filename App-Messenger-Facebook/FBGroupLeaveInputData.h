//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBGroupLeaveInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_groupId;
    NSString *_source;
    NSString *_readdPolicy;
}

@property(copy, nonatomic) NSString *readdPolicy; // @synthesize readdPolicy=_readdPolicy;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
