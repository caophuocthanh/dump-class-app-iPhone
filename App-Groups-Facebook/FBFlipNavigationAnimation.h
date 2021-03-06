//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "POPAnimationDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UINavigationController, UIViewController;

@interface FBFlipNavigationAnimation : NSObject <POPAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    UINavigationController *_navigationController;
    UIViewController *_fromViewController;
    UIViewController *_toViewController;
    int _operation;
}

@property(nonatomic) int operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)pop_animationDidApply:(id)arg1;
- (id)_flipAnimationProperty;
- (id)_rotationAnimation;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

