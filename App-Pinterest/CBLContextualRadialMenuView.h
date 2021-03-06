//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CBLContextalMenuTargetPoint, CBLContextualRadialMenuButton;

@interface CBLContextualRadialMenuView : UIView
{
    BOOL _alwaysShowButtonText;
    BOOL _showTarget;
    id <CBLContextualRadialMenuViewDelegate> _delegate;
    int _mode;
    CBLContextualRadialMenuButton *_button1;
    CBLContextualRadialMenuButton *_button2;
    CBLContextualRadialMenuButton *_button3;
    CBLContextalMenuTargetPoint *_targetView;
    float _radius;
    float _button1Angle;
    float _button2Angle;
    float _button3Angle;
    struct CGPoint _targetPoint;
    struct CGPoint _panningPoint;
    struct CGPoint _button1Point;
    struct CGPoint _button2Point;
    struct CGPoint _button3Point;
}

@property(nonatomic) struct CGPoint button3Point; // @synthesize button3Point=_button3Point;
@property(nonatomic) struct CGPoint button2Point; // @synthesize button2Point=_button2Point;
@property(nonatomic) struct CGPoint button1Point; // @synthesize button1Point=_button1Point;
@property(nonatomic) float button3Angle; // @synthesize button3Angle=_button3Angle;
@property(nonatomic) float button2Angle; // @synthesize button2Angle=_button2Angle;
@property(nonatomic) float button1Angle; // @synthesize button1Angle=_button1Angle;
@property(nonatomic) BOOL showTarget; // @synthesize showTarget=_showTarget;
@property(nonatomic) BOOL alwaysShowButtonText; // @synthesize alwaysShowButtonText=_alwaysShowButtonText;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(retain, nonatomic) CBLContextalMenuTargetPoint *targetView; // @synthesize targetView=_targetView;
@property(retain, nonatomic) CBLContextualRadialMenuButton *button3; // @synthesize button3=_button3;
@property(retain, nonatomic) CBLContextualRadialMenuButton *button2; // @synthesize button2=_button2;
@property(retain, nonatomic) CBLContextualRadialMenuButton *button1; // @synthesize button1=_button1;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) struct CGPoint panningPoint; // @synthesize panningPoint=_panningPoint;
@property(nonatomic) struct CGPoint targetPoint; // @synthesize targetPoint=_targetPoint;
@property(nonatomic) __weak id <CBLContextualRadialMenuViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reset;
- (void)animate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

