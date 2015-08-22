//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFTableViewCell.h"

@class UILabel, UIStepper;

@interface PSPDFStepperCell : PSPDFTableViewCell
{
    float _minimumTextWidth;
    CDUnknownBlockType _stepperLabelUpdateBlock;
    CDUnknownBlockType _stepperLabelTouchBeganBlock;
    CDUnknownBlockType _stepperLabelTouchEndedBlock;
    UIStepper *_stepper;
    UILabel *_stepperLabel;
}

@property(retain, nonatomic) UILabel *stepperLabel; // @synthesize stepperLabel=_stepperLabel;
@property(retain, nonatomic) UIStepper *stepper; // @synthesize stepper=_stepper;
@property(copy, nonatomic) CDUnknownBlockType stepperLabelTouchEndedBlock; // @synthesize stepperLabelTouchEndedBlock=_stepperLabelTouchEndedBlock;
@property(copy, nonatomic) CDUnknownBlockType stepperLabelTouchBeganBlock; // @synthesize stepperLabelTouchBeganBlock=_stepperLabelTouchBeganBlock;
@property(copy, nonatomic) CDUnknownBlockType stepperLabelUpdateBlock; // @synthesize stepperLabelUpdateBlock=_stepperLabelUpdateBlock;
@property(nonatomic) float minimumTextWidth; // @synthesize minimumTextWidth=_minimumTextWidth;
- (void).cxx_destruct;
- (void)stepperTouchEnded:(id)arg1;
- (void)stepperTouchBegan:(id)arg1;
- (void)stepperChanged:(id)arg1;
- (void)contentSizeDidChange;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
