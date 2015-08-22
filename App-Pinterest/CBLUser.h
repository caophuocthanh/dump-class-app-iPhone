//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLCoreModelObject.h"

@class CBLRemoteModelCollection, CBLVerifiedIdentityData, NSArray, NSDate, NSString, NSURL;

@interface CBLUser : CBLCoreModelObject
{
    BOOL _isDomainVerified;
    BOOL _showImpressum;
    BOOL _blockedByMe;
    BOOL _isExplicitlyFollowedByMe;
    BOOL _isImplicitlyFollowedByMe;
    BOOL _isPartner;
    CBLRemoteModelCollection *_boards;
    CBLRemoteModelCollection *_secretBoards;
    CBLRemoteModelCollection *_allBoards;
    CBLRemoteModelCollection *_pins;
    CBLRemoteModelCollection *_likes;
    CBLRemoteModelCollection *_followers;
    CBLRemoteModelCollection *_following;
    CBLRemoteModelCollection *_boardsFollowing;
    CBLRemoteModelCollection *_interestsFollowing;
    CBLRemoteModelCollection *_merchants;
    NSDate *_createdAt;
    NSString *_username;
    NSString *_fullName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    NSString *_tag;
    NSString *_location;
    NSString *_about;
    NSArray *_repinsFrom;
    NSURL *_imageSmallURL;
    NSURL *_imageMediumURL;
    NSURL *_imageLargeURL;
    NSURL *_websiteURL;
    NSURL *_facebookURL;
    NSURL *_twitterURL;
    NSArray *_pinThumbnailURLs;
    NSURL *_impressumURL;
    CBLVerifiedIdentityData *_verifiedIdentity;
    int _followerCount;
    int _followingCount;
    int _boardCount;
    int _pinCount;
    int _likeCount;
    int _interestFollowingCount;
    NSString *_canonicalMerchantDomain;
}

+ (id)additionalDetailFields;
+ (id)propertyArrayElementClasses;
+ (id)propertyTransformerClasses;
+ (id)propertyAliases;
+ (id)remoteEntityName;
@property(readonly, copy, nonatomic) NSString *canonicalMerchantDomain; // @synthesize canonicalMerchantDomain=_canonicalMerchantDomain;
@property(readonly, nonatomic) BOOL isPartner; // @synthesize isPartner=_isPartner;
@property(readonly, nonatomic) BOOL isImplicitlyFollowedByMe; // @synthesize isImplicitlyFollowedByMe=_isImplicitlyFollowedByMe;
@property(readonly, nonatomic) BOOL isExplicitlyFollowedByMe; // @synthesize isExplicitlyFollowedByMe=_isExplicitlyFollowedByMe;
@property(nonatomic, getter=isBlockedByMe) BOOL blockedByMe; // @synthesize blockedByMe=_blockedByMe;
@property(nonatomic) int interestFollowingCount; // @synthesize interestFollowingCount=_interestFollowingCount;
@property(nonatomic) int likeCount; // @synthesize likeCount=_likeCount;
@property(nonatomic) int pinCount; // @synthesize pinCount=_pinCount;
@property(nonatomic) int boardCount; // @synthesize boardCount=_boardCount;
@property(nonatomic) int followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) int followerCount; // @synthesize followerCount=_followerCount;
@property(readonly, nonatomic) CBLVerifiedIdentityData *verifiedIdentity; // @synthesize verifiedIdentity=_verifiedIdentity;
@property(retain, nonatomic) NSURL *impressumURL; // @synthesize impressumURL=_impressumURL;
@property(readonly, nonatomic) BOOL showImpressum; // @synthesize showImpressum=_showImpressum;
@property(readonly, nonatomic) BOOL isDomainVerified; // @synthesize isDomainVerified=_isDomainVerified;
@property(retain, nonatomic) NSArray *pinThumbnailURLs; // @synthesize pinThumbnailURLs=_pinThumbnailURLs;
@property(retain, nonatomic) NSURL *twitterURL; // @synthesize twitterURL=_twitterURL;
@property(retain, nonatomic) NSURL *facebookURL; // @synthesize facebookURL=_facebookURL;
@property(retain, nonatomic) NSURL *websiteURL; // @synthesize websiteURL=_websiteURL;
@property(retain, nonatomic) NSURL *imageLargeURL; // @synthesize imageLargeURL=_imageLargeURL;
@property(retain, nonatomic) NSURL *imageMediumURL; // @synthesize imageMediumURL=_imageMediumURL;
@property(retain, nonatomic) NSURL *imageSmallURL; // @synthesize imageSmallURL=_imageSmallURL;
@property(retain, nonatomic) NSArray *repinsFrom; // @synthesize repinsFrom=_repinsFrom;
@property(copy, nonatomic) NSString *about; // @synthesize about=_about;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
- (void).cxx_destruct;
- (void)reportWithReasonKey:(id)arg1 explanation:(id)arg2 success:(CDUnknownBlockType)arg3 andFailure:(CDUnknownBlockType)arg4;
- (void)setBlockedByMe:(BOOL)arg1 withSuccess:(CDUnknownBlockType)arg2 andFailure:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isFollowedByMe) BOOL followedByMe;
@property(readonly, nonatomic) CBLRemoteModelCollection *merchants; // @synthesize merchants=_merchants;
@property(readonly, nonatomic) CBLRemoteModelCollection *interestsFollowing; // @synthesize interestsFollowing=_interestsFollowing;
@property(readonly, nonatomic) CBLRemoteModelCollection *following; // @synthesize following=_following;
@property(readonly, nonatomic) CBLRemoteModelCollection *followers; // @synthesize followers=_followers;
@property(readonly, nonatomic) CBLRemoteModelCollection *likes; // @synthesize likes=_likes;
@property(readonly, nonatomic) CBLRemoteModelCollection *pins; // @synthesize pins=_pins;
@property(readonly, nonatomic) CBLRemoteModelCollection *boardsFollowing; // @synthesize boardsFollowing=_boardsFollowing;
@property(readonly, nonatomic) CBLRemoteModelCollection *allBoards; // @synthesize allBoards=_allBoards;
@property(readonly, nonatomic) CBLRemoteModelCollection *secretBoards; // @synthesize secretBoards=_secretBoards;
@property(readonly, nonatomic) CBLRemoteModelCollection *boards; // @synthesize boards=_boards;
@property(readonly, nonatomic) NSString *websiteDisplay;
@property(readonly, nonatomic) BOOL isActiveUser;
- (id)resourceURL;
@property(readonly, copy, nonatomic) NSString *firstNameWithLastInitial;
- (id)description;

@end
