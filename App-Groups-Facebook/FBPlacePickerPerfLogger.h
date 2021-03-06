//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBPlacePickerPerfLogger : NSObject
{
    NSString *_entryPoint;
    BOOL _viewRendered;
    BOOL _resultsRendered;
}

+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)abandonAll;
- (void)_markCancelEvent:(id)arg1;
- (void)_markAbortedEvent:(id)arg1 withReason:(id)arg2;
- (void)_markFailEvent:(id)arg1 withReason:(id)arg2;
- (void)_markStopEvent:(id)arg1;
- (void)_markStartEvent:(id)arg1;
- (void)_endEntryPoint;
- (void)onInteractionAbortedWithReason:(id)arg1;
- (void)onInteractionFailedWithReason:(id)arg1;
- (void)_tryStopTTI;
- (void)onRecentPlacesReceived;
- (void)onSearchResultsViewFinished;
- (void)onSearchResultsViewLaunched;
- (void)onSearchResultsReceived;
- (void)onSearchResultsCanceled;
- (void)onSearchResultsRequested;
- (void)onLocationReceived;
- (void)onLocationRequestCanceled;
- (void)onLocationRequested;
- (void)onPlacePickerViewRendered;
- (void)onPlacePickerViewLaunched;
- (void)onCheckinButtonTapped;
- (void)onLocationPinTapped;

@end

