//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FBPassthroughOverlayView : UIView
{
    id <FBPassthroughOverlayViewDelegate> _delegate;
    UIView *_passthroughView;
}

@property(readonly, nonatomic) UIView *passthroughView; // @synthesize passthroughView=_passthroughView;
@property(nonatomic) __weak id <FBPassthroughOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithPassthroughView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

