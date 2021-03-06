//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBCommentCreateInputDataMessage, NSArray, NSData, NSString;

@interface FBCommentCreateInputData : FBGraphQLInput
{
    NSString *_clientMutationId;
    NSString *_actorId;
    NSString *_feedbackId;
    FBCommentCreateInputDataMessage *_message;
    NSArray *_attachments;
    NSData *_photo;
    NSArray *_tracking;
}

@property(copy, nonatomic) NSArray *tracking; // @synthesize tracking=_tracking;
@property(copy, nonatomic) NSData *photo; // @synthesize photo=_photo;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) FBCommentCreateInputDataMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *feedbackId; // @synthesize feedbackId=_feedbackId;
@property(copy, nonatomic) NSString *actorId; // @synthesize actorId=_actorId;
@property(copy, nonatomic) NSString *clientMutationId; // @synthesize clientMutationId=_clientMutationId;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end

