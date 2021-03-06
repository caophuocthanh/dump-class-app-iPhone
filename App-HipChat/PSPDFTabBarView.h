//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView;

@interface PSPDFTabBarView : UIView <UIScrollViewDelegate>
{
    float _minTabWidth;
    id <PSPDFTabBarViewDelegate> _delegate;
    id <PSPDFTabBarViewDataSource> _dataSource;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <PSPDFTabBarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <PSPDFTabBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float minTabWidth; // @synthesize minTabWidth=_minTabWidth;
- (void).cxx_destruct;
- (void)reloadData;
- (void)scrollToTabAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int selectedTabIndex;
- (void)selectTabAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)selectTabAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 callDelegate:(BOOL)arg3;
- (void)closeButtonPressed:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)iterateTabButtonsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

