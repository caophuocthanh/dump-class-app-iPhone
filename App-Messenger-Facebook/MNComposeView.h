//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNActionNuxPresenter.h"
#import "UIGestureRecognizerDelegate.h"

@class FBMGrowingTextView, FBMStringWithRedactedDescription, FBMultiMediaAttachmentsView, FBPlatformShareView, MNBaseNuxView, MNComposerActionView, MNTouchBeganGestureRecognizer, NSAttributedString, NSObject<FBMGrowingTextViewDelegate>, NSString, UIButton, UIImageView, UITapGestureRecognizer;

@interface MNComposeView : UIView <UIGestureRecognizerDelegate, MNActionNuxPresenter>
{
    UIView *_maskView;
    FBMGrowingTextView *_textView;
    UIButton *_searchButton;
    MNComposerActionView *_composerActionView;
    FBMultiMediaAttachmentsView *_mediaAttachmentsView;
    UIView *_attachmentSeparator;
    MNBaseNuxView *_actionNuxView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIButton *_emojiButton;
    unsigned int _maxNumberOfLines;
    id <MNComposeViewDelegate> _delegate;
    UIImageView *_searchImageView;
    NSString *_highlightedTextAttribute;
    unsigned int _searchButtonOption;
    MNTouchBeganGestureRecognizer *_inputFocusGestureRecognizer;
    FBPlatformShareView *_shareAttachmentView;
    NSString *_emojiButtonLabel;
    FBMStringWithRedactedDescription *_initialText;
    NSAttributedString *_initialAttributedText;
    NSObject<FBMGrowingTextViewDelegate> *_textViewDelegate;
    id <FBMultiMediaAttachmentsViewDelegate> _attachmentsViewDelegate;
    struct UIEdgeInsets _contentEdgeInsets;
}

@property(nonatomic) __weak id <FBMultiMediaAttachmentsViewDelegate> attachmentsViewDelegate; // @synthesize attachmentsViewDelegate=_attachmentsViewDelegate;
@property(nonatomic) __weak NSObject<FBMGrowingTextViewDelegate> *textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(copy, nonatomic) NSAttributedString *initialAttributedText; // @synthesize initialAttributedText=_initialAttributedText;
@property(copy, nonatomic) FBMStringWithRedactedDescription *initialText; // @synthesize initialText=_initialText;
@property(copy, nonatomic) NSString *emojiButtonLabel; // @synthesize emojiButtonLabel=_emojiButtonLabel;
@property(retain, nonatomic) FBPlatformShareView *shareAttachmentView; // @synthesize shareAttachmentView=_shareAttachmentView;
@property(readonly, nonatomic) MNTouchBeganGestureRecognizer *inputFocusGestureRecognizer; // @synthesize inputFocusGestureRecognizer=_inputFocusGestureRecognizer;
@property(readonly, nonatomic) FBMultiMediaAttachmentsView *mediaAttachmentsView; // @synthesize mediaAttachmentsView=_mediaAttachmentsView;
@property(readonly, nonatomic) FBMGrowingTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) unsigned int searchButtonOption; // @synthesize searchButtonOption=_searchButtonOption;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(copy, nonatomic) NSString *highlightedTextAttribute; // @synthesize highlightedTextAttribute=_highlightedTextAttribute;
@property(readonly, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(readonly, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(nonatomic) __weak id <MNComposeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
- (void).cxx_destruct;
- (void)_emojiPressed:(id)arg1;
- (void)_initEmojiButtonIfNecessary;
- (void)setPlaceholderText:(id)arg1;
- (id)presentedNuxView;
- (void)dismissActionNuxView:(id)arg1;
- (void)presentActionNuxView:(id)arg1;
- (void)_textViewTapped:(id)arg1;
- (void)_searchPressed:(id)arg1;
- (void)_handleInputFocus:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)keyboardHostView;
- (void)createAttachmentSeparatorIfNeeded;
- (void)createAttachmentsViewIfNeeded;
- (struct CGRect)_rectForTextViewInBubbleViewBounds:(struct CGRect)arg1 attachmentHeight:(float)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)_rectForContentInBounds:(struct CGRect)arg1;
- (struct CGRect)_rectForAttachmentWithContentFrame:(struct CGRect)arg1 margins:(struct UIEdgeInsets *)arg2;
- (void)_layoutNuxView;
- (void)layoutSubviews;
- (void)_updateSearchButton;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (id)text;
- (void)setText:(id)arg1;
- (void)setUpTextViewIfNeeded;
- (void)_tearDownTextView;
- (void)reset;
- (void)_initInputFocusGestureRecognizer;
- (void)_initTextAccessoryViews:(CDUnknownBlockType)arg1;
- (void)setSearchButtonHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSearchMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_initSearchButton;
- (void)_initWithComposerActionView:(id)arg1;
- (void)dealloc;
- (id)initWithComposerActionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

