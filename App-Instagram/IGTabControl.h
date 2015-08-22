//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, IGKVOHandle, NSArray, UIScrollView;

@interface IGTabControl : UIView
{
    BOOL _canUseFallbackIcons;
    UIView *_inchwormView;
    NSArray *_buttons;
    id <IGTabControlDelegate> _delegate;
    UIScrollView *_connectedScrollView;
    IGKVOHandle *_contentOffsetHandle;
    CALayer *_bottomSeparator;
}

+ (float)preferredHeight;
@property(readonly, nonatomic) BOOL canUseFallbackIcons; // @synthesize canUseFallbackIcons=_canUseFallbackIcons;
@property(retain, nonatomic) CALayer *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property(retain, nonatomic) IGKVOHandle *contentOffsetHandle; // @synthesize contentOffsetHandle=_contentOffsetHandle;
@property(retain, nonatomic) UIScrollView *connectedScrollView; // @synthesize connectedScrollView=_connectedScrollView;
@property(nonatomic) __weak id <IGTabControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)frameForSegment:(unsigned int)arg1 withLayoutParameters:(struct IGTabControlLayoutParameters)arg2;
- (struct IGTabControlLayoutParameters)layoutParametersForFrame:(struct CGRect)arg1 segmentCount:(unsigned int)arg2;
- (void)onSegmentTapped:(id)arg1;
- (void)updateAccessibilityStateForButtons:(id)arg1 selectedIndex:(int)arg2;
- (void)updateScrollViewPosition;
- (void)highlightVisibleSegment;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setSegments:(id)arg1;
- (id)newSegmentWithTitle:(id)arg1 fontSize:(float)arg2 fallbackIcon:(id)arg3;
@property(readonly, nonatomic) UIView *inchwormView; // @synthesize inchwormView=_inchwormView;
- (struct CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1 layoutParameters:(struct IGTabControlLayoutParameters)arg2;
- (struct CGRect)scrollIndicatorBarFrameForScrollView:(id)arg1;
- (struct CGRect)verticalPositionForScrollIndicatorBar:(struct CGRect)arg1;
- (void)applyStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
