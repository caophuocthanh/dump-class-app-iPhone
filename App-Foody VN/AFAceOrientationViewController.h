//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFOrientationViewController.h"

#import "AFSegmentedControlDelegate.h"

@class AFRoundedRectSegmentedControl, NSString;

@interface AFAceOrientationViewController : AFOrientationViewController <AFSegmentedControlDelegate>
{
    AFRoundedRectSegmentedControl *_rotateControl;
    AFRoundedRectSegmentedControl *_flipControl;
}

@property(retain, nonatomic) AFRoundedRectSegmentedControl *flipControl; // @synthesize flipControl=_flipControl;
@property(retain, nonatomic) AFRoundedRectSegmentedControl *rotateControl; // @synthesize rotateControl=_rotateControl;
- (void).cxx_destruct;
- (void)segmentedControl:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
