//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSDate, NSTimer, NSURL, UIImage;

@interface FBBugReportVideoScreenRecorder : NSObject
{
    AVAssetWriter *_writer;
    AVAssetWriterInput *_writerInput;
    AVAssetWriterInputPixelBufferAdaptor *_writerInputPixelBufferAdaptor;
    NSDate *_startTime;
    UIImage *_latestScreenshot;
    NSTimer *_timer;
    BOOL _captureFrameInProgress;
    NSURL *_originalFilenameURL;
    NSURL *_tmpFilenameURL;
}

- (void).cxx_destruct;
- (void)stopRecording;
- (void)captureFrameInternal;
- (void)captureFrame:(id)arg1;
- (BOOL)startRecording:(id)arg1;

@end
