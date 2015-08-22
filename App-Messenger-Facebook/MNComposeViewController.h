//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "FBClassProvidable.h"
#import "FBKeyboardInputModeTrackerDelegate.h"
#import "FBKeyboardObserverDelegate.h"
#import "FBKeyboardPresenting.h"
#import "FBMGrowingTextViewDelegate.h"
#import "FBModallyPresentableItem.h"
#import "FBPopoverControllerDelegate.h"
#import "FBScrollKeyboardControllerListener.h"
#import "MNComposeViewDelegate.h"
#import "MNComposerActionViewDelegate.h"
#import "MNComposerEmojiWordResultsParserListening.h"
#import "MNComposerExtensionEditDelegate.h"
#import "MNComposerExtensionPresenter.h"
#import "MNComposerExtensionProviderListener.h"
#import "MNComposerExtensionSendDelegate.h"
#import "MNComposerExtensionStateManagerListener.h"
#import "MNComposerExtensionTrayPresentationStrategyDelegate.h"
#import "MNComposerOverflowExtensionDelegate.h"
#import "MNComposerPredictiveEmojiViewDelegate.h"
#import "MNComposerPreviewViewControllerDelegate.h"
#import "MNComposerTabControllerDelegate.h"
#import "MNComposerTextParserListening.h"
#import "MNHawtLikeNuxControllerDelegate.h"
#import "MNLikeComposingListener.h"

@class FBEmoticonTranslator, FBInteractionLagTracker, FBKeyboardInputModeTracker, FBKeyboardObserver, FBKeyboardResettingTracker, FBMobileConfigFactory, FBPopoverController, FBUserSession, FBViewStateDebouncer, MNComposeContainerView, MNComposeView, MNComposeViewControllerListenerAnnouncer, MNComposerActionView, MNComposerBadgeExperimentContext, MNComposerEmojiCompletionExperimentContext, MNComposerEmojiWordResultsParser, MNComposerExtensibleExperimentContext, MNComposerExtensionOrder, MNComposerExtensionOrderExperimentContext, MNComposerExtensionOrderProvider, MNComposerExtensionStateManager, MNComposerHashtagExperimentContext, MNComposerKeyboardExtension, MNComposerLayoutConfiguration, MNComposerLayoutContext, MNComposerOverflowExtension, MNComposerPopoverOverflowExtension, MNComposerPredictiveEmojiView, MNComposerPreviewController, MNComposerSendButtonLocationExperimentContext, MNComposerTabController, MNComposerTabOrderExperimentContext, MNComposerTextParser, MNComposerTriggersLogger, MNHawtLikeNuxController, MNInputWrapperView, MNLikeSoundController, MNLikeStickerController, MNPhotoImageRequester, MNPhotoImageUploadResultCacher, MNSelfieCamEnhancementsExperimentContext, MNSoundController, MNTabBar, MNUserSettings, NSDate, NSString, UIPageControl, UIView, UIView<FBTextInputView>, UIViewController;

@interface MNComposeViewController : FBContainerViewController <MNComposerExtensionProviderListener, MNComposerOverflowExtensionDelegate, MNComposerExtensionEditDelegate, MNComposerExtensionSendDelegate, MNComposerExtensionPresenter, MNComposerExtensionStateManagerListener, MNComposeViewDelegate, FBMGrowingTextViewDelegate, MNLikeComposingListener, MNComposerTabControllerDelegate, MNComposerActionViewDelegate, MNHawtLikeNuxControllerDelegate, MNComposerExtensionTrayPresentationStrategyDelegate, FBKeyboardObserverDelegate, FBKeyboardInputModeTrackerDelegate, FBModallyPresentableItem, FBPopoverControllerDelegate, MNComposerPreviewViewControllerDelegate, MNComposerTextParserListening, MNComposerEmojiWordResultsParserListening, MNComposerPredictiveEmojiViewDelegate, FBClassProvidable, FBKeyboardPresenting, FBScrollKeyboardControllerListener>
{
    MNUserSettings *_userSettings;
    FBUserSession *_session;
    FBMobileConfigFactory *_mobileConfigFactory;
    MNComposerTabController *_composerTabController;
    FBKeyboardResettingTracker *_keyboardResettingTracker;
    FBKeyboardObserver *_keyboardObserver;
    FBKeyboardInputModeTracker *_keyboardInputModeTracker;
    id <MNComposerLayoutStrategy> _layoutStrategy;
    MNComposeContainerView *_containerView;
    MNComposeView *_composeView;
    MNTabBar *_composerTabBar;
    UIPageControl *_composerTabBarPageControl;
    MNComposerActionView *_composerActionView;
    MNInputWrapperView *_inputWrapperView;
    FBPopoverController *_popoverController;
    MNComposerKeyboardExtension *_keyboardExtension;
    FBInteractionLagTracker *_typingLagTracker;
    BOOL _typingLagTrackingEnabled;
    MNComposeViewControllerListenerAnnouncer *_announcer;
    MNLikeStickerController *_likeStickerController;
    MNLikeSoundController *_likeSoundController;
    MNSoundController *_soundController;
    unsigned int _keyboardUpdateCounter;
    NSDate *_lastKeyTypedTime;
    struct KeyboardConfiguration _lastKeyboardConfiguration;
    FBEmoticonTranslator *_emoticonTranslator;
    FBViewStateDebouncer *_sendAndLikeButtonVisibilityDebouncer;
    MNHawtLikeNuxController *_hawtLikeNuxController;
    UIView<FBTextInputView> *_currentTextInputView;
    id <MNComposerExtensionPresentationStrategy> _currentPresentationStrategy;
    id <FBModalPresentationStackManager> _modalPresentationStackManager;
    id <MNComposerExtensionProviding> _extensionProvider;
    MNComposerExtensionOrderProvider *_extensionOrderProvider;
    MNComposerExtensionOrder *_extensionOrder;
    MNComposerOverflowExtension *_overflowExtension;
    MNComposerPopoverOverflowExtension *_popoverOverflowExtension;
    MNComposerExtensionStateManager *_extensionStateManager;
    MNPhotoImageRequester *_imageRequester;
    MNPhotoImageUploadResultCacher *_imageUploadResultCacher;
    MNComposerSendButtonLocationExperimentContext *_composerSendButtonExperimentContext;
    MNComposerBadgeExperimentContext *_badgeExperimentContext;
    MNComposerExtensionOrderExperimentContext *_composerExtensionOrderExperimentContext;
    MNComposerTabOrderExperimentContext *_composerTabOrderExperimentContext;
    MNComposerHashtagExperimentContext *_composerHashtagExperimentContext;
    MNComposerEmojiCompletionExperimentContext *_composerEmojiCompletionExperimentContext;
    MNComposerExtensibleExperimentContext *_composerExtensibleExperimentContext;
    MNSelfieCamEnhancementsExperimentContext *_selfieCamExperimentContext;
    MNComposerPreviewController *_previewController;
    MNComposerTextParser *_composerTextParser;
    struct _NSRange _selectedRange;
    MNComposerTriggersLogger *_triggersLogger;
    MNComposerEmojiWordResultsParser *_emojiWordsParser;
    MNComposerPredictiveEmojiView *_predictiveTextView;
    BOOL _shouldResignFirstResponder;
    BOOL _disableComposing;
    BOOL _disableSending;
    BOOL _canSendLike;
    BOOL _transitioningToNewSize;
    BOOL _needsApplyExtension;
    BOOL _readyForKeyboardPresentation;
    id <MNComposerExtension> _currentComposerExtension;
    id <MNComposeViewControllerDelegate> _delegate;
    id <MNTypingStateListener> _typingStateListener;
    NSString *_placeholderTextOverride;
    unsigned int _emojiPredictionStyle;
    MNComposerLayoutConfiguration *_layoutConfiguration;
    MNComposerLayoutContext *_layoutContext;
    id <MNComposerExtensionOverflowStrategy> _extensionOverflowStrategy;
    unsigned int _appearanceState;
    id <MNComposingContext> _composingContext;
    struct CGRect _keyboardFrame;
}

@property(copy, nonatomic) id <MNComposingContext> composingContext; // @synthesize composingContext=_composingContext;
@property(nonatomic) unsigned int appearanceState; // @synthesize appearanceState=_appearanceState;
@property(retain, nonatomic) id <MNComposerExtensionOverflowStrategy> extensionOverflowStrategy; // @synthesize extensionOverflowStrategy=_extensionOverflowStrategy;
@property(copy, nonatomic) MNComposerLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property(nonatomic) BOOL readyForKeyboardPresentation; // @synthesize readyForKeyboardPresentation=_readyForKeyboardPresentation;
@property(nonatomic) BOOL needsApplyExtension; // @synthesize needsApplyExtension=_needsApplyExtension;
@property(nonatomic) BOOL transitioningToNewSize; // @synthesize transitioningToNewSize=_transitioningToNewSize;
@property(copy, nonatomic) MNComposerLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(nonatomic) unsigned int emojiPredictionStyle; // @synthesize emojiPredictionStyle=_emojiPredictionStyle;
@property(copy, nonatomic) NSString *placeholderTextOverride; // @synthesize placeholderTextOverride=_placeholderTextOverride;
@property(retain, nonatomic) id <MNTypingStateListener> typingStateListener; // @synthesize typingStateListener=_typingStateListener;
@property(nonatomic) __weak id <MNComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL canSendLike; // @synthesize canSendLike=_canSendLike;
@property(nonatomic) BOOL disableSending; // @synthesize disableSending=_disableSending;
@property(nonatomic) BOOL disableComposing; // @synthesize disableComposing=_disableComposing;
@property(nonatomic) BOOL shouldResignFirstResponder; // @synthesize shouldResignFirstResponder=_shouldResignFirstResponder;
@property(readonly, nonatomic) id <MNComposerExtension> currentComposerExtension; // @synthesize currentComposerExtension=_currentComposerExtension;
- (void).cxx_destruct;
- (void)_resetEmojiState;
- (void)_tearDownEmojiState;
- (void)_dismissPredictiveEmoji;
- (void)_presentPredictiveEmoji;
- (void)_updateEmojiPreviewVisibility;
- (void)_setDismissedEmoji:(id)arg1;
- (void)_resetComposerTabControllerLabel;
- (void)_updateComposerTabControllerLabel;
- (void)predictiveEmojiViewDidPressCollapseButton:(id)arg1;
- (void)predictiveEmojiView:(id)arg1 didSelectEmoji:(id)arg2;
- (void)didUpdateParseState;
- (void)didParseEmojis:(id)arg1;
- (void)_updateComposeViewSearchButtonHighlighted;
- (void)_updateComposeViewSearchButtonDisabledState;
- (void)_updateComposeViewAttributedText;
- (void)didParseImplicitTriggerQueries:(id)arg1;
- (void)didParseStickerTriggerQuery:(id)arg1;
- (void)didParseHashtagQuery:(id)arg1;
- (void)didParseTrendingQuery;
- (void)didParseEmptyQuery;
- (void)_updateModalPresentationViewInsetsWithKeyboardFrame:(struct CGRect)arg1;
- (void)_updateModalPresentationViewSize;
- (void)_updateModalPresentationView;
- (struct CGRect)_modalPresentatationBounds;
@property(readonly, nonatomic) UIViewController *modalPresentationViewController;
@property(readonly, nonatomic) UIView *modalPresentationView;
- (id)_analyticsExtrasWith:(id)arg1;
- (void)_logSelectionForComposerExtension:(id)arg1 selectedFromMoreTab:(BOOL)arg2;
- (void)keyboardInputMode:(id)arg1 didChangeToLocale:(id)arg2;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
- (BOOL)_isUpdatingKeyboard;
- (void)_endUpdatingKeyboard;
- (void)_beginUpdatingKeyboard;
@property(nonatomic) BOOL showsKeyboard;
@property(readonly, nonatomic) UIView<FBTextInputView> *textInputView;
- (void)_updateHawtLikeNux;
- (void)hawtLikeNuxControllerDidHideNux:(id)arg1;
- (void)hawtLikeNuxControllerWillShowNux:(id)arg1;
- (BOOL)hawtLikeNuxControllerCanPresentNux:(id)arg1;
- (void)addLikeComposingListener:(id)arg1;
- (void)didEndComposingLikeStickerWithType:(unsigned int)arg1;
- (void)didCancelComposingLikeStickerTimedOut:(BOOL)arg1;
- (void)didBeginComposingLikeStickerWithType:(unsigned int)arg1 maxDuration:(double)arg2;
- (void)addListener:(id)arg1;
- (void)composerTabControllerDidChangeTabWidth:(id)arg1;
- (void)composerTabControllerDidSetTabBarItems:(id)arg1;
- (void)composerTabController:(id)arg1 didSelectTabAtIndex:(int)arg2;
- (BOOL)composerTabController:(id)arg1 shouldSelectTabAtIndex:(int)arg2;
- (void)_hardwareKeyboardDidPressSend;
- (void)_hardwareKeyboardNewline;
- (id)keyCommands;
- (void)composerActionViewDidPressHashtag:(id)arg1;
- (void)composerActionViewDidPressSend:(id)arg1;
- (void)_sendHashTag;
- (void)composerPreviewViewControllerNeedsResize:(id)arg1;
- (void)composerPreviewViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned int)arg3;
- (void)composerPreviewViewController:(id)arg1 didUpdateVisibilityWithViewController:(id)arg2;
- (BOOL)composerPreviewViewController:(id)arg1 shouldShowPreviewForText:(id)arg2;
- (void)_updateComposeViewPreview;
- (void)_didPressHashtag;
- (void)_didPressSend;
- (id)textInputContextIdentifierForComposeView:(id)arg1;
- (void)composeViewDidTapInputView:(id)arg1;
- (void)_enableSendAndLikeButton;
- (void)_temporarilyDisableLikeSendUserInteraction;
- (void)_resetComposeViewText;
- (void)_sendTextMessage;
- (void)composeView:(id)arg1 textTappedAtRange:(struct _NSRange)arg2;
- (void)_updateComposerIcon;
- (void)_updateComposerPreviewView;
- (void)_updateSearchMode;
- (BOOL)_isSearching;
- (void)_setSearchMode:(int)arg1;
- (void)composeViewDidPressEmoji:(id)arg1;
- (void)composeViewDidPressSearch:(id)arg1;
- (void)_stopTypingLagTrackerIfNeeded;
- (void)_startTypingLagTrackerIfNeeded;
- (void)_updateTypingLagTracker;
- (id)typingLagTracker;
- (BOOL)growingTextView:(id)arg1 didPaste:(id)arg2;
- (BOOL)growingTextViewShouldHandlePaste:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (BOOL)growingTextView:(id)arg1 shouldChangeHeight:(float)arg2;
- (BOOL)growingTextViewShouldReturn:(id)arg1;
- (BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)_textDidChangeShouldNotifyDelegate:(BOOL)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)_textViewDidEndEditing;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (void)_textViewDidBeginEditing;
- (void)growingTextViewDidBeginEditing:(id)arg1;
- (BOOL)_isDescendantOfAnyViewControllerOnNavigationStack;
- (BOOL)_composeViewShouldEndEditing;
- (BOOL)growingTextViewShouldEndEditing:(id)arg1;
- (BOOL)_composeViewShouldBeginEditing;
- (BOOL)growingTextViewShouldBeginEditing:(id)arg1;
- (void)composerExtension:(id)arg1 didSelectContent:(id)arg2;
- (void)composerExtensionWillSelectContent:(id)arg1;
- (void)composerExtensionDidCancelSending:(id)arg1;
- (void)composerExtension:(id)arg1 didCommitSendingWithText:(id)arg2 attachments:(id)arg3 attribution:(id)arg4;
- (void)composerExtensionDidBeginSending:(id)arg1;
- (void)composerExtensionDidDeleteCharacterBeforeCursor:(id)arg1;
- (void)composerExtension:(id)arg1 didInsertStringAtCurrentCursor:(id)arg2;
- (void)composerExtensionDidEndEditing:(id)arg1;
- (BOOL)composerExtensionShouldEndEditing:(id)arg1;
- (void)composerExtensionDidBeginEditing:(id)arg1;
- (BOOL)composerExtensionShouldBeginEditing:(id)arg1;
- (void)composerExtensionWillLeaveApp:(id)arg1;
- (void)composerExtensionEligibilityDidChange:(id)arg1;
- (void)composerExtensionWillRePresent:(id)arg1;
- (void)composerOverflowExtensionDidDisplayExtensionList:(id)arg1;
- (void)composerOverflowExtensionDidBecomeActive:(id)arg1;
- (void)composerOverflowExtension:(id)arg1 didSelectExtension:(id)arg2;
- (void)composerRecentsExtensionDidSelectGetApps:(id)arg1;
- (void)composerExtensionDidDismiss:(id)arg1;
- (void)composerExtensionDidSendAttachmentsWithKeyboardExpected:(id)arg1;
- (id)composingContextForComposerExtension:(id)arg1;
- (void)composerExtensionDidUpdateTabBarItem:(id)arg1;
- (BOOL)_isKeyboardExtensionActiveWithSystemKeyboard;
- (void)_showKeyboardIfOverflowExtensionEmpty;
- (void)_applyComposerLayoutConfiguration;
- (void)_updateLayoutConfiguration;
- (void)updateLayoutWithContext:(id)arg1;
- (void)_updateTextViewCaretVisibility;
- (void)_updateMaxNumberOfLinesForOrientation:(int)arg1;
- (void)_updateComposeViewSearchOption;
- (unsigned int)_computeComposeViewSearchOption;
- (void)_updateContentSearchMode;
- (void)_updateComposeViewContentEdgeInsets;
- (void)_updateInputFocusGestureRecognizer;
- (void)_updateComposerTabBarItems;
- (void)_updateComposerTabBarSelection;
- (void)_updateComposerState;
- (void)_updateComposerTabBarTapTarget;
- (void)_updateCurrentComposerExtension;
- (void)_updateComposeViewExtensionTrait;
- (void)_updateComposeViewPlaceholder;
- (void)_updateSendAndLikeButtonVisibilityAnimated:(BOOL)arg1;
- (void)_updateSendAndLikeButtonVisibility;
- (void)_updateSendAndLikeButtonEnabledState;
- (void)_updateSendAndLikeButton;
- (void)setSendAndLikeButtonEnabled:(BOOL)arg1;
- (void)_moveTrayViewWithBlock:(CDUnknownBlockType)arg1;
- (void)_moveTrayViewFromModalHostStackToInputView;
- (void)_moveTrayViewFromInputViewToModalHostStack;
- (void)_dismissKeyboardInTrayIfNecessary;
- (BOOL)isPresentingTrayFullScreen;
- (void)_dismissFullScreenTrayComposerAnimated:(BOOL)arg1 withKeyboardDismissalBlock:(CDUnknownBlockType)arg2;
- (BOOL)_shouldAnimateKeyboardDismissal;
- (void)composerExtensionTrayPresentationStrategyWillDismissKeyboard:(id)arg1 withKeyboardDismissalBlock:(CDUnknownBlockType)arg2;
- (void)composerExtensionTrayPresentationStrategyWillPresentKeyboard:(id)arg1 withKeyboardPresentationBlock:(CDUnknownBlockType)arg2;
- (void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned int)arg2;
- (void)_transitionFromPresentationStrategy:(id)arg1 toPresentationStrategy:(id)arg2;
- (BOOL)requiresTextEditingForPopover:(id)arg1;
- (BOOL)isPopoverPresented:(id)arg1;
- (void)dismissPopover:(id)arg1;
- (void)presentPopover:(id)arg1;
- (void)_positionPopoverController;
- (BOOL)requiresTextEditingForTray:(id)arg1;
- (BOOL)_isTrayPresentedInModalHostStack:(id)arg1;
- (BOOL)_isTrayPresentedAsCustomInput:(id)arg1;
- (BOOL)isTrayPresented:(id)arg1;
- (void)dismissTray:(id)arg1;
- (void)presentTray:(id)arg1;
- (BOOL)requiresTextEditingForKeyboard:(id)arg1;
- (BOOL)_isKeyboardPresented;
- (BOOL)isKeyboardPresented:(id)arg1;
- (void)dismissKeyboard:(id)arg1;
- (void)presentKeyboard:(id)arg1;
- (id)_getCurrentComposerExtension;
- (void)_applyCurrentComposerExtension;
- (BOOL)_setCurrentComposerExtensionAndNotifyDelegateIfChanged:(id)arg1;
- (id)_applicableComposerExtensionFor:(id)arg1 userInitiated:(BOOL)arg2;
- (BOOL)_canPresentComposerExtension:(id)arg1;
- (BOOL)_isComposerExtensionVisibleInTabBar:(id)arg1;
- (void)_toggleEmojiResultsStyle;
- (BOOL)_performSelectionForComposerExtension:(id)arg1 selectedFromMoreTab:(BOOL)arg2;
- (BOOL)_canApplyComposerExtension;
- (void)_applyCurrentComposerExtensionIfPossible;
- (void)_setNeedsApplyComposerExtension;
- (BOOL)_setComposerExtension:(id)arg1 userInitiated:(BOOL)arg2;
@property(copy, nonatomic) NSString *composerExtensionIdentifier;
@property(nonatomic) int composerCurrentPage;
- (void)didUpdateAvailableExtensions;
- (void)_updateComposeViewVisibility;
- (void)_updateComposeViewIfNeeded;
- (void)_initComposeViewIfNeeded;
- (void)_initComposerActionViewIfNeeded;
- (void)_initComposerTabBarIfNeeded;
- (void)_initInputContainerViewIfNeeded;
- (void)_matchComposerTrayHeightWithLastKeyboard;
- (void)_presentInputView:(id)arg1;
- (void)_resetKeyboard;
- (void)_showKeyboard;
- (void)_dismissInputView;
- (BOOL)_isTextInputViewVisible;
- (BOOL)_isDefaultInputViewPresented;
- (BOOL)isInputViewPresented;
- (BOOL)isTextInputViewInitialized;
- (BOOL)hasContent;
- (id)_trimmedHashtagText;
- (id)_trimmedText;
- (BOOL)_hasNonEmptyText;
- (id)text;
- (void)_setText:(id)arg1 shouldNotifyDelegate:(BOOL)arg2;
- (void)setText:(id)arg1;
- (void)updateWithComposingContext:(id)arg1;
- (void)tearDown;
- (void)setUpWithComposingContext:(id)arg1;
- (void)_stopViewObservation;
- (void)_startViewObservation;
- (void)_setUpComposeViewKeyboard;
- (void)_prepareTextView;
- (void)_cancelTextViewPreparation;
- (void)_prepareTextViewDelayed;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotate;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)mn_viewWillLayoutSubviewsDuringAppearing;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)_initComposeContainerView;
- (void)_initComposerPredictiveTextViewIfNecessary;
- (void)_initEmojiParser;
- (void)loadView;
- (void)didRemoveExtensions;
- (void)didInstallExtensions;
- (void)_updateOverflowExtensionBadgeCount;
- (void)_updateExtensionInstalledTimes;
- (void)_updateExtensionOrder:(id)arg1;
- (void)_loadComposerExtensionOrder;
- (void)_updateEligibleExtensionsWithAvailableExtensions:(id)arg1;
- (id)_availableExtensions;
- (void)_updateEligibleExtensionsIfNeeded;
- (id)_composerExtensionWithIdentifier:(id)arg1;
- (void)_setUpDelegatesForComposerExtensions:(id)arg1;
- (id)tabViewForExtensionWithIdentifier:(id)arg1 includesOverflownTabs:(BOOL)arg2;
@property(readonly, nonatomic) BOOL isNuxVisible;
- (void)_logExposures;
- (void)_logExposureForBadgeExperiment;
- (BOOL)_shouldUseDynamicOrdering;
- (void)_initComposerExtensionOrderExperimentContextIfNecessary;
- (void)_initExperimentsIfNeeded;
- (void)_initExtensionOverflowStrategyIfNeeded;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSettings:(id)arg1 session:(id)arg2 mobileConfigFactory:(id)arg3 likeStickerController:(id)arg4 likeSoundController:(id)arg5 composerTabController:(id)arg6 soundController:(id)arg7 keyboardResettingTracker:(id)arg8 hawtLikeNuxController:(id)arg9 keyboardExtension:(id)arg10 overflowExtension:(id)arg11 popoverOverflowExtension:(id)arg12 extensionProvider:(id)arg13 extensionOrderProvider:(id)arg14 extensionStateManager:(id)arg15 announcer:(id)arg16 modalPresentationStackManager:(id)arg17 emoticonTranslator:(id)arg18 imageRequester:(id)arg19 imageUploadResultCacher:(id)arg20 composerPreviewController:(id)arg21 textParser:(id)arg22;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
