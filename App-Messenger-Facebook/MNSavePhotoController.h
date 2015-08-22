//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBCameraRollWriterDelegate.h"
#import "FBClassProvidable.h"

@class FBCameraRollWriter, MNPhotoImageRequester, MNSavePhotoListenerAnnouncer, NSString;

@interface MNSavePhotoController : NSObject <FBCameraRollWriterDelegate, FBClassProvidable>
{
    MNSavePhotoListenerAnnouncer *_announcer;
    MNPhotoImageRequester *_imageRequester;
    FBCameraRollWriter *_cameraRollWriter;
}

- (void).cxx_destruct;
- (void)cameraRollWriter:(id)arg1 didFailToWriteImageDataWithError:(id)arg2;
- (void)cameraRollWriter:(id)arg1 didFailToWriteImageWithError:(id)arg2;
- (void)cameraRollWriterDidSaveImageData:(id)arg1;
- (void)cameraRollWriterDidSaveImage:(id)arg1;
- (void)_reportError:(id)arg1;
- (void)_saveAnimatedWebPToCameraRoll:(id)arg1;
- (void)_saveAnimatedImageData:(id)arg1;
- (void)_saveAnimatedImage:(id)arg1;
- (void)_saveStaticImage:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)savePhotoViewModel:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithImageRequester:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
