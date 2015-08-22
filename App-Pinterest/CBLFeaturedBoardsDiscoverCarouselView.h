//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class CBLFeaturedBoardDiscoveryViewDisplayOptions, CBLPageControl, NSArray, NSString, NSTimer, UICollectionView, UIImageView, UILabel;

@interface CBLFeaturedBoardsDiscoverCarouselView : CBLTraitCollectionView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSArray *_featuredBoards;
    UICollectionView *_collectionView;
    CBLPageControl *_pageControl;
    UIImageView *_peekImageContainerView;
    UILabel *_peekLabel;
    CBLFeaturedBoardDiscoveryViewDisplayOptions *_boardDisplayOptions;
    NSTimer *_scrollTimer;
}

@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) CBLFeaturedBoardDiscoveryViewDisplayOptions *boardDisplayOptions; // @synthesize boardDisplayOptions=_boardDisplayOptions;
@property(retain, nonatomic) UILabel *peekLabel; // @synthesize peekLabel=_peekLabel;
@property(retain, nonatomic) UIImageView *peekImageContainerView; // @synthesize peekImageContainerView=_peekImageContainerView;
@property(retain, nonatomic) CBLPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *featuredBoards; // @synthesize featuredBoards=_featuredBoards;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)updateConstraints;
- (void)scrollCollectionView:(id)arg1;
- (void)scheduleAutoScrollTimer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
