//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewDelegate.h"

@class IGCollectionViewController;

@protocol IGCollectionViewControllerDelegate <UICollectionViewDelegate>

@optional
- (void)collectionViewControllerDidScrollToEndOfContent:(IGCollectionViewController *)arg1;
- (void)collectionViewController:(IGCollectionViewController *)arg1 didScrollWithDistanceToEndOfContent:(float)arg2 isScrollingDown:(BOOL)arg3;
- (void)collectionViewControllerDidStartPullToRefreshAction:(IGCollectionViewController *)arg1;
@end

