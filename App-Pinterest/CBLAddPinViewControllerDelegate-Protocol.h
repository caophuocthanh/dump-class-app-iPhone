//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLPresentedViewControllerDelegate.h"
#import "NSObject.h"

@class CBLAddPinViewController, CBLBoard, CBLPin;

@protocol CBLAddPinViewControllerDelegate <NSObject, CBLPresentedViewControllerDelegate>

@optional
- (void)addPinViewControllerIsPinning:(CBLAddPinViewController *)arg1;
- (void)addPinViewController:(CBLAddPinViewController *)arg1 didPin:(CBLPin *)arg2 toBoard:(CBLBoard *)arg3;
- (void)addPinViewControllerDidFail:(CBLAddPinViewController *)arg1;
- (void)addPinViewControllerDidCancel:(CBLAddPinViewController *)arg1;
@end

