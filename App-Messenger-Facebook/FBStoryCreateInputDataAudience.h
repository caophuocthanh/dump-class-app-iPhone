//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class FBStoryCreateInputDataAudiencePrivacy, NSString;

@interface FBStoryCreateInputDataAudience : FBGraphQLInput
{
    FBStoryCreateInputDataAudiencePrivacy *_privacy;
    NSString *_toId;
    NSString *_appendStoryId;
    NSString *_postChannelId;
}

@property(copy, nonatomic) NSString *postChannelId; // @synthesize postChannelId=_postChannelId;
@property(copy, nonatomic) NSString *appendStoryId; // @synthesize appendStoryId=_appendStoryId;
@property(copy, nonatomic) NSString *toId; // @synthesize toId=_toId;
@property(copy, nonatomic) FBStoryCreateInputDataAudiencePrivacy *privacy; // @synthesize privacy=_privacy;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
