//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerPhotoOverlayTextView, FBComposerTextOnPhotosEditorViewController;

@protocol FBComposerTextOnPhotosEditorViewControllerDelegate <NSObject>
- (void)composerTextOnPhotosEditorViewControllerDidDismiss:(FBComposerTextOnPhotosEditorViewController *)arg1;
- (void)composerTextOnPhotosEditorViewController:(FBComposerTextOnPhotosEditorViewController *)arg1 didRemovePhotoOverlayTextView:(FBComposerPhotoOverlayTextView *)arg2;
- (void)composerTextOnPhotosEditorViewController:(FBComposerTextOnPhotosEditorViewController *)arg1 didUpdateComposerPhotoOverlayTextView:(FBComposerPhotoOverlayTextView *)arg2 newComposerPhotoOverlayTextView:(FBComposerPhotoOverlayTextView *)arg3;
- (void)composerTextOnPhotosEditorViewController:(FBComposerTextOnPhotosEditorViewController *)arg1 finishedWithComposerPhotoOverlayTextView:(FBComposerPhotoOverlayTextView *)arg2;
- (void)composerTextOnPhotosEditorViewControllerDidCancel:(FBComposerTextOnPhotosEditorViewController *)arg1;
@end
