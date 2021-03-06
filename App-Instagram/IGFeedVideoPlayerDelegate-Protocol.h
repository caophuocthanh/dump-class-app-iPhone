//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFeedVideoPlayer, NSError, UIView;

@protocol IGFeedVideoPlayerDelegate <NSObject>
- (void)videoPlayer:(IGFeedVideoPlayer *)arg1 didUpdatePlaybackProgress:(float)arg2;
- (void)videoPlayer:(IGFeedVideoPlayer *)arg1 didUpdateLoadingProgress:(float)arg2;
- (void)videoPlayerDidPlay:(IGFeedVideoPlayer *)arg1;
- (void)videoPlayer:(IGFeedVideoPlayer *)arg1 didFailToPlaybackWithError:(NSError *)arg2;
- (void)videoPlayer:(IGFeedVideoPlayer *)arg1 playbackBufferLikelyToKeepUp:(BOOL)arg2;
- (void)videoPlayer:(IGFeedVideoPlayer *)arg1 playbackBufferEmpty:(BOOL)arg2;
- (void)videoPlayerWillPrepareAssetForPlayback:(IGFeedVideoPlayer *)arg1;
- (void)videoPlayerDidPlayToEnd:(IGFeedVideoPlayer *)arg1;
- (void)videoPlayerLoadedFirstFrame:(IGFeedVideoPlayer *)arg1;
- (void)videoPlayer:(IGFeedVideoPlayer *)arg1 didLoadVideoInView:(UIView *)arg2;
@end

