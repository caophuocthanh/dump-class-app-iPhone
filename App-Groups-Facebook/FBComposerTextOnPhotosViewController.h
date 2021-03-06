//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerPhotoOverlayAttachmentsViewController.h"
#import "FBComposerTextOnPhotosEditorViewControllerDelegate.h"
#import "FBComposerTextOnPhotosViewDelegate.h"
#import "FBMediaGalleryToolProtocol.h"
#import "FBMediaTopNavigationBarDelegation.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class FBComposerTextOnPhotosEditorViewController, FBComposerTextOnPhotosView, FBMediaGalleryTopBarConfiguration, FBTextOnPhotosLogger, FBUserSession, NSArray, NSString, UICollectionViewCell, UIImage, UIImageView, UIView;

@interface FBComposerTextOnPhotosViewController : UIViewController <FBMediaTopNavigationBarDelegation, FBComposerTextOnPhotosViewDelegate, FBComposerTextOnPhotosEditorViewControllerDelegate, UIViewControllerAnimatedTransitioning, FBComposerPhotoOverlayAttachmentsViewController, FBMediaGalleryToolProtocol>
{
    id <FBMediaGalleryBannerProviderProtocol> _bannerProvider;
    UIViewController *_bannerViewController;
    BOOL _didChangePhotoOverlay;
    UIImageView *_transitionImageView;
    UIImage *_imageToAddOverlaysTo;
    FBUserSession *_session;
    FBComposerTextOnPhotosView *_textOnPhotosView;
    FBComposerTextOnPhotosEditorViewController *_textOnPhotosEditor;
    struct CGRect _animationFrame;
    unsigned int _numberOfTextAdded;
    UIView *_privacyMessageView;
    UICollectionViewCell *_transitioningBackToCell;
    struct CGRect _transitioningBackToFrame;
    NSArray *_textOnPhotosInformation;
    UIImage *_textOnPhotosLayer;
    BOOL _isTextEditorPresented;
    BOOL _hasAddedInitialOverlayViews;
    BOOL _removedOutOfBoundsText;
    FBTextOnPhotosLogger *_logger;
    float _imageRotation;
    unsigned int _style;
    FBMediaGalleryTopBarConfiguration *_topBarConfiguration;
    BOOL _shouldHideStatusBar;
    NSString *_assetID;
    id <FBComposerPhotoOverlayViewControllerDelegate> _delegate;
}

@property(nonatomic) BOOL shouldHideStatusBar; // @synthesize shouldHideStatusBar=_shouldHideStatusBar;
@property(nonatomic) __weak id <FBComposerPhotoOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
- (void).cxx_destruct;
- (void)mediaGalleryWillPresentTool:(unsigned int)arg1;
- (void)mediaGalleryDidPressCurrentTool;
- (unsigned int)getMediaGalleryToolType;
- (void)_didHitDoneFromNavBar:(BOOL)arg1;
- (void)_openTextOnPhotosEditorWithPhotoOverlayView:(id)arg1;
- (void)_transitionBackFromEditorWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performDismissalTransition:(id)arg1;
- (void)_doPresentationAnimationWithContext:(id)arg1 shouldShowEditor:(BOOL)arg2 photoOverlayView:(id)arg3;
- (void)_performPresentationTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)composerTextOnPhotosEditorViewControllerDidDismiss:(id)arg1;
- (void)composerTextOnPhotosEditorViewController:(id)arg1 didRemovePhotoOverlayTextView:(id)arg2;
- (void)composerTextOnPhotosEditorViewController:(id)arg1 didUpdateComposerPhotoOverlayTextView:(id)arg2 newComposerPhotoOverlayTextView:(id)arg3;
- (void)composerTextOnPhotosEditorViewController:(id)arg1 finishedWithComposerPhotoOverlayTextView:(id)arg2;
- (void)composerTextOnPhotosEditorViewControllerDidCancel:(id)arg1;
- (void)didTapRightButton:(id)arg1;
- (void)didTapLeftButton:(id)arg1;
- (void)composerTextOnPhotosViewDidTapDone:(id)arg1;
- (void)composerTextOnPhotosViewDidTapCancel:(id)arg1;
- (void)composerTextOnPhotosView:(id)arg1 didTapPhotoOverlayView:(id)arg2;
- (void)composerPhotoOverlayViewDidTapAddButton:(id)arg1;
- (void)composerPhotoOverlayViewDidChangeOverlay:(id)arg1;
- (id)photoOverlayAttachmentsInformation;
- (id)overlayAttachmentsImageLayer;
- (void)prepareForDismissalAnimationWithCellEndFrame:(struct CGRect)arg1 cell:(id)arg2 animationFrame:(struct CGRect)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 transitionImageView:(id)arg2 textOnPhotosLayer:(id)arg3 imageRotation:(float)arg4 textOnPhotosInformation:(id)arg5 photoAssetID:(id)arg6 style:(unsigned int)arg7 topBarConfiguration:(id)arg8 session:(id)arg9 logger:(id)arg10 bannerProvider:(id)arg11;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

