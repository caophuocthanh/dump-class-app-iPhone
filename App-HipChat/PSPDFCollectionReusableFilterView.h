//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSLayoutConstraint, PSPDFBlurView, UISegmentedControl;

@interface PSPDFCollectionReusableFilterView : UICollectionReusableView
{
    UISegmentedControl *_filterElement;
    int _backgroundStyle;
    PSPDFBlurView *_blurView;
    NSLayoutConstraint *_centerX;
    NSLayoutConstraint *_centerY;
    NSLayoutConstraint *_minLeft;
    NSLayoutConstraint *_maxRight;
    NSLayoutConstraint *_minTop;
    NSLayoutConstraint *_maxBottom;
    struct CGPoint _filterElementOffset;
    struct UIEdgeInsets _minimumFilterMargin;
}

@property(nonatomic) __weak NSLayoutConstraint *maxBottom; // @synthesize maxBottom=_maxBottom;
@property(nonatomic) __weak NSLayoutConstraint *minTop; // @synthesize minTop=_minTop;
@property(nonatomic) __weak NSLayoutConstraint *maxRight; // @synthesize maxRight=_maxRight;
@property(nonatomic) __weak NSLayoutConstraint *minLeft; // @synthesize minLeft=_minLeft;
@property(nonatomic) __weak NSLayoutConstraint *centerY; // @synthesize centerY=_centerY;
@property(nonatomic) __weak NSLayoutConstraint *centerX; // @synthesize centerX=_centerX;
@property(retain, nonatomic) PSPDFBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) int backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) struct UIEdgeInsets minimumFilterMargin; // @synthesize minimumFilterMargin=_minimumFilterMargin;
@property(nonatomic) struct CGPoint filterElementOffset; // @synthesize filterElementOffset=_filterElementOffset;
@property(retain, nonatomic) UISegmentedControl *filterElement; // @synthesize filterElement=_filterElement;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
