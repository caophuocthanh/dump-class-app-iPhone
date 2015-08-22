//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGBaseCameraViewController.h"

#import "IGClipCollectionControllerDelegate.h"
#import "IGFilterCollectionControllerDelegate.h"
#import "IGFilterControlViewDelegate.h"
#import "IGImageViewTabBarDelegate.h"
#import "IGOverlayNuxControllerDelegate.h"
#import "IGShareViewControllerDelegate.h"
#import "IGVideoPlaybackViewDelegate.h"
#import "IGVideoScrubberViewDelegate.h"
#import "IGVideoTrimViewControlDelegate.h"

@class IGClipCollectionController, IGFilterCollectionController, IGFilterControlView, IGImageViewTabBar, IGMediaMetadata, IGOverlayNuxController, IGVideoInfo, IGVideoPlayButton, IGVideoPlaybackView, IGVideoScrubberView, IGVideoTrimView, IGVideoTrimViewControl, NSMutableDictionary, NSString, UIBarButtonItem, UICollectionView, UIImageView, UILabel, UIView;

@interface IGVideoEditorViewController : IGBaseCameraViewController <IGFilterCollectionControllerDelegate, IGClipCollectionControllerDelegate, IGVideoPlaybackViewDelegate, IGShareViewControllerDelegate, IGImageViewTabBarDelegate, IGVideoScrubberViewDelegate, IGFilterControlViewDelegate, IGVideoTrimViewControlDelegate, IGOverlayNuxControllerDelegate>
{
    struct CGSize _videoDisplaySize;
    BOOL _prefersToolbarHidden;
    BOOL _needsVideoUpdate;
    BOOL _trimAnimationAlreadyShown;
    BOOL _isClipTrimMode;
    BOOL _didReorderTray;
    IGVideoInfo *_videoInfo;
    IGVideoPlaybackView *_playerView;
    IGVideoPlayButton *_playButton;
    IGMediaMetadata *_mediaMetadata;
    NSMutableDictionary *_adjustedFilterStrengthValues;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UIImageView *_cinemaButton;
    UIImageView *_audioMuteButton;
    UIImageView *_coverFrameButton;
    UIImageView *_trimmerButton;
    UIImageView *_multiClipButton;
    UIImageView *_filtersButton;
    UIView *_NUXView;
    UIView *_audioMuteOverlayView;
    UILabel *_audioMutedLabel;
    UILabel *_audioOnLabel;
    int _audioMuteToggleTick;
    float _originalVideoLength;
    UIView *_toolContainerView;
    UIView *_rearrangeFilterOverlayView;
    UIView *_rearrangeClipOverlayView;
    IGImageViewTabBar *_modeTabBar;
    UICollectionView *_filterCollectionView;
    UICollectionView *_clipCollectionView;
    IGFilterCollectionController *_filterTrayController;
    IGFilterControlView *_filterControlView;
    IGClipCollectionController *_clipTrayController;
    IGVideoTrimView *_trimView;
    IGVideoTrimViewControl *_trimViewControl;
    IGVideoScrubberView *_scrubberView;
    IGOverlayNuxController *_overlayNuxController;
    CDStruct_1b6d18a9 _keyTime;
}

@property(nonatomic) BOOL didReorderTray; // @synthesize didReorderTray=_didReorderTray;
@property(nonatomic) CDStruct_1b6d18a9 keyTime; // @synthesize keyTime=_keyTime;
@property(nonatomic) BOOL isClipTrimMode; // @synthesize isClipTrimMode=_isClipTrimMode;
@property(nonatomic) BOOL trimAnimationAlreadyShown; // @synthesize trimAnimationAlreadyShown=_trimAnimationAlreadyShown;
@property(nonatomic) BOOL needsVideoUpdate; // @synthesize needsVideoUpdate=_needsVideoUpdate;
@property(nonatomic) BOOL prefersToolbarHidden; // @synthesize prefersToolbarHidden=_prefersToolbarHidden;
@property(retain, nonatomic) IGOverlayNuxController *overlayNuxController; // @synthesize overlayNuxController=_overlayNuxController;
@property(retain, nonatomic) IGVideoScrubberView *scrubberView; // @synthesize scrubberView=_scrubberView;
@property(retain, nonatomic) IGVideoTrimViewControl *trimViewControl; // @synthesize trimViewControl=_trimViewControl;
@property(retain, nonatomic) IGVideoTrimView *trimView; // @synthesize trimView=_trimView;
@property(retain, nonatomic) IGClipCollectionController *clipTrayController; // @synthesize clipTrayController=_clipTrayController;
@property(retain, nonatomic) IGFilterControlView *filterControlView; // @synthesize filterControlView=_filterControlView;
@property(retain, nonatomic) IGFilterCollectionController *filterTrayController; // @synthesize filterTrayController=_filterTrayController;
@property(retain, nonatomic) UICollectionView *clipCollectionView; // @synthesize clipCollectionView=_clipCollectionView;
@property(retain, nonatomic) UICollectionView *filterCollectionView; // @synthesize filterCollectionView=_filterCollectionView;
@property(retain, nonatomic) IGImageViewTabBar *modeTabBar; // @synthesize modeTabBar=_modeTabBar;
@property(retain, nonatomic) UIView *rearrangeClipOverlayView; // @synthesize rearrangeClipOverlayView=_rearrangeClipOverlayView;
@property(retain, nonatomic) UIView *rearrangeFilterOverlayView; // @synthesize rearrangeFilterOverlayView=_rearrangeFilterOverlayView;
@property(retain, nonatomic) UIView *toolContainerView; // @synthesize toolContainerView=_toolContainerView;
@property(nonatomic) float originalVideoLength; // @synthesize originalVideoLength=_originalVideoLength;
@property(nonatomic) int audioMuteToggleTick; // @synthesize audioMuteToggleTick=_audioMuteToggleTick;
@property(retain, nonatomic) UILabel *audioOnLabel; // @synthesize audioOnLabel=_audioOnLabel;
@property(retain, nonatomic) UILabel *audioMutedLabel; // @synthesize audioMutedLabel=_audioMutedLabel;
@property(retain, nonatomic) UIView *audioMuteOverlayView; // @synthesize audioMuteOverlayView=_audioMuteOverlayView;
@property(retain, nonatomic) UIView *NUXView; // @synthesize NUXView=_NUXView;
@property(retain, nonatomic) UIImageView *filtersButton; // @synthesize filtersButton=_filtersButton;
@property(retain, nonatomic) UIImageView *multiClipButton; // @synthesize multiClipButton=_multiClipButton;
@property(retain, nonatomic) UIImageView *trimmerButton; // @synthesize trimmerButton=_trimmerButton;
@property(retain, nonatomic) UIImageView *coverFrameButton; // @synthesize coverFrameButton=_coverFrameButton;
@property(retain, nonatomic) UIImageView *audioMuteButton; // @synthesize audioMuteButton=_audioMuteButton;
@property(retain, nonatomic) UIImageView *cinemaButton; // @synthesize cinemaButton=_cinemaButton;
@property(retain, nonatomic) UIBarButtonItem *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSMutableDictionary *adjustedFilterStrengthValues; // @synthesize adjustedFilterStrengthValues=_adjustedFilterStrengthValues;
@property(retain, nonatomic) IGMediaMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(retain, nonatomic) IGVideoPlayButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) IGVideoPlaybackView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) IGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
- (void).cxx_destruct;
- (void)cancelRenderAndUpload;
- (void)trimValueChanged:(id)arg1;
- (void)trimmerDidScrub:(id)arg1;
- (void)trimWillStart;
- (id)cacheKeyForClip:(id)arg1 filter:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)cachedThumbnailForClip:(id)arg1 andTime:(CDStruct_1b6d18a9)arg2;
- (void)cacheThumbnail:(id)arg1 forClip:(id)arg2 andTime:(CDStruct_1b6d18a9)arg3;
- (void)populateThumbnailCacheForClipIndex:(unsigned int)arg1;
- (void)generateScrubberFrames;
- (void)scrubberViewDidMoveHandleToPosition:(float)arg1;
- (void)showVideoTrimmer;
- (void)showCoverFramePicker;
- (void)showClips;
- (void)showFilters;
- (void)reconcileVideoPlayer;
- (void)exitTrimControlView;
- (void)videoTrimViewDidPressCancel;
- (void)videoTrimViewDidPressDone;
- (void)filterControlView:(id)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned int)arg3;
- (void)filterControlView:(id)arg1 didChangeTintColor:(unsigned int)arg2 withTintType:(unsigned int)arg3;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlViewDidToggleGrid:(BOOL)arg1;
- (void)filterControlViewDidTapRotate:(id)arg1;
- (void)filterControlView:(id)arg1 didChangeBorderSelection:(BOOL)arg2;
- (void)filterControlView:(id)arg1 didChangeValue:(float)arg2;
- (void)filterControlViewDidEndDragging:(id)arg1;
- (void)filterControlViewDidStartDragging:(id)arg1;
- (void)filterControlViewDidPressCancel:(id)arg1;
- (void)filterControlViewDidPressDone:(id)arg1;
- (void)onToolCancel:(id)arg1;
- (void)onToolDone:(id)arg1;
- (void)dismissFilterControlView:(id)arg1;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 leftBarButtonItem:(id)arg4 rightBarButtonItem:(id)arg5 andCompletion:(CDUnknownBlockType)arg6;
- (void)presentFilterControlView:(id)arg1 withTitle:(id)arg2 subtitle:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (id)titleForItem:(id)arg1;
- (void)tabBar:(id)arg1 didSelectImageView:(id)arg2 previousImageView:(id)arg3;
- (BOOL)tabBar:(id)arg1 shouldSelectImageView:(id)arg2;
- (void)showTrimAnimation;
- (void)showFilterTrayNux;
- (void)addScissorsAnimationToImageView:(id)arg1 tintColor:(id)arg2;
- (id)trimmerAnimationImagesWithTintColor:(id)arg1;
- (void)overlayNuxControllerWillDismiss;
- (void)metadataControllerWillFinish:(id)arg1;
- (void)metadataControllerDidCancel:(id)arg1;
- (void)metadataControllerDidAppear:(id)arg1;
- (void)toggleStabilization;
- (BOOL)stabilizationEnabled;
- (void)toggleAudioMuting;
- (BOOL)isAudioMutingEnabled;
- (void)setNavigationItemTitle:(id)arg1 subtitle:(id)arg2;
- (id)createTitleView:(id)arg1 withSubtitle:(id)arg2;
- (void)clipControllerDidFinishReordering:(id)arg1;
- (void)clipControllerDidStartReordering:(id)arg1;
- (void)didTapClipAtIndexPath:(id)arg1;
- (void)clipController:(id)arg1 didChangeClipOrder:(id)arg2;
- (void)filterControllerDidFinishReordering:(id)arg1;
- (void)filterControllerDidStartReordering:(id)arg1;
- (float)filterController:(id)arg1 filterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterStrengthForClass:(Class)arg2;
- (void)filterController:(id)arg1 didSelectFilterWithClass:(Class)arg2 changed:(BOOL)arg3 willScroll:(BOOL)arg4;
- (void)playbackView:(id)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)filterPlayerViewDidFinishPlaying;
- (void)startVideoRender;
- (void)done;
- (void)cancel;
- (void)togglePlayback;
- (void)onVideoTapped;
- (void)filterControllerDidSelectAddMoreFilters:(id)arg1;
- (id)accessibilityHintForView:(id)arg1;
- (id)accessibilityLabelForView:(id)arg1;
- (void)configureAccessibiltyForTabBar:(id)arg1;
- (void)buildModeTabBar;
- (void)buildToolContainerView;
- (void)buildNavbar;
- (id)titleForTabView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)applicationWillResignActive:(id)arg1;
- (BOOL)overlayIsOpaque;
- (void)readyForDisplayCallback:(CDUnknownBlockType)arg1;
- (id)initWithVideoInfo:(id)arg1 mediaMetadata:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

