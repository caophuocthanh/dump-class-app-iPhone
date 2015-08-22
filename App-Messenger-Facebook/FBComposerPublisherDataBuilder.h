//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerAppAttribution, FBComposerPrivacySetting, FBLinkPublishInformation, FBMultiPickerVideoAttachment, FBNearbyPlace, FBTaggableActivityComposition, FBTypedNSArrayOfFBComposerPublishedHashtag, FBTypedNSArrayOfFBComposerPublishedMention, FBTypedNSArrayOfFBPublishedTaggedUser, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface FBComposerPublisherDataBuilder : NSObject
{
    NSArray *_actionMediaAttachments;
    NSDictionary *_actionPropertyToCreatedObjectType;
    FBComposerAppAttribution *_appAttribution;
    NSString *_composerSessionID;
    NSDate *_dateCreated;
    FBTypedNSArrayOfFBComposerPublishedHashtag *_hashtags;
    NSArray *_imageAttachments;
    BOOL _isPaused;
    FBLinkPublishInformation *_linkPublishInformation;
    FBTypedNSArrayOfFBComposerPublishedMention *_mentions;
    FBNearbyPlace *_place;
    unsigned int _postContentType;
    unsigned int _postState;
    FBComposerPrivacySetting *_privacy;
    FBTypedNSArrayOfFBPublishedTaggedUser *_publishedTaggedUsers;
    NSDate *_scheduledDate;
    BOOL _suggestedPhoto;
    FBTaggableActivityComposition *_taggedActivity;
    NSString *_targetFBID;
    NSString *_authorFBID;
    unsigned int _targetType;
    NSString *_text;
    NSArray *_trackingCodes;
    FBMultiPickerVideoAttachment *_videoAttachment;
    NSNumber *_timeToExpire;
    NSString *_publisherIdentifier;
    BOOL _isRedSpacePost;
}

+ (id)aComposerPublisherDataFromExistingComposerPublisherData:(id)arg1;
+ (id)aComposerPublisherData;
- (void).cxx_destruct;
- (id)withIsRedSpacePost:(BOOL)arg1;
- (id)withPublisherIdentifier:(id)arg1;
- (id)withTimeToExpire:(id)arg1;
- (id)withVideoAttachment:(id)arg1;
- (id)withText:(id)arg1;
- (id)withTargetType:(unsigned int)arg1;
- (id)withTaggedActivity:(id)arg1;
- (id)withImageAttachments:(id)arg1;
- (id)withTrackingCodes:(id)arg1;
- (id)withTargetFBID:(id)arg1;
- (id)withSuggestedPhoto:(BOOL)arg1;
- (id)withScheduledDate:(id)arg1;
- (id)withPublishedTaggedUsers:(id)arg1;
- (id)withPrivacy:(id)arg1;
- (id)withPostState:(unsigned int)arg1;
- (id)withPostContentType:(unsigned int)arg1;
- (id)withPlace:(id)arg1;
- (id)withMentions:(id)arg1;
- (id)withLinkPublishInformation:(id)arg1;
- (id)withIsPaused:(BOOL)arg1;
- (id)withHashtags:(id)arg1;
- (id)withDateCreated:(id)arg1;
- (id)withComposerSessionID:(id)arg1;
- (id)withAuthorFBID:(id)arg1;
- (id)withAppAttribution:(id)arg1;
- (id)withActionPropertyToCreatedObjectType:(id)arg1;
- (id)withActionMediaAttachments:(id)arg1;
- (id)build;

@end
