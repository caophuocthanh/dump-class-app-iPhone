//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString;

@interface MNPopNavigationFallAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    int _navigationOperation;
}

- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithNavigationOperation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
