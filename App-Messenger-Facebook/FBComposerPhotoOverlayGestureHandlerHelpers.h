//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerPhotoOverlayView;

@interface FBComposerPhotoOverlayGestureHandlerHelpers : NSObject
{
    FBComposerPhotoOverlayView *_photoOverlayView;
    id <FBComposerPhotoOverlayAttachmentGestureHandler> _gestureHandler;
    struct CGPoint _attachmentStartCenter;
}

- (void).cxx_destruct;
- (void)handlePanGesture:(id)arg1;
- (id)initWithGestureHandler:(id)arg1 photoOverlayView:(id)arg2;

@end
