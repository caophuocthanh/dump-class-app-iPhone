//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNMessageVideoView;

@protocol MNVideoViewDelegate <NSObject>
- (void)videoPlayViewDidTapCancel:(MNMessageVideoView *)arg1;
- (void)videoPlayViewDidTapRetry:(MNMessageVideoView *)arg1;
- (void)videoPlayerViewTappedPlayPauseControl:(MNMessageVideoView *)arg1;
- (void)videoPlayerViewTappedOutsidePlayButton:(MNMessageVideoView *)arg1;
@end

