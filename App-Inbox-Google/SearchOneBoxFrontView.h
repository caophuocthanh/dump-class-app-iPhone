//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DefaultCellFrontView.h"

@class Nugget, SmartMailInteractionForwarder, UIView<SearchOneBoxCardObject>;

@interface SearchOneBoxFrontView : DefaultCellFrontView
{
    SmartMailInteractionForwarder *forwarder_;
    Nugget *nugget_;
    UIView<SearchOneBoxCardObject> *smartMailCardView_;
}

+ (float)verticalPadding;
+ (float)horizontalPadding;
+ (float)heightWithObject:(id)arg1 width:(float)arg2;
- (void).cxx_destruct;
- (void)viewWasTapped:(id)arg1;
- (void)updateWithNugget:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)smartMailDelegate;
- (void)setSmartMailDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

