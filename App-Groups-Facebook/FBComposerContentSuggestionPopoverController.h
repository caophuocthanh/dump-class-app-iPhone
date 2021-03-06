//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerContentSuggestionPopoverViewDelegate.h"

@class FBComposerContentSuggestion, FBComposerContentSuggestionPopoverView, FBPopoverView, FBUserSession, POPSpringAnimation, UIView;

@interface FBComposerContentSuggestionPopoverController : NSObject <FBComposerContentSuggestionPopoverViewDelegate>
{
    FBPopoverView *_popoverView;
    FBComposerContentSuggestionPopoverView *_composerContentSuggestionPopoverView;
    UIView *_parentView;
    id <FBComposerContentSuggestionPopoverControllerDelegate> _delegate;
    FBUserSession *_session;
    struct CGPoint _viewPosition;
    POPSpringAnimation *_scaleAnimation;
    FBComposerContentSuggestion *_composition;
}

@property(readonly, copy, nonatomic) FBComposerContentSuggestion *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)_stopAnimating;
- (void)_dismissPopoverAnimated:(BOOL)arg1;
- (void)_presentPopoverAnimated:(BOOL)arg1 atPointInParentView:(struct CGPoint)arg2;
- (void)didTapContentSuggestionCancelButton:(id)arg1;
- (void)didTapContentSuggestionBody:(id)arg1;
- (struct CGSize)_contentSizeForViewInPopover;
- (void)_layout:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL popoverVisible;
- (void)updatePositionAtPointInParentView:(struct CGPoint)arg1;
- (void)hide:(BOOL)arg1;
- (void)showWithComposerContentSuggestionComposition:(id)arg1 atPointInParentView:(struct CGPoint)arg2 animated:(BOOL)arg3;
- (id)initWithParentView:(id)arg1 delegate:(id)arg2 session:(id)arg3;

@end

