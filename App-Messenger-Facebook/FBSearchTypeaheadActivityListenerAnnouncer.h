//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBSearchTypeaheadActivityListener.h"

@class NSString;

@interface FBSearchTypeaheadActivityListenerAnnouncer : FBAnnouncerBase <FBSearchTypeaheadActivityListener>
{
}

- (void)graphSearchScopedSearchModeChanged:(BOOL)arg1;
- (void)graphSearchKeyboardWillAppear;
- (void)graphSearchWillOpenSearchResults;
- (void)graphSearchNullStateRecentSearchesExpandedWithModels:(id)arg1;
- (void)graphSearchDidTapOnSuggestedSearchAboutButton;
- (void)graphSearchDidTapOnRecentSearchEditButton;
- (void)graphSearchDidTapOnSuggestion:(id)arg1 position:(unsigned int)arg2;
- (void)graphSearchSuggestionWillAppear:(id)arg1 position:(unsigned int)arg2;
- (void)graphSearchCustomContentWasUpdatedWithResultsSesionId:(id)arg1 didReceivedProfilePivots:(BOOL)arg2;
- (void)graphSearchContentWasUpdated;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
