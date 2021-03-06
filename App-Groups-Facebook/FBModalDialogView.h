//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBFIGConfigurable.h"

@class FBFacepileView, NSString, UIButton, UIImageView, UILabel;

@interface FBModalDialogView : UIView <FBFIGConfigurable>
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_imageView;
    FBFacepileView *_facepileView;
    UILabel *_facepileTitleLabel;
    UIView *_separatorView;
    UIButton *_primaryButton;
    UIButton *_secondaryButton;
    UIButton *_tertiaryButton;
    unsigned int _buttonType;
    UIButton *_dismissButton;
    struct {
        unsigned int delegateDidSelectPrimaryButton:1;
        unsigned int delegateDidSelectSecondaryButton:1;
        unsigned int delegateDidSelectTertiaryButton:1;
        unsigned int delegateDidSelectDismissButton:1;
    } _delegateFlags;
    id <FBModalDialogViewDelegate> _delegate;
    CDUnknownBlockType _buttonHandler;
}

+ (id)defaultFIGConfig;
+ (id)newWithConfig:(id)arg1;
+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType buttonHandler; // @synthesize buttonHandler=_buttonHandler;
@property(nonatomic) __weak id <FBModalDialogViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_dismissButtonPressed:(id)arg1;
- (void)_tertiaryButtonPressed:(id)arg1;
- (void)_secondaryButtonPressed:(id)arg1;
- (void)_primaryButtonPressed:(id)arg1;
- (float)_layoutButtonsViewAtOrigin:(struct CGPoint)arg1 constrainedToSize:(struct CGSize)arg2;
- (float)_layoutSeparatorViewAtOrigin:(struct CGPoint)arg1 constrainedToSize:(struct CGSize)arg2;
- (float)_layoutCustomViewAtOrigin:(struct CGPoint)arg1 constrainedToSize:(struct CGSize)arg2;
- (float)_layoutFacepileViewAtOrigin:(struct CGPoint)arg1 constrainedToSize:(struct CGSize)arg2;
- (float)_layoutLabel:(id)arg1 title:(id)arg2 atOrigin:(struct CGPoint)arg3 constrainedToSize:(struct CGSize)arg4;
- (float)_layoutImageViewAtOrigin:(struct CGPoint)arg1 constrainedToSize:(struct CGSize)arg2;
- (void)_layoutDismissButton;
- (struct CGSize)_layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUpPrimaryButton;
- (void)setUpSeparatorView;
- (void)oldConfig:(id)arg1 configDidChange:(id)arg2;
- (id)_init;
- (void)applyConfig:(id)arg1;
- (id)config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

