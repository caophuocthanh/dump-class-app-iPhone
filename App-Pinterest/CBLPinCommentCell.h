//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionTableViewCell.h"

#import "TTTAttributedLabelDelegate.h"

@class CBLComment, CBLOuterShadowedView, CBLPin, NSString, TTTAttributedLabel, UIButton, UIImageView, UILabel;

@interface CBLPinCommentCell : CBLTraitCollectionTableViewCell <TTTAttributedLabelDelegate>
{
    id <CBLPinCommentCellDelegate> _delegate;
    CBLComment *_comment;
    CBLPin *_pin;
    CBLOuterShadowedView *_cardView;
    UIImageView *_avatarImageView;
    UILabel *_commenterNameLabel;
    TTTAttributedLabel *_commentLabel;
    UILabel *_timeAgoLabel;
    UIButton *_deleteButton;
}

+ (BOOL)shouldShowDeleteButtonForComment:(id)arg1 onPin:(id)arg2;
+ (id)timeAgoLabel;
+ (id)commentLabel;
+ (id)commenterNameLabel;
+ (float)commentLabelWidthForComment:(id)arg1 width:(float)arg2;
+ (float)totalHeightForComment:(id)arg1 forWidth:(float)arg2;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UILabel *timeAgoLabel; // @synthesize timeAgoLabel=_timeAgoLabel;
@property(retain, nonatomic) TTTAttributedLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *commenterNameLabel; // @synthesize commenterNameLabel=_commenterNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) CBLOuterShadowedView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) CBLComment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <CBLPinCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)deleteButtonPressed:(id)arg1;
- (void)commenterTapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
