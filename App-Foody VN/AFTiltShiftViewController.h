//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

#import "AFSegmentedControlDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AFTiltShiftProcessor, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer;

@interface AFTiltShiftViewController : AFToolViewController <UIGestureRecognizerDelegate, AFSegmentedControlDelegate>
{
    BOOL _currentlyRendering;
    BOOL _needsFurtherRender;
    int _tiltShiftStyle;
    UIPanGestureRecognizer *_panRecognizer;
    UIRotationGestureRecognizer *_rotationRecognizer;
    UIPinchGestureRecognizer *_pinchRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    float _rotation;
    float _radius;
    float _originalRotation;
    float _originalRadius;
    AFTiltShiftProcessor *_processor;
    struct CGPoint _center;
    struct CGPoint _originalCenter;
}

+ (Class)scrollableOverlayViewClass;
+ (BOOL)usesStaticImageView;
+ (BOOL)requiresZoom;
@property(retain, nonatomic) AFTiltShiftProcessor *processor; // @synthesize processor=_processor;
@property(nonatomic) BOOL needsFurtherRender; // @synthesize needsFurtherRender=_needsFurtherRender;
@property(nonatomic, getter=isCurrentlyRendering) BOOL currentlyRendering; // @synthesize currentlyRendering=_currentlyRendering;
@property(nonatomic) float originalRadius; // @synthesize originalRadius=_originalRadius;
@property(nonatomic) float originalRotation; // @synthesize originalRotation=_originalRotation;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchRecognizer; // @synthesize pinchRecognizer=_pinchRecognizer;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotationRecognizer; // @synthesize rotationRecognizer=_rotationRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(nonatomic) int tiltShiftStyle; // @synthesize tiltShiftStyle=_tiltShiftStyle;
- (void).cxx_destruct;
- (id)overlayStyleAnalyticsAttributes;
- (void)reportApplied;
- (id)outputProcessor;
- (void)updateGLView;
- (void)updateGLViewAnimated:(BOOL)arg1;
- (void)fadeOutOverlay;
- (id)tiltShiftOverlayView;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)rotationDetected:(id)arg1;
- (void)pinchDetected:(id)arg1;
- (void)panDetected:(id)arg1;
- (void)setupOverlayInitialView;
- (void)setupGestureRecognizers;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

