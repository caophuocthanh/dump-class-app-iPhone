//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSIndexPath, UIButton, UIImageView, UILabel, UIView, UserAvatarVerified;

@interface ResReviewTableCell : UITableViewCell
{
    float cellHeight;
    BOOL reviewHasPhoto;
    BOOL _isCheckin;
    UIButton *accessoryButton;
    UIButton *usefulButton;
    UILabel *userNameLabel;
    UIButton *photoCountButton;
    UIButton *reviewCountButton;
    UIView *reviewContainerView;
    UILabel *ratingLabel;
    UILabel *titleLabel;
    UILabel *textLabel;
    UIView *viewLastCommentAndUserLike;
    UIButton *reviewCommentButton;
    UIButton *reviewLikeButton;
    UILabel *reviewDateLabel;
    UILabel *reviewLikeLabel;
    UILabel *reviewCommentLabel;
    UIImageView *videoIndicator;
    NSArray *reviewPhotos;
    UserAvatarVerified *_userAvatarVerified;
    NSIndexPath *_indexPath;
    id <ResReviewTableCellDelegate> _delegate;
    UIView *_imageContainer;
}

@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(nonatomic) __weak id <ResReviewTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) BOOL isCheckin; // @synthesize isCheckin=_isCheckin;
@property(retain, nonatomic) UserAvatarVerified *userAvatarVerified; // @synthesize userAvatarVerified=_userAvatarVerified;
@property(retain, nonatomic) NSArray *reviewPhotos; // @synthesize reviewPhotos;
@property(retain, nonatomic) UIImageView *videoIndicator; // @synthesize videoIndicator;
@property(retain, nonatomic) UILabel *reviewCommentLabel; // @synthesize reviewCommentLabel;
@property(retain, nonatomic) UILabel *reviewLikeLabel; // @synthesize reviewLikeLabel;
@property(retain, nonatomic) UILabel *reviewDateLabel; // @synthesize reviewDateLabel;
@property(retain, nonatomic) UIButton *reviewLikeButton; // @synthesize reviewLikeButton;
@property(retain, nonatomic) UIButton *reviewCommentButton; // @synthesize reviewCommentButton;
@property(retain, nonatomic) UIView *viewLastCommentAndUserLike; // @synthesize viewLastCommentAndUserLike;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UILabel *ratingLabel; // @synthesize ratingLabel;
@property(retain, nonatomic) UIView *reviewContainerView; // @synthesize reviewContainerView;
@property(retain, nonatomic) UIButton *reviewCountButton; // @synthesize reviewCountButton;
@property(retain, nonatomic) UIButton *photoCountButton; // @synthesize photoCountButton;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel;
@property(retain, nonatomic) UIButton *usefulButton; // @synthesize usefulButton;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton;
- (void).cxx_destruct;
- (void)didTouchShowAllPhoto:(id)arg1;
- (void)prepareForReuse;
- (void)didTouchPhotoButton:(id)arg1;
- (void)setReviewCommentLabelText:(id)arg1;
- (void)setReviewLikeLabelText:(id)arg1;
- (void)setReviewCommentCount:(unsigned int)arg1;
- (void)setReviewLikeCount:(unsigned int)arg1;
- (void)setReviewTitleButtonCommentCount:(id)arg1;
- (void)setReviewTitleButtonLikeCount:(id)arg1;
- (void)setReviewRating:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setReviewTitle:(id)arg1;
- (void)setReviewDate:(id)arg1;
- (void)setReviewUserPhotoCount:(unsigned int)arg1;
- (void)setReviewUserReviewCount:(unsigned int)arg1;
- (void)setReviewUserName:(id)arg1;
- (void)setButtonReviewPhotoThumbs:(id)arg1 withTotalPhoto:(unsigned int)arg2;
- (BOOL)setReviewPhotoThumbs:(id)arg1 withTotalPhoto:(unsigned int)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCellHeight:(float)arg1 withPhoto:(BOOL)arg2;
- (void)showVideoIndicator:(BOOL)arg1;
- (void)resetFrame;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
