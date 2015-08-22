//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "UIGestureRecognizerDelegate.h"

@class CAShapeLayer, IGTouchGestureRecognizer, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGQuickCamCaptureButton : UIButton <UIGestureRecognizerDelegate>
{
    id <IGQuickCamCaptureButtonDelegate> _delegate;
    int _buttonState;
    float _videoRecordProgress;
    CAShapeLayer *_progress;
    UIView *_background;
    UIView *_confirmOverlay;
    IGTouchGestureRecognizer *_touch;
    UILongPressGestureRecognizer *_longPress;
    UITapGestureRecognizer *_tap;
    UIView *_innerCircle;
}

@property(retain, nonatomic) UIView *innerCircle; // @synthesize innerCircle=_innerCircle;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) IGTouchGestureRecognizer *touch; // @synthesize touch=_touch;
@property(retain, nonatomic) UIView *confirmOverlay; // @synthesize confirmOverlay=_confirmOverlay;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) CAShapeLayer *progress; // @synthesize progress=_progress;
@property(nonatomic) float videoRecordProgress; // @synthesize videoRecordProgress=_videoRecordProgress;
@property(nonatomic) int buttonState; // @synthesize buttonState=_buttonState;
@property(nonatomic) __weak id <IGQuickCamCaptureButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)touch:(id)arg1;
- (void)longPress:(id)arg1;
- (void)tap:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

