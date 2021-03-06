//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBBurstAnimationImageViewDelegate.h"
#import "FBMagicStoryAssetViewProtocol.h"

@class FBBurstAnimationImageView, FBMagicStoryBurstBadgeOverlayView, NSString;

@interface FBMagicStoryBurstPhotoView : UIView <FBBurstAnimationImageViewDelegate, FBMagicStoryAssetViewProtocol>
{
    FBBurstAnimationImageView *_burstView;
    FBMagicStoryBurstBadgeOverlayView *_burstOverlayView;
    id <FBMagicStoryBurstPhotoViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMagicStoryBurstPhotoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)burstAnimationImageViewDidChangeToIndex:(unsigned int)arg1;
- (void)pause;
- (void)playOneLoopWithCompletion:(CDUnknownBlockType)arg1;
- (void)play;
@property(readonly, nonatomic) BOOL isAnimating;
- (void)setCurrentImageIndex:(unsigned int)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) unsigned int currentImageIndex;
- (void)showBurstBadge:(BOOL)arg1;
- (id)assetViewOrLayer;
- (void)configureWithAssets:(id)arg1 initialIndex:(unsigned int)arg2 session:(id)arg3;
- (void)configureWithAssets:(id)arg1 session:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

