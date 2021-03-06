//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView, UITapGestureRecognizer, UIView, UIViewController;

@interface QMBParallaxScrollViewController : BaseViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate>
{
    BOOL _isAnimating;
    float _startTopHeight;
    float _lastOffsetY;
    BOOL _enableSectionSupport;
    id <QMBParallaxScrollViewControllerDelegate> _delegate;
    UIViewController *_topViewController;
    UIViewController *_bottomViewController;
    float _topHeight;
    float _maxHeight;
    float _maxHeightBorder;
    float _minHeightBorder;
    unsigned int _state;
    UIScrollView *_parallaxScrollView;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    UIView *_backgroundView;
    UIView *_foregroundView;
    UIScrollView *_backgroundScrollView;
    UIScrollView *_foregroundScrollView;
    UITapGestureRecognizer *_topViewGestureRecognizer;
    UITapGestureRecognizer *_bottomViewGestureRecognizer;
    float _currentTopHeight;
    float _initialMaxHeightBorder;
    float _initialMinHeightBorder;
    unsigned int _lastGesture;
}

@property(nonatomic) unsigned int lastGesture; // @synthesize lastGesture=_lastGesture;
@property(nonatomic) float initialMinHeightBorder; // @synthesize initialMinHeightBorder=_initialMinHeightBorder;
@property(nonatomic) float initialMaxHeightBorder; // @synthesize initialMaxHeightBorder=_initialMaxHeightBorder;
@property(nonatomic) float currentTopHeight; // @synthesize currentTopHeight=_currentTopHeight;
@property(retain, nonatomic) UITapGestureRecognizer *bottomViewGestureRecognizer; // @synthesize bottomViewGestureRecognizer=_bottomViewGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *topViewGestureRecognizer; // @synthesize topViewGestureRecognizer=_topViewGestureRecognizer;
@property(retain, nonatomic) UIScrollView *foregroundScrollView; // @synthesize foregroundScrollView=_foregroundScrollView;
@property(retain, nonatomic) UIScrollView *backgroundScrollView; // @synthesize backgroundScrollView=_backgroundScrollView;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(retain, nonatomic) UIScrollView *parallaxScrollView; // @synthesize parallaxScrollView=_parallaxScrollView;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) BOOL enableSectionSupport; // @synthesize enableSectionSupport=_enableSectionSupport;
@property(nonatomic, setter=setMinHeightBorder:) float minHeightBorder; // @synthesize minHeightBorder=_minHeightBorder;
@property(nonatomic, setter=setMaxHeightBorder:) float maxHeightBorder; // @synthesize maxHeightBorder=_maxHeightBorder;
@property(nonatomic, setter=setMaxHeight:) float maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) float topHeight; // @synthesize topHeight=_topHeight;
@property(retain, nonatomic) UIViewController *bottomViewController; // @synthesize bottomViewController=_bottomViewController;
@property(retain, nonatomic) UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(retain, nonatomic) id <QMBParallaxScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeTopHeight:(float)arg1;
- (void)showFullTopView:(BOOL)arg1;
- (void)updateContentOffset;
- (void)updateForegroundFrame;
- (struct CGRect)frameForObject:(id)arg1;
- (void)setBackgroundHeight:(float)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)enableTapGestureTopView:(BOOL)arg1;
- (void)addGestureReconizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setupWithTopViewController:(id)arg1 andTopHeight:(float)arg2 andBottomViewController:(id)arg3;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

