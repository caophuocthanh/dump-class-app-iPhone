//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "CBLZoomingImageViewDelegate.h"

@class CBLZoomingImageView, NSString;

@interface CBLBuyPinVariantImageCollectionViewCell : UICollectionViewCell <CBLZoomingImageViewDelegate>
{
    id <CBLBuyPinVariantImageCollectionViewCellDelegate> _delegate;
    CBLZoomingImageView *_zoomingImageView;
}

@property(retain, nonatomic) CBLZoomingImageView *zoomingImageView; // @synthesize zoomingImageView=_zoomingImageView;
@property(nonatomic) __weak id <CBLBuyPinVariantImageCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CBLZoomingImageViewDidClose:(id)arg1;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

