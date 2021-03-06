//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMStickerPreviewViewControllerDelegate.h"

@class FBMCollectionViewStickerCell, FBMStickerPreviewViewController, FBMStickerResourceManager, FBPopoverController, NSString, UILongPressGestureRecognizer;

@interface FBStickerPreviewGestureHandler : NSObject <FBMStickerPreviewViewControllerDelegate>
{
    FBPopoverController *_stickerPreviewPopoverController;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    FBMStickerPreviewViewController *_previewViewController;
    FBMStickerResourceManager *_stickerResourceManager;
    FBMCollectionViewStickerCell *_currentStickerCellPreviewed;
}

@property(retain, nonatomic) FBMCollectionViewStickerCell *currentStickerCellPreviewed; // @synthesize currentStickerCellPreviewed=_currentStickerCellPreviewed;
- (void).cxx_destruct;
- (id)stickerPreviewViewController;
- (void)_updatePopoverPositionWithCell:(id)arg1;
- (void)stickerPreviewViewControllerWillLayoutSubviews:(id)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (void)detachHandlerFromCollectionView:(id)arg1;
- (void)attachHandlerToCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithStickerResourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

