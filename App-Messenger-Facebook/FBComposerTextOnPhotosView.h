//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBComposerPhotoOverlaysView.h"

#import "FBComposerPhotoOverlaysViewProtocol.h"

@class NSString;

@interface FBComposerTextOnPhotosView : FBComposerPhotoOverlaysView <FBComposerPhotoOverlaysViewProtocol>
{
    id <FBComposerTextOnPhotosViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerTextOnPhotosViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didChangePhotoAttachmentOverlay;
- (void)composerPhotoOverlaysViewDidTapAddAttachmentsButton:(id)arg1;
- (id)createPhotoOverlayForOverlayView:(id)arg1;
- (id)createPhotoOverlayViewForPhotoOverlay:(id)arg1;
- (void)composerPhotoOverlaysView:(id)arg1 didTapPhotoOverlayView:(id)arg2;
- (void)composerPhotoOverlaysView:(id)arg1 didRemovePhotoOverlayView:(id)arg2;
- (void)composerPhotoOverlaysView:(id)arg1 didAddPhotoOverlayView:(id)arg2;
- (void)composerPhotoOverlaysViewDidTapDone:(id)arg1;
- (void)composerPhotoOverlaysViewDidTapCancel:(id)arg1;
- (id)addImageToUseForBarForPhotoOverlay:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

