//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AFLegacyBackButtonArrow, UILabel;

@interface AFLegacyBackButton : UIControl
{
    UILabel *_label;
    AFLegacyBackButtonArrow *_arrowView;
}

@property(retain, nonatomic) AFLegacyBackButtonArrow *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
