//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNVideoTrimmerFilmStripView;

@protocol MNVideoTrimmerFilmStripDelegate <NSObject>
- (float)minimumTrimPercentageForFilmStrip:(MNVideoTrimmerFilmStripView *)arg1;
- (void)videoTrimmerFilmStrip:(MNVideoTrimmerFilmStripView *)arg1 didUpdateLeftHandleBoundary:(float)arg2 rightHandleBoundary:(float)arg3;
- (void)videoTrimmerFilmStrip:(MNVideoTrimmerFilmStripView *)arg1 didUpdatePlayheadToPosition:(float)arg2;
@end
