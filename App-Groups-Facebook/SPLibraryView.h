//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBLibraryCollectionViewLayout, UICollectionView, UILabel;

@interface SPLibraryView : UIView
{
    UIView *_collectionContainerView;
    UICollectionView *_thumbnailCollectionView;
    UILabel *_noPhotoHeaderLabel;
    UILabel *_noPhotoDescriptionLabel;
    float _libraryThumbnailSquareSize;
    FBLibraryCollectionViewLayout *_collectionViewLayout;
    unsigned int _numOfPhotosPerRow;
    float _rowHeight;
    unsigned int _thumbnailViewStyle;
}

@property(nonatomic) unsigned int thumbnailViewStyle; // @synthesize thumbnailViewStyle=_thumbnailViewStyle;
@property(readonly, nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;
@property(readonly, nonatomic) unsigned int numOfPhotosPerRow; // @synthesize numOfPhotosPerRow=_numOfPhotosPerRow;
@property(retain, nonatomic) UICollectionView *thumbnailCollectionView; // @synthesize thumbnailCollectionView=_thumbnailCollectionView;
- (void).cxx_destruct;
- (id)_noPhotoDescriptionText;
- (id)_noPhotoDescriptionLabelWithText:(id)arg1;
- (id)_noPhotoHeaderText;
- (id)_noPhotoHeaderLabelViewWithText:(id)arg1;
- (void)setNoPhotosInstructionVisible:(BOOL)arg1;
- (void)scrollContentsToIndex:(int)arg1 scrollingPosition:(unsigned int)arg2;
- (void)scrollContentsToTop:(BOOL)arg1;
- (struct CGRect)rectForIndex:(unsigned int)arg1;
- (void)setThumbnailHidden:(BOOL)arg1 atIndex:(unsigned int)arg2;
- (id)thumbnailViewForIndex:(unsigned int)arg1;
- (void)animateBounceForIndex:(unsigned int)arg1;
- (id)indexPathForGridIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithThumbnailStyle:(unsigned int)arg1;

@end

