//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriterInputPixelBufferAdaptor, IGVideoWriter, NSError, NSURL;

@protocol IGVideoWriterDelegate <NSObject>
- (void)videoWriter:(IGVideoWriter *)arg1 didFailWithError:(NSError *)arg2;
- (void)videoWriter:(IGVideoWriter *)arg1 didFinishWritingVideoToURL:(NSURL *)arg2;
- (struct opaqueCMSampleBuffer *)nextAudioSampleBufferForVideoWriter:(IGVideoWriter *)arg1;
- (struct __CVBuffer *)nextRenderedPixelBufferForVideoWriter:(IGVideoWriter *)arg1 withAdaptor:(AVAssetWriterInputPixelBufferAdaptor *)arg2 getPresentationTime:(CDStruct_1b6d18a9 *)arg3;
@end

