//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASAbstractLayoutController.h"

@class UICollectionViewLayout, UIScrollView;

@interface ASCollectionViewLayoutController : ASAbstractLayoutController
{
    UIScrollView *_scrollView;
    UICollectionViewLayout *_collectionViewLayout;
    struct vector<CGRect, std::__1::allocator<CGRect>> _updateRangeBoundsIndexedByRangeType;
    int _scrollableDirections;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)shouldUpdateForVisibleIndexPaths:(id)arg1 viewportSize:(struct CGSize)arg2 rangeType:(int)arg3;
- (id)indexPathsForItemsWithinRangeBounds:(struct CGRect)arg1;
- (struct ASRangeGeometry)rangeGeometryWithScrollDirection:(int)arg1 rangeTuningParameters:(CDStruct_b2fbf00d)arg2;
- (id)indexPathsForScrolling:(int)arg1 viewportSize:(struct CGSize)arg2 rangeType:(int)arg3;
- (id)initWithCollectionView:(id)arg1;

@end

