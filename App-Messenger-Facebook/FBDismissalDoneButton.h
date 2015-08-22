//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString;

@interface FBDismissalDoneButton : UIButton
{
    unsigned int _buttonStyle;
    NSString *_title;
    struct UIEdgeInsets _backgroundEdgeInsets;
}

+ (id)accessibilityIdentifier;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned int buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) struct UIEdgeInsets backgroundEdgeInsets; // @synthesize backgroundEdgeInsets=_backgroundEdgeInsets;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)backgroundRectForBounds:(struct CGRect)arg1;
- (id)_defaultConfig;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(unsigned int)arg2 title:(id)arg3 color:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(unsigned int)arg2 title:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(unsigned int)arg2 title:(id)arg3 color:(id)arg4 configuration:(id)arg5;

@end
