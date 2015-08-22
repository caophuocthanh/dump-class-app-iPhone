//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBComposerDefaultAlbumSelectionBehaviour, FBComposerForSaleConfiguration, FBComposerPrivacySetting, FBComposerPublishButtonTextBehaviour, NSString;

@interface FBComposerTraits : FBValueObject <NSCopying, NSCoding>
{
    BOOL _showProfilePicture;
    BOOL _allowDraftRecovery;
    BOOL _allowCachingOfResultantPublication;
    BOOL _allowReactionAfterPublication;
    BOOL _allowHashtags;
    BOOL _allowPostOptions;
    BOOL _allowLinkAttachments;
    BOOL _allowLinkAttachmentPicker;
    BOOL _scrapeLinkAttachments;
    BOOL _allowPlaceTagging;
    BOOL _allowPlaceAttachment;
    BOOL _allowBackDate;
    BOOL _allowQAndA;
    BOOL _shouldShowAudienceBar;
    BOOL _allowFaceDetection;
    BOOL _allowLargeThumbnailsDesign;
    BOOL _startAttachmentUploadsImmediately;
    BOOL _allowPhotoDragging;
    BOOL _allowPhotoRemoving;
    BOOL _isEditingReview;
    BOOL _forceDirectedPost;
    BOOL _allowShareDestinationUserEducation;
    BOOL _allowStreamlinedComposer;
    BOOL _forceSimpleSearchForMentions;
    BOOL _allowModifyingCaptionsOnPhotos;
    BOOL _allowStickersInPhotos;
    BOOL _allowTextInPhotos;
    BOOL _allowChangingDestination;
    BOOL _shouldAllowVideosInAlbums;
    BOOL _allowDisablingFeaturesInComposerDueToStartingStyle;
    BOOL _allowMajorLifeEventTitleEditing;
    BOOL _allowMagicStories;
    BOOL _allowStickersAsAttachments;
    BOOL _allowFollowerTargeting;
    BOOL _showRedSpaceToggle;
    BOOL _allowFeedTopic;
    unsigned int _interfaceStyle;
    int _checkinSearchType;
    NSString *_publisherIdentifier;
    NSString *_composerAnalyticsType;
    unsigned int _mentioningPermission;
    unsigned int _albumSelectionPermission;
    FBComposerDefaultAlbumSelectionBehaviour *_defaultAlbumSelectionBehaviour;
    unsigned int _photoAttachmentPermission;
    unsigned int _videoAttachmentPermission;
    FBComposerPublishButtonTextBehaviour *_publishButtonTextBehaviour;
    unsigned int _implicitPlaceTaggingPermission;
    unsigned int _userTaggingPermission;
    unsigned int _activityTaggingPermission;
    unsigned int _zeroRatingSentryType;
    unsigned int _placeholderType;
    unsigned int _titleType;
    unsigned int _dismissalPermission;
    unsigned int _publishPermission;
    unsigned int _targetLoadType;
    unsigned int _privacySettingSavePermission;
    unsigned int _postSchedulingPermission;
    unsigned int _userTaggingInMediaPermission;
    unsigned int _authorLoadType;
    unsigned int _privacySettingLoadType;
    FBComposerPrivacySetting *_initialPrivacySetting;
    unsigned int _tagAnyoneInMentionsPermission;
    NSString *_mentionTagSearchContext;
    unsigned int _allowPostExpirationOption;
    unsigned int _launchKeyboardBehavior;
    unsigned int _minimumLengthOfStatusTextForPostToBeConsideredPublishable;
    FBComposerForSaleConfiguration *_forSaleConfiguration;
    unsigned int _cursorLaunchBehavior;
    unsigned int _postCompositionAllowance;
}

@property(readonly, nonatomic) BOOL allowFeedTopic; // @synthesize allowFeedTopic=_allowFeedTopic;
@property(readonly, nonatomic) BOOL showRedSpaceToggle; // @synthesize showRedSpaceToggle=_showRedSpaceToggle;
@property(readonly, nonatomic) BOOL allowFollowerTargeting; // @synthesize allowFollowerTargeting=_allowFollowerTargeting;
@property(readonly, nonatomic) BOOL allowStickersAsAttachments; // @synthesize allowStickersAsAttachments=_allowStickersAsAttachments;
@property(readonly, nonatomic) BOOL allowMagicStories; // @synthesize allowMagicStories=_allowMagicStories;
@property(readonly, nonatomic) BOOL allowMajorLifeEventTitleEditing; // @synthesize allowMajorLifeEventTitleEditing=_allowMajorLifeEventTitleEditing;
@property(readonly, nonatomic) BOOL allowDisablingFeaturesInComposerDueToStartingStyle; // @synthesize allowDisablingFeaturesInComposerDueToStartingStyle=_allowDisablingFeaturesInComposerDueToStartingStyle;
@property(readonly, nonatomic) unsigned int postCompositionAllowance; // @synthesize postCompositionAllowance=_postCompositionAllowance;
@property(readonly, nonatomic) BOOL shouldAllowVideosInAlbums; // @synthesize shouldAllowVideosInAlbums=_shouldAllowVideosInAlbums;
@property(readonly, nonatomic) BOOL allowChangingDestination; // @synthesize allowChangingDestination=_allowChangingDestination;
@property(readonly, nonatomic) BOOL allowTextInPhotos; // @synthesize allowTextInPhotos=_allowTextInPhotos;
@property(readonly, nonatomic) BOOL allowStickersInPhotos; // @synthesize allowStickersInPhotos=_allowStickersInPhotos;
@property(readonly, nonatomic) unsigned int cursorLaunchBehavior; // @synthesize cursorLaunchBehavior=_cursorLaunchBehavior;
@property(readonly, nonatomic) BOOL allowModifyingCaptionsOnPhotos; // @synthesize allowModifyingCaptionsOnPhotos=_allowModifyingCaptionsOnPhotos;
@property(readonly, copy, nonatomic) FBComposerForSaleConfiguration *forSaleConfiguration; // @synthesize forSaleConfiguration=_forSaleConfiguration;
@property(readonly, nonatomic) unsigned int minimumLengthOfStatusTextForPostToBeConsideredPublishable; // @synthesize minimumLengthOfStatusTextForPostToBeConsideredPublishable=_minimumLengthOfStatusTextForPostToBeConsideredPublishable;
@property(readonly, nonatomic) BOOL forceSimpleSearchForMentions; // @synthesize forceSimpleSearchForMentions=_forceSimpleSearchForMentions;
@property(readonly, nonatomic) BOOL allowStreamlinedComposer; // @synthesize allowStreamlinedComposer=_allowStreamlinedComposer;
@property(readonly, nonatomic) BOOL allowShareDestinationUserEducation; // @synthesize allowShareDestinationUserEducation=_allowShareDestinationUserEducation;
@property(readonly, nonatomic) unsigned int launchKeyboardBehavior; // @synthesize launchKeyboardBehavior=_launchKeyboardBehavior;
@property(readonly, nonatomic) unsigned int allowPostExpirationOption; // @synthesize allowPostExpirationOption=_allowPostExpirationOption;
@property(readonly, nonatomic) BOOL forceDirectedPost; // @synthesize forceDirectedPost=_forceDirectedPost;
@property(readonly, copy, nonatomic) NSString *mentionTagSearchContext; // @synthesize mentionTagSearchContext=_mentionTagSearchContext;
@property(readonly, nonatomic) unsigned int tagAnyoneInMentionsPermission; // @synthesize tagAnyoneInMentionsPermission=_tagAnyoneInMentionsPermission;
@property(readonly, nonatomic) BOOL isEditingReview; // @synthesize isEditingReview=_isEditingReview;
@property(readonly, nonatomic) BOOL allowPhotoRemoving; // @synthesize allowPhotoRemoving=_allowPhotoRemoving;
@property(readonly, nonatomic) BOOL allowPhotoDragging; // @synthesize allowPhotoDragging=_allowPhotoDragging;
@property(readonly, nonatomic) BOOL startAttachmentUploadsImmediately; // @synthesize startAttachmentUploadsImmediately=_startAttachmentUploadsImmediately;
@property(readonly, copy, nonatomic) FBComposerPrivacySetting *initialPrivacySetting; // @synthesize initialPrivacySetting=_initialPrivacySetting;
@property(readonly, nonatomic) unsigned int privacySettingLoadType; // @synthesize privacySettingLoadType=_privacySettingLoadType;
@property(readonly, nonatomic) unsigned int authorLoadType; // @synthesize authorLoadType=_authorLoadType;
@property(readonly, nonatomic) unsigned int userTaggingInMediaPermission; // @synthesize userTaggingInMediaPermission=_userTaggingInMediaPermission;
@property(readonly, nonatomic) BOOL allowLargeThumbnailsDesign; // @synthesize allowLargeThumbnailsDesign=_allowLargeThumbnailsDesign;
@property(readonly, nonatomic) BOOL allowFaceDetection; // @synthesize allowFaceDetection=_allowFaceDetection;
@property(readonly, nonatomic) BOOL shouldShowAudienceBar; // @synthesize shouldShowAudienceBar=_shouldShowAudienceBar;
@property(readonly, nonatomic) BOOL allowQAndA; // @synthesize allowQAndA=_allowQAndA;
@property(readonly, nonatomic) unsigned int postSchedulingPermission; // @synthesize postSchedulingPermission=_postSchedulingPermission;
@property(readonly, nonatomic) unsigned int privacySettingSavePermission; // @synthesize privacySettingSavePermission=_privacySettingSavePermission;
@property(readonly, nonatomic) unsigned int targetLoadType; // @synthesize targetLoadType=_targetLoadType;
@property(readonly, nonatomic) unsigned int publishPermission; // @synthesize publishPermission=_publishPermission;
@property(readonly, nonatomic) unsigned int dismissalPermission; // @synthesize dismissalPermission=_dismissalPermission;
@property(readonly, nonatomic) unsigned int titleType; // @synthesize titleType=_titleType;
@property(readonly, nonatomic) unsigned int placeholderType; // @synthesize placeholderType=_placeholderType;
@property(readonly, nonatomic) unsigned int zeroRatingSentryType; // @synthesize zeroRatingSentryType=_zeroRatingSentryType;
@property(readonly, nonatomic) unsigned int activityTaggingPermission; // @synthesize activityTaggingPermission=_activityTaggingPermission;
@property(readonly, nonatomic) unsigned int userTaggingPermission; // @synthesize userTaggingPermission=_userTaggingPermission;
@property(readonly, nonatomic) BOOL allowBackDate; // @synthesize allowBackDate=_allowBackDate;
@property(readonly, nonatomic) BOOL allowPlaceAttachment; // @synthesize allowPlaceAttachment=_allowPlaceAttachment;
@property(readonly, nonatomic) BOOL allowPlaceTagging; // @synthesize allowPlaceTagging=_allowPlaceTagging;
@property(readonly, nonatomic) unsigned int implicitPlaceTaggingPermission; // @synthesize implicitPlaceTaggingPermission=_implicitPlaceTaggingPermission;
@property(readonly, copy, nonatomic) FBComposerPublishButtonTextBehaviour *publishButtonTextBehaviour; // @synthesize publishButtonTextBehaviour=_publishButtonTextBehaviour;
@property(readonly, nonatomic) BOOL scrapeLinkAttachments; // @synthesize scrapeLinkAttachments=_scrapeLinkAttachments;
@property(readonly, nonatomic) BOOL allowLinkAttachmentPicker; // @synthesize allowLinkAttachmentPicker=_allowLinkAttachmentPicker;
@property(readonly, nonatomic) BOOL allowLinkAttachments; // @synthesize allowLinkAttachments=_allowLinkAttachments;
@property(readonly, nonatomic) BOOL allowPostOptions; // @synthesize allowPostOptions=_allowPostOptions;
@property(readonly, nonatomic) unsigned int videoAttachmentPermission; // @synthesize videoAttachmentPermission=_videoAttachmentPermission;
@property(readonly, nonatomic) unsigned int photoAttachmentPermission; // @synthesize photoAttachmentPermission=_photoAttachmentPermission;
@property(readonly, nonatomic) BOOL allowHashtags; // @synthesize allowHashtags=_allowHashtags;
@property(readonly, copy, nonatomic) FBComposerDefaultAlbumSelectionBehaviour *defaultAlbumSelectionBehaviour; // @synthesize defaultAlbumSelectionBehaviour=_defaultAlbumSelectionBehaviour;
@property(readonly, nonatomic) unsigned int albumSelectionPermission; // @synthesize albumSelectionPermission=_albumSelectionPermission;
@property(readonly, nonatomic) unsigned int mentioningPermission; // @synthesize mentioningPermission=_mentioningPermission;
@property(readonly, nonatomic) BOOL allowReactionAfterPublication; // @synthesize allowReactionAfterPublication=_allowReactionAfterPublication;
@property(readonly, nonatomic) BOOL allowCachingOfResultantPublication; // @synthesize allowCachingOfResultantPublication=_allowCachingOfResultantPublication;
@property(readonly, nonatomic) BOOL allowDraftRecovery; // @synthesize allowDraftRecovery=_allowDraftRecovery;
@property(readonly, nonatomic) BOOL showProfilePicture; // @synthesize showProfilePicture=_showProfilePicture;
@property(readonly, copy, nonatomic) NSString *composerAnalyticsType; // @synthesize composerAnalyticsType=_composerAnalyticsType;
@property(readonly, copy, nonatomic) NSString *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property(readonly, nonatomic) int checkinSearchType; // @synthesize checkinSearchType=_checkinSearchType;
@property(readonly, nonatomic) unsigned int interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
- (void).cxx_destruct;
- (id)initWithInterfaceStyle:(unsigned int)arg1 checkinSearchType:(int)arg2 publisherIdentifier:(id)arg3 composerAnalyticsType:(id)arg4 showProfilePicture:(BOOL)arg5 allowDraftRecovery:(BOOL)arg6 allowCachingOfResultantPublication:(BOOL)arg7 allowReactionAfterPublication:(BOOL)arg8 mentioningPermission:(unsigned int)arg9 albumSelectionPermission:(unsigned int)arg10 defaultAlbumSelectionBehaviour:(id)arg11 allowHashtags:(BOOL)arg12 photoAttachmentPermission:(unsigned int)arg13 videoAttachmentPermission:(unsigned int)arg14 allowPostOptions:(BOOL)arg15 allowLinkAttachments:(BOOL)arg16 allowLinkAttachmentPicker:(BOOL)arg17 scrapeLinkAttachments:(BOOL)arg18 publishButtonTextBehaviour:(id)arg19 implicitPlaceTaggingPermission:(unsigned int)arg20 allowPlaceTagging:(BOOL)arg21 allowPlaceAttachment:(BOOL)arg22 allowBackDate:(BOOL)arg23 userTaggingPermission:(unsigned int)arg24 activityTaggingPermission:(unsigned int)arg25 zeroRatingSentryType:(unsigned int)arg26 placeholderType:(unsigned int)arg27 titleType:(unsigned int)arg28 dismissalPermission:(unsigned int)arg29 publishPermission:(unsigned int)arg30 targetLoadType:(unsigned int)arg31 privacySettingSavePermission:(unsigned int)arg32 postSchedulingPermission:(unsigned int)arg33 allowQAndA:(BOOL)arg34 shouldShowAudienceBar:(BOOL)arg35 allowFaceDetection:(BOOL)arg36 allowLargeThumbnailsDesign:(BOOL)arg37 userTaggingInMediaPermission:(unsigned int)arg38 authorLoadType:(unsigned int)arg39 privacySettingLoadType:(unsigned int)arg40 initialPrivacySetting:(id)arg41 startAttachmentUploadsImmediately:(BOOL)arg42 allowPhotoDragging:(BOOL)arg43 allowPhotoRemoving:(BOOL)arg44 isEditingReview:(BOOL)arg45 tagAnyoneInMentionsPermission:(unsigned int)arg46 mentionTagSearchContext:(id)arg47 forceDirectedPost:(BOOL)arg48 allowPostExpirationOption:(unsigned int)arg49 launchKeyboardBehavior:(unsigned int)arg50 allowShareDestinationUserEducation:(BOOL)arg51 allowStreamlinedComposer:(BOOL)arg52 forceSimpleSearchForMentions:(BOOL)arg53 minimumLengthOfStatusTextForPostToBeConsideredPublishable:(unsigned int)arg54 forSaleConfiguration:(id)arg55 allowModifyingCaptionsOnPhotos:(BOOL)arg56 cursorLaunchBehavior:(unsigned int)arg57 allowStickersInPhotos:(BOOL)arg58 allowTextInPhotos:(BOOL)arg59 allowChangingDestination:(BOOL)arg60 shouldAllowVideosInAlbums:(BOOL)arg61 postCompositionAllowance:(unsigned int)arg62 allowDisablingFeaturesInComposerDueToStartingStyle:(BOOL)arg63 allowMajorLifeEventTitleEditing:(BOOL)arg64 allowMagicStories:(BOOL)arg65 allowStickersAsAttachments:(BOOL)arg66 allowFollowerTargeting:(BOOL)arg67 showRedSpaceToggle:(BOOL)arg68 allowFeedTopic:(BOOL)arg69;

@end
