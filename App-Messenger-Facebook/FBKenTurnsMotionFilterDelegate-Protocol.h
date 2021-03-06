//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBKenTurnsMotionFilter;

@protocol FBKenTurnsMotionFilterDelegate <NSObject>

@optional
- (void)motionFilterDidStartTurning:(FBKenTurnsMotionFilter *)arg1;
- (void)motionFilterDidStopTurning:(FBKenTurnsMotionFilter *)arg1;
- (void)motionFilter:(FBKenTurnsMotionFilter *)arg1 rotatedPastRangeWithPercentage:(float)arg2;
- (void)motionFilterUpdatedYRotation:(FBKenTurnsMotionFilter *)arg1;
@end

