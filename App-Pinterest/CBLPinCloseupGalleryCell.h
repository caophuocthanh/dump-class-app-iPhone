//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionCollectionViewCell.h"

@class CBLPinCloseupViewController;

@interface CBLPinCloseupGalleryCell : CBLTraitCollectionCollectionViewCell
{
    CBLPinCloseupViewController *_pinController;
}

@property(retain, nonatomic) CBLPinCloseupViewController *pinController; // @synthesize pinController=_pinController;
- (void).cxx_destruct;
- (void)updateWithPin:(id)arg1 delegate:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end
