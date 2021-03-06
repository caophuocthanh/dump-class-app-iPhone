//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVURLAsset, FBCaptureManager, NSDictionary, UIImage;

@protocol FBCaptureManagerDelegate <NSObject>
- (void)captureManagerDidFailToCaptureVideo:(FBCaptureManager *)arg1;
- (void)captureManager:(FBCaptureManager *)arg1 didChangeCapturePositionTo:(int)arg2;
- (void)captureManagerSessionDidStart:(FBCaptureManager *)arg1;
- (void)captureManagerPreviewDidLoad:(FBCaptureManager *)arg1;
- (void)captureManagerDidStartCaptureVideo:(FBCaptureManager *)arg1;
- (struct CGSize)captureManagerVideoInputSize:(FBCaptureManager *)arg1;
- (void)captureManager:(FBCaptureManager *)arg1 didCaptureVideo:(AVURLAsset *)arg2 thumbnail:(UIImage *)arg3 cameraPosition:(int)arg4;
- (UIImage *)addFilterToPhoto:(UIImage *)arg1;
- (void)captureManager:(FBCaptureManager *)arg1 didCaptureImage:(UIImage *)arg2 metadata:(NSDictionary *)arg3 cameraPosition:(int)arg4;
@end

