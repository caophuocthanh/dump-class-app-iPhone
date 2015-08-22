//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCameraFlashListenerAnnouncer, FBCaptureManager;

@interface FBCameraComponentToolbox : NSObject
{
    id <FBCameraComponentAppearanceProvider> _appearanceProvider;
    id <FBCameraGenericEvent> _captureEvent;
    FBCaptureManager *_captureManager;
    id <FBCameraGenericEvent> _closeEvent;
    id <FBCameraGenericEvent> _captureStateChangedToPhotoEvent;
    id <FBCameraGenericEvent> _captureStateChangedToVideoEvent;
    id <FBCameraGenericEvent> _deviceOrientationChangedEvent;
    id <FBCameraGenericEvent> _flashAnimationCompletedEvent;
    FBCameraFlashListenerAnnouncer *_flashAnnouncer;
    id <FBCameraGenericEvent> _switchCameraEvent;
}

@property(readonly, nonatomic) id <FBCameraGenericEvent> switchCameraEvent; // @synthesize switchCameraEvent=_switchCameraEvent;
@property(readonly, nonatomic) FBCameraFlashListenerAnnouncer *flashAnnouncer; // @synthesize flashAnnouncer=_flashAnnouncer;
@property(readonly, nonatomic) id <FBCameraGenericEvent> flashAnimationCompletedEvent; // @synthesize flashAnimationCompletedEvent=_flashAnimationCompletedEvent;
@property(readonly, nonatomic) id <FBCameraGenericEvent> deviceOrientationChangedEvent; // @synthesize deviceOrientationChangedEvent=_deviceOrientationChangedEvent;
@property(readonly, nonatomic) id <FBCameraGenericEvent> captureStateChangedToVideoEvent; // @synthesize captureStateChangedToVideoEvent=_captureStateChangedToVideoEvent;
@property(readonly, nonatomic) id <FBCameraGenericEvent> captureStateChangedToPhotoEvent; // @synthesize captureStateChangedToPhotoEvent=_captureStateChangedToPhotoEvent;
@property(readonly, nonatomic) id <FBCameraGenericEvent> closeEvent; // @synthesize closeEvent=_closeEvent;
@property(readonly, nonatomic) FBCaptureManager *captureManager; // @synthesize captureManager=_captureManager;
@property(readonly, nonatomic) id <FBCameraGenericEvent> captureEvent; // @synthesize captureEvent=_captureEvent;
@property(readonly, nonatomic) id <FBCameraComponentAppearanceProvider> appearanceProvider; // @synthesize appearanceProvider=_appearanceProvider;
- (void).cxx_destruct;
- (id)initWithAppearanceProvider:(id)arg1 captureEvent:(id)arg2 captureManager:(id)arg3 captureStateChangedToPhotoEvent:(id)arg4 captureStateChangedToVideoEvent:(id)arg5 closeEvent:(id)arg6 deviceOrientationChangedEvent:(id)arg7 flashAnimationCompletedEvent:(id)arg8 flashAnnouncer:(id)arg9 switchCameraEvent:(id)arg10;

@end
