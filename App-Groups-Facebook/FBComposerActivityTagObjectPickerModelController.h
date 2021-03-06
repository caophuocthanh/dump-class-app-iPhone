//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLMemPaginatedConnectionController, FBTaggableActivitySuggestionsDownloadRequest, FBUserSession, NSArray, NSString;

@interface FBComposerActivityTagObjectPickerModelController : NSObject
{
    FBGraphQLMemPaginatedConnectionController *_defaultSuggestionsController;
    FBTaggableActivitySuggestionsDownloadRequest *_defaultSuggestionsRequest;
    FBTaggableActivitySuggestionsDownloadRequest *_searchRequest;
    FBTaggableActivitySuggestionsDownloadRequest *_backgroundDownloadRequest;
    NSArray *_searchResults;
    BOOL _hasLoadedSearchResults;
    BOOL _lastResultsFromCache;
    NSString *_requestID;
    NSString *_flowSource;
    NSString *_queryTrackingData;
    BOOL _supportsCaching;
    NSString *_taggableActivityGraphQLID;
    NSString *_placeID;
    FBUserSession *_session;
    NSString *_analyticsUUID;
    NSString *_surfaceID;
    NSString *_typeaheadSessionID;
    id <FBComposerActivityTagObjectPickerModelControllerDelegate> _delegate;
    NSString *_searchQuery;
}

@property(readonly, nonatomic) BOOL lastResultsFromCache; // @synthesize lastResultsFromCache=_lastResultsFromCache;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(nonatomic) __weak id <FBComposerActivityTagObjectPickerModelControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
@property(readonly, nonatomic) BOOL supportsCaching; // @synthesize supportsCaching=_supportsCaching;
@property(readonly, copy, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
@property(readonly, copy, nonatomic) NSString *analyticsUUID; // @synthesize analyticsUUID=_analyticsUUID;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(readonly, copy, nonatomic) NSString *taggableActivityGraphQLID; // @synthesize taggableActivityGraphQLID=_taggableActivityGraphQLID;
- (void).cxx_destruct;
- (void)_failureHelperWithError:(id)arg1 capturedQuery:(id)arg2 cleanupBlock:(CDUnknownBlockType)arg3;
- (void)_successHelperWithResults:(id)arg1 capturedQuery:(id)arg2 cleanupBlock:(CDUnknownBlockType)arg3;
- (id)_requestForSearchQuery;
- (void)loadMoreDefaultSuggestions:(BOOL)arg1;
- (void)loadMoreDefaultSuggestions;
- (id)queryTrackingData;
@property(readonly, copy, nonatomic) NSString *requestID;
@property(readonly, nonatomic) BOOL isDisplayingSearchResults;
- (id)taggableActivityObjects;
@property(readonly, nonatomic, getter=isLoading) BOOL loading;
- (id)initWithTaggableActivityGraphQLID:(id)arg1 supportsCaching:(BOOL)arg2 placeID:(id)arg3 session:(id)arg4 typeaheadSessionID:(id)arg5 analyticsUUID:(id)arg6 surfaceID:(id)arg7 flowSource:(id)arg8;

@end

