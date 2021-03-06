//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImageView, UILabel;

@interface FBGroupsPrivacyButton : UIButton
{
    NSString *_title;
    NSString *_description;
    UILabel *_titleLabel;
    UIImageView *_checkmarkImageView;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
- (void)_setToggled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPrivacyDescription:(id)arg1;
- (void)setPrivacyTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1 description:(id)arg2;

@end

