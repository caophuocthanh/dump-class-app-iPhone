//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface MNPhotoOverlayView : UIView
{
    UIButton *_shareButton;
    id <MNPhotoOverlayViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPhotoOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didTapShareButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

