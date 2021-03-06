//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet, PSPDFViewController;

@interface PSPDFScreenController : NSObject
{
    PSPDFViewController *_pdfControllerToMirror;
    NSMutableOrderedSet *_windows;
    id <PSPDFScreenControllerDelegate> _delegateProxy;
}

@property(retain, nonatomic) id <PSPDFScreenControllerDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(readonly, nonatomic) NSMutableOrderedSet *windows; // @synthesize windows=_windows;
@property(retain, nonatomic) PSPDFViewController *pdfControllerToMirror; // @synthesize pdfControllerToMirror=_pdfControllerToMirror;
- (void).cxx_destruct;
- (void)screenDidDisconnectNotification:(id)arg1;
- (void)screenDidConnectNotification:(id)arg1;
- (void)updateViewStateAnimated:(BOOL)arg1;
- (void)documentDidChangeNotification:(id)arg1;
- (void)controllerDidChangePageNotification:(id)arg1;
- (void)scrollViewDidScrollNotification:(id)arg1;
- (void)stopListeningForEvents;
- (void)startListeningForEvents;
- (id)mirrorControllerForWindow:(id)arg1;
- (id)mirrorControllerForScreen:(id)arg1;
- (id)mirroredPDFViewControllers;
- (BOOL)shouldMirrorScreens;
- (void)stopExternalDisplays;
- (void)startExternalDisplays;
- (void)destroyWindowForScreen:(id)arg1;
- (id)createWindowForScreen:(id)arg1;
- (id)windowForScreen:(id)arg1;
- (void)configureMirroringPDFDocumentViewController:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) __weak id <PSPDFScreenControllerDelegate> delegate;

@end

