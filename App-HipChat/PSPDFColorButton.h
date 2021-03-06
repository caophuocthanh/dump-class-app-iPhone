//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface PSPDFColorButton : UIButton
{
    struct CGSize _indicatorSize;
    BOOL _indicatorSizeSet;
    BOOL _displayAsEllipse;
    UIColor *_color;
    float _borderWidth;
}

@property(nonatomic) float borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) BOOL displayAsEllipse; // @synthesize displayAsEllipse=_displayAsEllipse;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize indicatorSize;
- (void)setHighlighted:(BOOL)arg1;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

