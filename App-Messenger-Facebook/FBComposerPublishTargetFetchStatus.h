//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface FBComposerPublishTargetFetchStatus : FBValueObject <NSCopying, NSCoding>
{
    BOOL _hasFetchedGraphQLID;
    BOOL _hasFetchedTargetType;
    BOOL _hasFetchedTargetDescription;
    BOOL _hasFetchedName;
    BOOL _hasFetchedDisplayName;
    BOOL _hasFetchedProfilePictureURI;
    BOOL _hasFetchedCanViewerPostMediaToTimeline;
    BOOL _hasFetchedAllowMultiPhotoAttachments;
    BOOL _hasFetchedAllowMultiMediaAttachments;
    BOOL _hasFetchedFixedPrivacyExplanation;
    BOOL _hasFetchedAlbumMediaOwnerIdentifier;
    BOOL _hasFetchedAlbumMediaOwnerType;
    BOOL _hasFetchedAlbumType;
}

@property(readonly, nonatomic) BOOL hasFetchedAlbumType; // @synthesize hasFetchedAlbumType=_hasFetchedAlbumType;
@property(readonly, nonatomic) BOOL hasFetchedAlbumMediaOwnerType; // @synthesize hasFetchedAlbumMediaOwnerType=_hasFetchedAlbumMediaOwnerType;
@property(readonly, nonatomic) BOOL hasFetchedAlbumMediaOwnerIdentifier; // @synthesize hasFetchedAlbumMediaOwnerIdentifier=_hasFetchedAlbumMediaOwnerIdentifier;
@property(readonly, nonatomic) BOOL hasFetchedFixedPrivacyExplanation; // @synthesize hasFetchedFixedPrivacyExplanation=_hasFetchedFixedPrivacyExplanation;
@property(readonly, nonatomic) BOOL hasFetchedAllowMultiMediaAttachments; // @synthesize hasFetchedAllowMultiMediaAttachments=_hasFetchedAllowMultiMediaAttachments;
@property(readonly, nonatomic) BOOL hasFetchedAllowMultiPhotoAttachments; // @synthesize hasFetchedAllowMultiPhotoAttachments=_hasFetchedAllowMultiPhotoAttachments;
@property(readonly, nonatomic) BOOL hasFetchedCanViewerPostMediaToTimeline; // @synthesize hasFetchedCanViewerPostMediaToTimeline=_hasFetchedCanViewerPostMediaToTimeline;
@property(readonly, nonatomic) BOOL hasFetchedProfilePictureURI; // @synthesize hasFetchedProfilePictureURI=_hasFetchedProfilePictureURI;
@property(readonly, nonatomic) BOOL hasFetchedDisplayName; // @synthesize hasFetchedDisplayName=_hasFetchedDisplayName;
@property(readonly, nonatomic) BOOL hasFetchedName; // @synthesize hasFetchedName=_hasFetchedName;
@property(readonly, nonatomic) BOOL hasFetchedTargetDescription; // @synthesize hasFetchedTargetDescription=_hasFetchedTargetDescription;
@property(readonly, nonatomic) BOOL hasFetchedTargetType; // @synthesize hasFetchedTargetType=_hasFetchedTargetType;
@property(readonly, nonatomic) BOOL hasFetchedGraphQLID; // @synthesize hasFetchedGraphQLID=_hasFetchedGraphQLID;
- (id)initWithHasFetchedGraphQLID:(BOOL)arg1 hasFetchedTargetType:(BOOL)arg2 hasFetchedTargetDescription:(BOOL)arg3 hasFetchedName:(BOOL)arg4 hasFetchedDisplayName:(BOOL)arg5 hasFetchedProfilePictureURI:(BOOL)arg6 hasFetchedCanViewerPostMediaToTimeline:(BOOL)arg7 hasFetchedAllowMultiPhotoAttachments:(BOOL)arg8 hasFetchedAllowMultiMediaAttachments:(BOOL)arg9 hasFetchedFixedPrivacyExplanation:(BOOL)arg10 hasFetchedAlbumMediaOwnerIdentifier:(BOOL)arg11 hasFetchedAlbumMediaOwnerType:(BOOL)arg12 hasFetchedAlbumType:(BOOL)arg13;

@end
