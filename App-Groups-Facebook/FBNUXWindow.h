//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@class UIViewController;

@interface FBNUXWindow : UIWindow
{
    UIViewController *_interactiveViewController;
    id <FBNUXWindowDelegate> _nuxWindowDelegate;
}

@property(nonatomic) __weak id <FBNUXWindowDelegate> nuxWindowDelegate; // @synthesize nuxWindowDelegate=_nuxWindowDelegate;
@property(retain, nonatomic) UIViewController *interactiveViewController; // @synthesize interactiveViewController=_interactiveViewController;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

