//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGActionSheetDelegate.h"

@class IGFeedItem, IGPageCellPageControl, IGSponsoredButton, NSString, UIButton, UINavigationController, UIView;

@interface IGFeedItemActionCell : UICollectionViewCell <IGActionSheetDelegate>
{
    BOOL _sponsoredPostAllowed;
    IGFeedItem *_feedItem;
    UIButton *_likeButton;
    UIButton *_commentButton;
    UIButton *_moreButton;
    UIButton *_sendButton;
    UIButton *_customizableButton;
    IGPageCellPageControl *_pageControl;
    UINavigationController *_navigationController;
    int _accessoryViewType;
    id <IGFeedItemActionCellDelegate> _delegate;
    id <IGFeedItemLoggingProviderDelegate> _loggingDelegate;
    UIView *_lineView;
    IGSponsoredButton *_sponsoredButton;
}

+ (float)height;
@property(retain, nonatomic) IGSponsoredButton *sponsoredButton; // @synthesize sponsoredButton=_sponsoredButton;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak id <IGFeedItemLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(nonatomic) __weak id <IGFeedItemActionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL sponsoredPostAllowed; // @synthesize sponsoredPostAllowed=_sponsoredPostAllowed;
@property(nonatomic) int accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) IGPageCellPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIButton *customizableButton; // @synthesize customizableButton=_customizableButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void).cxx_destruct;
- (id)accessibleElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)layoutSubviews;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)onCustomizableButtonPressed:(id)arg1;
- (void)onSendButtonPressed:(id)arg1;
- (void)onMoreButtonPressed:(id)arg1;
- (void)onCommentButtonPressed:(id)arg1;
- (void)onLikeButtonPressed:(id)arg1;
- (void)pageControlDidChangeValue:(id)arg1;
- (struct UIEdgeInsets)buttonContentEdgeInsets;
- (void)pushComments;
- (void)updateLikeButton;
- (float)seperatorLineHInset;
- (void)setCustomizableButtonHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

