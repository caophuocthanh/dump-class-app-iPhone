//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFLabeledButton.h"

@class AFRoundedRectSegmentButtonView;

@interface AFRoundedRectSegmentButton : AFLabeledButton
{
    AFRoundedRectSegmentButtonView *_roundedRectbuttonView;
}

@property(retain, nonatomic) AFRoundedRectSegmentButtonView *roundedRectbuttonView; // @synthesize roundedRectbuttonView=_roundedRectbuttonView;
- (void).cxx_destruct;
@property(nonatomic) short buttonLocation;
- (id)initWithImage:(id)arg1 title:(id)arg2 textColor:(id)arg3 strokeColor:(id)arg4;
- (id)initWithButtonView:(id)arg1 textMargin:(float)arg2 textOverlap:(float)arg3;

@end

