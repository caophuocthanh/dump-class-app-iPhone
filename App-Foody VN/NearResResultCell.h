//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResSearchResultCell.h"

@class UILabel;

@interface NearResResultCell : ResSearchResultCell
{
    UILabel *distanceFromHereLabel;
}

@property(retain, nonatomic) UILabel *distanceFromHereLabel; // @synthesize distanceFromHereLabel;
- (void).cxx_destruct;
- (void)resetFrameForAllElement;
- (void)setDistanceFromHere:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

