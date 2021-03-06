//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionTableViewCell.h"

@class CALayer, CBLBoardCellViewModel, UIImageView;

@interface CBLBoardRepinCell : CBLTraitCollectionTableViewCell
{
    BOOL _isRecentlyUsed;
    BOOL _showsBottomSeperator;
    BOOL _tableViewHasCustomScrubber;
    BOOL _enabled;
    UIImageView *_boardImageView;
    CBLBoardCellViewModel *_boardViewModel;
    UIImageView *_secretIconView;
    UIImageView *_groupIconView;
    UIImageView *_placesIconView;
    CALayer *_seperatorLine;
}

@property(retain, nonatomic) CALayer *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIImageView *placesIconView; // @synthesize placesIconView=_placesIconView;
@property(retain, nonatomic) UIImageView *groupIconView; // @synthesize groupIconView=_groupIconView;
@property(retain, nonatomic) UIImageView *secretIconView; // @synthesize secretIconView=_secretIconView;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL tableViewHasCustomScrubber; // @synthesize tableViewHasCustomScrubber=_tableViewHasCustomScrubber;
@property(nonatomic) BOOL showsBottomSeperator; // @synthesize showsBottomSeperator=_showsBottomSeperator;
@property(nonatomic) BOOL isRecentlyUsed; // @synthesize isRecentlyUsed=_isRecentlyUsed;
@property(retain, nonatomic) CBLBoardCellViewModel *boardViewModel; // @synthesize boardViewModel=_boardViewModel;
@property(retain, nonatomic) UIImageView *boardImageView; // @synthesize boardImageView=_boardImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

