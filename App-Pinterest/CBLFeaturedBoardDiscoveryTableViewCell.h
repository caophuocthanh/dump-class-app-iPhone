//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionTableViewCell.h"

@class CBLFeaturedBoardDiscoveryView;

@interface CBLFeaturedBoardDiscoveryTableViewCell : CBLTraitCollectionTableViewCell
{
    CBLFeaturedBoardDiscoveryView *_boardView;
}

@property(retain, nonatomic) CBLFeaturedBoardDiscoveryView *boardView; // @synthesize boardView=_boardView;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDisplayOptions:(id)arg1;
- (void)updateWithBoard:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
