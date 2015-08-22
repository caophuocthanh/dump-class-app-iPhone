//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBaseCameraViewController.h"

#import "IGAdjustControllerDelegate.h"
#import "IGFilterCollectionControllerDelegate.h"
#import "IGFilterControlViewDelegate.h"
#import "IGImageViewTabBarDelegate.h"
#import "IGOverlayNuxControllerDelegate.h"
#import "IGShareViewControllerDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"

@class IGAdjustController, IGCameraGuideView, IGFilterCollectionController, IGFilterControlView, IGFilteredPhotoView, IGImageViewTabBar, IGMediaMetadata, IGOverlayNuxController, IGTiltShiftGestureController, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, UIBarButtonItem, UIButton, UICollectionView, UIImage, UIImageView, UILongPressGestureRecognizer, UIView;

@interface IGEditorViewController : IGBaseCameraViewController <IGShareViewControllerDelegate, UIGestureRecognizerDelegate, IGImageViewTabBarDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, IGFilterCollectionControllerDelegate, IGFilterControlViewDelegate, IGAdjustControllerDelegate, IGOverlayNuxControllerDelegate>
{
    int _photoOrigin;
    UIView *_editContainerView;
    BOOL _needsRender;
    UIButton *_gridOverlayButton;
    UIButton *_rotateOverlayButton;
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_doneButton;
    IGAdjustController *_adjustController;
    BOOL _luxEnabled;
    BOOL _luxHasBeenEdited;
    BOOL _bordersEnabled;
    BOOL _readyToProceed;
    BOOL _didReceiveFullSizedBuffer;
    BOOL _prefersToolbarHidden;
    BOOL _didReorderTray;
    UIImage *_image;
    IGFilteredPhotoView *_editView;
    int _imageSourceType;
    IGMediaMetadata *_mediaMetadata;
    NSMutableDictionary *_adjustedFilterStrengthValues;
    IGCameraGuideView *_cropGridView;
    UILongPressGestureRecognizer *_showUneditedGestureRecognizer;
    UIView *_toolContainerView;
    UIView *_rearrangeFilterOverlayView;
    IGImageViewTabBar *_modeTabBar;
    UIImageView *_filterTabView;
    UIImageView *_luxTabView;
    UIImageView *_toolsTabView;
    UIView *_NUXView;
    UICollectionView *_filterCollectionView;
    IGFilterCollectionController *_filterTrayController;
    UICollectionView *_toolCollectionView;
    IGFilterControlView *_luxControlView;
    IGFilterControlView *_filterControlView;
    IGOverlayNuxController *_overlayNuxController;
    IGTiltShiftGestureController *_tiltShiftController;
    float _orientationAngle;
    float _cropZoomScale;
    float _perspectiveXRotateAngle;
    float _perspectiveYRotateAngle;
    float _perspectiveZRotateAngle;
    NSObject<OS_dispatch_queue> *_renderQueue;
    struct CGSize _maxTextureSize;
    struct CGPoint _cropCenter;
    struct CGRect _cropRect;
}

+ (id)imageViewTabItemWithImageName:(id)arg1;
@property(nonatomic) BOOL didReorderTray; // @synthesize didReorderTray=_didReorderTray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(nonatomic) BOOL prefersToolbarHidden; // @synthesize prefersToolbarHidden=_prefersToolbarHidden;
@property(nonatomic) BOOL didReceiveFullSizedBuffer; // @synthesize didReceiveFullSizedBuffer=_didReceiveFullSizedBuffer;
@property(nonatomic, getter=isReadyToProceed) BOOL readyToProceed; // @synthesize readyToProceed=_readyToProceed;
@property(nonatomic) float perspectiveZRotateAngle; // @synthesize perspectiveZRotateAngle=_perspectiveZRotateAngle;
@property(nonatomic) float perspectiveYRotateAngle; // @synthesize perspectiveYRotateAngle=_perspectiveYRotateAngle;
@property(nonatomic) float perspectiveXRotateAngle; // @synthesize perspectiveXRotateAngle=_perspectiveXRotateAngle;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) float cropZoomScale; // @synthesize cropZoomScale=_cropZoomScale;
@property(nonatomic) struct CGPoint cropCenter; // @synthesize cropCenter=_cropCenter;
@property(nonatomic) float orientationAngle; // @synthesize orientationAngle=_orientationAngle;
@property(nonatomic) struct CGSize maxTextureSize; // @synthesize maxTextureSize=_maxTextureSize;
@property(retain, nonatomic) IGTiltShiftGestureController *tiltShiftController; // @synthesize tiltShiftController=_tiltShiftController;
@property(retain, nonatomic) IGOverlayNuxController *overlayNuxController; // @synthesize overlayNuxController=_overlayNuxController;
@property(retain, nonatomic) IGFilterControlView *filterControlView; // @synthesize filterControlView=_filterControlView;
@property(retain, nonatomic) IGFilterControlView *luxControlView; // @synthesize luxControlView=_luxControlView;
@property(retain, nonatomic) UICollectionView *toolCollectionView; // @synthesize toolCollectionView=_toolCollectionView;
@property(retain, nonatomic) IGFilterCollectionController *filterTrayController; // @synthesize filterTrayController=_filterTrayController;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) UIView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) UIImageView *toolsTabView; // @synthesize toolsTabView=_toolsTabView;
@property(retain, nonatomic) UIImageView *luxTabView; // @synthesize luxTabView=_luxTabView;
@property(retain, nonatomic) UIImageView *filterTabView; // @synthesize filterTabView=_filterTabView;
@property(retain, nonatomic) IGImageViewTabBar *modeTabBar; // @synthesize modeTabBar=_modeTabBar;
@property(retain, nonatomic) UIView *rearrangeFilterOverlayView; // @synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView;
@property(retain, nonatomic) UIView *toolContainerView; // @synthesize toolContainerView=_toolContainerView;
@property(retain, nonatomic) UILongPressGestureRecognizer *showUneditedGestureRecognizer; // @synthesize showUneditedGestureRecognizer=_showUneditedGestureRecognizer;
@property(retain, nonatomic) IGCameraGuideView *cropGridView; // @synthesize cropGridView=_cropGridView;
@property(retain, nonatomic) NSMutableDictionary *adjustedFilterStrengthValues; // @synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(nonatomic) int imageSourceType; // @synthesize imageSourceType=_imageSourceType;
@property(retain, nonatomic) IGFilteredPhotoView *editView; // @synthesize editView=_editView;
@property(nonatomic) BOOL bordersEnabled; // @synthesize bordersEnabled=_bordersEnabled;
@property(nonatomic) BOOL luxHasBeenEdited; // @synthesize luxHasBeenEdited=_luxHasBeenEdited;
@property(nonatomic) BOOL luxEnabled; // @synthesize luxEnabled=_luxEnabled;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)startFaceDetection;
- (void)updateGridViewScale;
- (id)editsDictionary;
- (void)updateReadyState;
- (void)metadataControllerWillFinish:(id)arg1;
- (void)metadataControllerDidCancel:(id)arg1;
- (void)metadataControllerDidAppear:(id)arg1;
- (void)renderWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)filterControlViewDidToggleGrid:(BOOL)arg1;
- (float)filterController:(id)arg1 filterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(BOOL)arg3 willScroll:(BOOL)arg4;
- (void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
- (void)filterControllerDidSelectAddMoreFilters:(id)arg1;
- (id)accessibilityHintForView:(id)arg1;
- (id)accessibilityLabelForView:(id)arg1;
- (void)configureAccessibiltyForTabBar:(id)arg1;
@property(nonatomic) unsigned int tiltShiftMode;
- (void)done:(id)arg1;
- (void)cancel;
- (BOOL)isDraftWorthWarningBeforeDiscard;
- (void)buildNavbar;
- (void)tabBar:(id)arg1 didSelectImageView:(id)arg2 previousImageView:(id)arg3;
- (BOOL)tabBar:(id)arg1 shouldSelectImageView:(id)arg2;
- (id)identifierForTabView:(id)arg1;
- (id)titleForTabView:(id)arg1;
- (void)buildModeTabBar;
- (void)buildToolContainerView;
- (void)gestureShowUnedited:(id)arg1;
- (void)filterControlView:(id)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned int)arg3;
- (void)filterControlView:(id)arg1 didChangeTintColor:(unsigned int)arg2 withTintType:(unsigned int)arg3;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlViewDidTapRotate:(id)arg1;
- (void)filterControlView:(id)arg1 didChangeBorderSelection:(BOOL)arg2;
- (void)filterControlViewDidEndDragging:(id)arg1;
- (void)filterControlViewDidStartDragging:(id)arg1;
- (void)filterControlViewDidPressDone:(id)arg1;
- (void)filterControlViewDidPressCancel:(id)arg1;
- (void)logFilterControlDismiss:(id)arg1 confirmed:(BOOL)arg2;
- (void)filterControlView:(id)arg1 didChangeValue:(float)arg2;
- (void)onToolCancel:(id)arg1;
- (void)onToolDone:(id)arg1;
- (id)analyticsToolStringForControl:(int)arg1;
- (void)setValue:(float)arg1 forFilterControl:(int)arg2;
- (void)dismissFilterControlView:(id)arg1;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(CDUnknownBlockType)arg6;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)setNavigationItemTitle:(id)arg1 subtitle:(id)arg2;
- (id)createTitleView:(id)arg1 withSubtitle:(id)arg2;
- (void)filterControllerDidFinishReordering:(id)arg1;
- (void)filterControllerDidStartReordering:(id)arg1;
- (void)onRotateTap;
- (id)rotateOverlayButton;
- (id)gridOverlayButton;
- (id)_overlayButtonWithIcon:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)subTitleForAdjustView;
- (float)valueForFilterControl:(int)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)shouldHighlightControl:(int)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)buildToolPicker;
- (void)buildFilterPicker;
- (void)showFilterTrayNux;
- (void)overlayNuxControllerWillDismiss;
- (id)editContainerView;
- (void)setImageWithBufferData:(id)arg1 isPreviewBuffer:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setImageWithBufferData:(id)arg1 isPreviewBuffer:(BOOL)arg2;
- (void)setImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (struct CGSize)supportedLuxOutputSizeForSize:(struct CGSize)arg1;
- (void)updateEditViewImage;
- (id)croppedSurfaceWithSize:(struct CGSize)arg1;
- (void)setDefaults;
- (void)cancelUploadAndSetNeedsRender;
- (void)adjustControllerDidUpdate:(id)arg1;
- (void)adjustControllerWillUpdate:(id)arg1;
- (void)allowUserInteraction:(BOOL)arg1;
- (id)adjustController;
- (void)loadImageFromFile:(id)arg1;
@property(nonatomic) float straightenAngle;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)overlayIsOpaque;
- (int)filterControlFromIndexPath:(id)arg1;
- (id)indexPathFromFilterControl:(int)arg1;
- (id)initWithImageFromFile:(id)arg1 mediaMetadata:(id)arg2;
- (id)initWithImageFromLibrary:(id)arg1 cropRect:(struct CGRect)arg2 mediaMetadata:(id)arg3;
- (id)initForImageFromCameraWithMediaMetadata:(id)arg1;
- (id)initWithPhotoOrigin:(int)arg1 sourceType:(int)arg2 mediaMetadata:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

