//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBTextView;

@interface FBWebRTCFeedbackView : UIView
{
    FBTextView *_textField;
    UIView *_topFill;
    UIView *_topBorder;
    UIView *_bottomBorder;
    UIView *_bottomFill;
}

@property(retain, nonatomic) UIView *bottomFill; // @synthesize bottomFill=_bottomFill;
@property(retain, nonatomic) UIView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UIView *topBorder; // @synthesize topBorder=_topBorder;
@property(retain, nonatomic) UIView *topFill; // @synthesize topFill=_topFill;
@property(retain, nonatomic) FBTextView *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

