//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

#import "IGFollowButtonDelegate.h"

@class IGFavoriteButton, IGFollowButton, IGKVOHandle, IGProfilePictureImageView, IGUser, NSString, UIButton, UIImageView, UILabel, UIView;

@interface IGUserCell : IGPlainTableViewCell <IGFollowButtonDelegate>
{
    BOOL _showByline;
    BOOL _showShortByline;
    BOOL _showVerifiedBadge;
    IGUser *_user;
    int _userCellAccessoryType;
    IGProfilePictureImageView *_profilePicture;
    IGFollowButton *_followButton;
    CDUnknownBlockType _followActionBlock;
    int _layoutOption;
    float _textLabelSpacing;
    id <IGUserCellDelegate> _delegate;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
    IGFavoriteButton *_favoriteButton;
    UIButton *_dismissButton;
    IGKVOHandle *_favoriteButtonWidthListener;
    UILabel *_bylineLabel;
    UIView *_topLineSeperator;
    UIImageView *_verifiedBadgeImageView;
    struct UIEdgeInsets _insets;
}

+ (float)defaultCellSidePadding;
+ (struct UIEdgeInsets)defaultCellSeparatorInsets;
+ (float)defaultCellHeightWithByline;
+ (float)defaultCellHeight;
@property(retain, nonatomic) UIImageView *verifiedBadgeImageView; // @synthesize verifiedBadgeImageView=_verifiedBadgeImageView;
@property(retain, nonatomic) UIView *topLineSeperator; // @synthesize topLineSeperator=_topLineSeperator;
@property(retain, nonatomic) UILabel *bylineLabel; // @synthesize bylineLabel=_bylineLabel;
@property(retain, nonatomic) IGKVOHandle *favoriteButtonWidthListener; // @synthesize favoriteButtonWidthListener=_favoriteButtonWidthListener;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGFavoriteButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) BOOL showVerifiedBadge; // @synthesize showVerifiedBadge=_showVerifiedBadge;
@property(nonatomic) BOOL showShortByline; // @synthesize showShortByline=_showShortByline;
@property(nonatomic) BOOL showByline; // @synthesize showByline=_showByline;
@property(nonatomic) __weak id <IGUserCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float textLabelSpacing; // @synthesize textLabelSpacing=_textLabelSpacing;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) int layoutOption; // @synthesize layoutOption=_layoutOption;
@property(copy, nonatomic) CDUnknownBlockType followActionBlock; // @synthesize followActionBlock=_followActionBlock;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) IGProfilePictureImageView *profilePicture; // @synthesize profilePicture=_profilePicture;
@property(nonatomic) int userCellAccessoryType; // @synthesize userCellAccessoryType=_userCellAccessoryType;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)onFollowButtonTapped:(id)arg1;
- (void)onDismissButtonTapped:(id)arg1;
- (void)layoutSubviews;
- (void)setShowDismissButton:(BOOL)arg1;
- (void)setupVerifiedBadgeImageView;
- (void)setupBylineLabel;
- (void)setUpFavoriteButton;
- (void)setUpFollowButton;
- (void)followButtonDidUpdateButtonState:(id)arg1;
- (void)setShowTopSeperator:(BOOL)arg1 withEdgeInsets:(struct UIEdgeInsets)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 analyticsDelegate:(id)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
