//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CBLTapTargetButton, NSString, UIButton, UILabel;

@interface CBLSendNavigationBarView : UIView
{
    BOOL _editing;
    CBLTapTargetButton *_cancelButton;
    UIButton *_doneButton;
    UILabel *_titleLabel;
    CALayer *_seperatorLine;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CALayer *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) CBLTapTargetButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
