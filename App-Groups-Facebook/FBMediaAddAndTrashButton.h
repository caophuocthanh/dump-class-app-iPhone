//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "FBComposerPhotoOverlayAddDeleteButtonProtocol.h"

@class NSString, UIImage;

@interface FBMediaAddAndTrashButton : UIButton <FBComposerPhotoOverlayAddDeleteButtonProtocol>
{
    UIImage *_addImage;
    BOOL _canTapDeleteButton;
    UIImage *_deleteIconClose;
    UIImage *_deleteIconOpenGray;
    UIImage *_deleteIconOpenWhite;
    BOOL _deleting;
}

- (void).cxx_destruct;
- (void)_animatePhotoOverlayDeleting:(BOOL)arg1;
- (void)_animateTrashOpening:(BOOL)arg1;
- (void)photoOverlayViewDidExitCircle;
- (void)photoOverlayViewDidEnterCircle;
- (void)photoOverlayViewDidExitDeleteZone;
- (void)photoOverlayViewDidEnterDeleteZone;
- (void)photoOverlayViewNotSelected;
- (void)photoOverlayViewDidEndDragging;
- (void)photoOverlayViewSelected;
- (void)photoOverlayViewDidBeginDragging;
- (void)animateToImageRepresentingCurrentState:(BOOL)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 addImage:(id)arg2 closedTrashColor:(id)arg3 canTapDeleteButton:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

