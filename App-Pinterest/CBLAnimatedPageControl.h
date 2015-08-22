//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface CBLAnimatedPageControl : UIView
{
    int _numberOfPages;
    int _currentPage;
    float _pageDotSpacing;
    float _pageDotWidth;
    float _pageDotAnimationScale;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    int _leftPageIndex;
    int _rightPageIndex;
    int _previousPageIndex;
}

@property(nonatomic) int previousPageIndex; // @synthesize previousPageIndex=_previousPageIndex;
@property(nonatomic) int rightPageIndex; // @synthesize rightPageIndex=_rightPageIndex;
@property(nonatomic) int leftPageIndex; // @synthesize leftPageIndex=_leftPageIndex;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) float pageDotAnimationScale; // @synthesize pageDotAnimationScale=_pageDotAnimationScale;
@property(nonatomic) float pageDotWidth; // @synthesize pageDotWidth=_pageDotWidth;
@property(nonatomic) float pageDotSpacing; // @synthesize pageDotSpacing=_pageDotSpacing;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (struct CGSize)sizeForNumberOfPages:(int)arg1;
- (int)tagForPageNumber:(int)arg1;
- (void)applyScaleAnimationAtIndex:(int)arg1 toValue:(id)arg2 movingRight:(BOOL)arg3;
- (void)applyScaleAnimationAtIndex:(int)arg1 withProgress:(float)arg2 movingRight:(BOOL)arg3;
- (void)animationFromPage:(int)arg1 toPage:(int)arg2 nextPageInDirection:(int)arg3 withProgress:(float)arg4;
- (void)animatePageControl;
- (void)updateUI:(BOOL)arg1;
- (void)configurePageControl;
- (id)initWithNumberOfPages:(int)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
