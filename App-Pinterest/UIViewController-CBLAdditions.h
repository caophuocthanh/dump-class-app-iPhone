//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class CBLBaseViewControllerPresenter;

@interface UIViewController (CBLAdditions)
@property(retain, nonatomic) id <UIViewControllerTransitioningDelegate> cblModalTransitionController;
@property(retain, nonatomic) CBLBaseViewControllerPresenter *presenter; // @dynamic presenter;
- (void)forcePopoverResize;
@end
