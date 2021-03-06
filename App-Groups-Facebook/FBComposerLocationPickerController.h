//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerActivityTagObjectPickerViewControllerDelegate.h"
#import "FBComposerCompositionStateChangedListener.h"
#import "FBComposerPickerController.h"
#import "FBPlacePickerNearbyFetcherPrefetchDelegate.h"
#import "FBPlacePickerViewControllerDelegate.h"

@class FBAnalyticsPrefetcherLogger, FBComposerCompositionState, FBNearbyCache, FBPlacePickerBaseViewController, FBPlacePickerPrefetchController, FBPlacePickerV2NearbyFetcher, FBUserSession, NSString;

@interface FBComposerLocationPickerController : NSObject <FBPlacePickerViewControllerDelegate, FBComposerActivityTagObjectPickerViewControllerDelegate, FBPlacePickerNearbyFetcherPrefetchDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener>
{
    BOOL _loadedImplicitLocationSetting;
    id <FBLocationManagerSubscription> _locationManagerToken;
    FBNearbyCache *_nearbyCache;
    FBPlacePickerV2NearbyFetcher *_nearbyFetcher;
    id <FBLocationPickerControllerListener> _listener;
    FBUserSession *_userSession;
    FBComposerCompositionState *_compositionState;
    BOOL _didCallSuggestifier;
    BOOL _shouldPrefetch;
    BOOL _didPrefetchOnce;
    FBAnalyticsPrefetcherLogger *_prefetchLogger;
    FBPlacePickerPrefetchController *_prefetchController;
    BOOL _placePickerDidFinishAtLeastOnce;
    id <FBComposerLocationPickerControllerDelegate> _delegate;
    NSString *_customtitle;
    FBPlacePickerBaseViewController *_placePicker;
}

@property(nonatomic) BOOL placePickerDidFinishAtLeastOnce; // @synthesize placePickerDidFinishAtLeastOnce=_placePickerDidFinishAtLeastOnce;
@property(retain, nonatomic) FBPlacePickerBaseViewController *placePicker; // @synthesize placePicker=_placePicker;
@property(copy, nonatomic) NSString *customtitle; // @synthesize customtitle=_customtitle;
@property(nonatomic) __weak id <FBComposerLocationPickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBNearbyCache *nearbyCache; // @synthesize nearbyCache=_nearbyCache;
- (void).cxx_destruct;
- (void)prefetchFinishedWithNearbyDataSet:(id)arg1;
- (void)prefetchFinishedWithError:(id)arg1;
- (void)setPlacePickerCurrentLocation;
- (void)_prefetchCompleteWithDataSet:(id)arg1;
- (void)_setImplicitLocationFromPrefetchedDataSet:(id)arg1;
- (void)_setImplicitLocationWithLocation:(id)arg1 nearbyDataSet:(id)arg2;
- (void)composerActivityTagObjectPickerDidSkip:(id)arg1;
- (void)composerActivityTagObjectPicker:(id)arg1 didPickTaggableActivity:(id)arg2;
- (void)placePickerDidRemoveCurrentPlace:(id)arg1;
- (void)placePickerDidCancel:(id)arg1;
- (void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2;
- (void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4;
- (void)willPresentViewController:(BOOL)arg1;
- (void)startAssociatedServices;
- (void)_unregisterLocationMananger;
- (BOOL)serviceHasStarted;
- (void)dealloc;
- (void)stopAssociatedServices;
- (void)_preparePresentableViewController;
- (void)dismissPopoverController;
- (id)presentableViewController;
- (struct CGSize)popoverContentSizeForOrientation:(int)arg1;
- (unsigned int)popoverStyle;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (id)initWithUserSession:(id)arg1 listener:(id)arg2 nearbyFetcher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

