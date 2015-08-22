//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGGradientView, IGLibraryAsset, NSDateFormatter, UIImageView, UILabel;

@interface IGAssetCell : UICollectionViewCell
{
    BOOL _chosen;
    IGLibraryAsset *_asset;
    UIImageView *_imageView;
    UIImageView *_overlayView;
    UIImageView *_slomoView;
    IGGradientView *_gradientView;
    UILabel *_durationLabel;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) IGGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *slomoView; // @synthesize slomoView=_slomoView;
@property(retain, nonatomic) UIImageView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) BOOL chosen; // @synthesize chosen=_chosen;
@property(retain, nonatomic) IGLibraryAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)updateControlState;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

