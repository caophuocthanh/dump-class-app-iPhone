//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMessageVideoViewNode, UIView, UIView<MNRoundedCornersView>;

@protocol MNMessageVideoViewNodeDelegate <NSObject>
- (struct CGRect)closedFrameForMaskOfView:(UIView *)arg1;
- (UIView<MNRoundedCornersView> *)maskForView:(UIView *)arg1;
- (struct CGRect)videoNodeCloseFrame:(MNMessageVideoViewNode *)arg1;
- (UIView *)videoNodeCloseView:(MNMessageVideoViewNode *)arg1;
- (UIView *)modalPresentationView:(MNMessageVideoViewNode *)arg1;
@end

