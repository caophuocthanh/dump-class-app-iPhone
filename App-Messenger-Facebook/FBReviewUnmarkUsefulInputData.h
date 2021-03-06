//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSString;

@interface FBReviewUnmarkUsefulInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_reviewId;
    NSString *_surface;
    NSString *_mechanism;
}

@property(copy, nonatomic) NSString *mechanism; // @synthesize mechanism=_mechanism;
@property(copy, nonatomic) NSString *surface; // @synthesize surface=_surface;
@property(copy, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

