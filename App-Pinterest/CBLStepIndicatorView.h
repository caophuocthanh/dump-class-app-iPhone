//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface CBLStepIndicatorView : UIView
{
    int _numSteps;
    int _selectedStep;
    NSMutableArray *_stepViews;
}

@property(retain, nonatomic) NSMutableArray *stepViews; // @synthesize stepViews=_stepViews;
@property(nonatomic) int selectedStep; // @synthesize selectedStep=_selectedStep;
@property(nonatomic) int numSteps; // @synthesize numSteps=_numSteps;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
