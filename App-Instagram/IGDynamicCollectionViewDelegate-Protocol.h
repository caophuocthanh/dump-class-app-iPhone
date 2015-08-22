//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDynamicCollectionView, UIScrollView, UIView;

@protocol IGDynamicCollectionViewDelegate <NSObject>

@optional
- (void)collectionView:(IGDynamicCollectionView *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)collectionView:(IGDynamicCollectionView *)arg1 didChangeContentSize:(struct CGSize)arg2;
- (void)collectionView:(IGDynamicCollectionView *)arg1 didTapItemAtIndex:(int)arg2;
- (void)collectionView:(IGDynamicCollectionView *)arg1 didEndMovingView:(UIView *)arg2;
- (void)collectionView:(IGDynamicCollectionView *)arg1 willBeginMovingView:(UIView *)arg2;
- (BOOL)collectionView:(IGDynamicCollectionView *)arg1 canTapItemAtIndex:(int)arg2;
- (BOOL)collectionView:(IGDynamicCollectionView *)arg1 canMoveItemFromIndex:(int)arg2 toIndex:(int)arg3;
- (BOOL)collectionView:(IGDynamicCollectionView *)arg1 canMoveItemAtIndex:(int)arg2;
@end

