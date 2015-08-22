//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBProgressView, UILabel;

@interface FBCameraProgressView : UIView
{
    double _maxVideoLength;
    FBProgressView *_progressView;
    FBProgressView *_progressViewCancel;
    UILabel *_recordingTimeLabel;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)setRecordingLabelRotation:(struct CGAffineTransform)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)setShowProgress:(BOOL)arg1;
- (void)reset;
- (void)stop;
- (void)start;
- (void)setCancelled:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithMaximumDuration:(double)arg1;

@end
