//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGCoreTextLinkHandler.h"

@class IGCommentModel, IGCoreTextView, IGFeedItem, NSString, UIImageView, UILabel, UINavigationController;

@interface IGFeedItemTextCell : UICollectionViewCell <IGCoreTextLinkHandler>
{
    BOOL _showTimeStamp;
    BOOL _enableTapToViewComments;
    IGFeedItem *_feedItem;
    IGCommentModel *_comment;
    int _cellType;
    UINavigationController *_navigationController;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    float _textHorizontalPadding;
    UIImageView *_iconView;
    IGCoreTextView *_coreTextView;
    UILabel *_timeStampLabel;
}

+ (float)heightWithStyledString:(id)arg1 showTimeStamp:(BOOL)arg2 constrainedToWidth:(float)arg3;
@property(retain, nonatomic) UILabel *timeStampLabel; // @synthesize timeStampLabel=_timeStampLabel;
@property(retain, nonatomic) IGCoreTextView *coreTextView; // @synthesize coreTextView=_coreTextView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) BOOL enableTapToViewComments; // @synthesize enableTapToViewComments=_enableTapToViewComments;
@property(nonatomic) float textHorizontalPadding; // @synthesize textHorizontalPadding=_textHorizontalPadding;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) BOOL showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) int cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) IGCommentModel *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)accessibleElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)updateIconWithType:(int)arg1;
- (void)handleTapOnString:(id)arg1 URL:(id)arg2;
- (id)styledStringforAddCommentWithFeedItem:(id)arg1;
- (id)styledStringForExploreContextWithFeedItem:(id)arg1;
- (id)styledStringForLayoutAttributionWithFeedItem:(id)arg1;
- (id)styledStringForHyperlapseAttributionWithFeedItem:(id)arg1;
- (id)styledStringForMoreCommentsWithFeedItem:(id)arg1;
- (id)styledStringForLikesWithFeedItem:(id)arg1;
- (int)iconTypeForCaption;
- (int)iconTypeForLikes;
- (unsigned int)commentStyledStringType;
- (void)buildCommentReplyWithUser:(id)arg1;
- (void)pushCommentsPrefilledWithText:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

