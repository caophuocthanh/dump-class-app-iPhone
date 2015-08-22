//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLPagedDownloadRequest.h"

@class CLLocation, NSArray, NSString;

@interface FBGraphSearchResultsRequest : FBGraphQLPagedDownloadRequest
{
    BOOL _needDetailedPhotoInfo;
    BOOL _exactMatch;
    BOOL _useChronoSort;
    BOOL _needTopSubQueriesForDisambiguation;
    BOOL _needModules;
    unsigned int _callSite;
    unsigned int _resultType;
    int _requestType;
    unsigned int _resultsVertical;
    NSArray *_filters;
    CLLocation *_userLocation;
    NSArray *_supportedExperiences;
    NSArray *_supportedRoles;
    NSArray *_moduleSizes;
    NSString *_promotedEntityId;
    unsigned int _renderingType;
}

@property(nonatomic) unsigned int renderingType; // @synthesize renderingType=_renderingType;
@property(copy, nonatomic) NSString *promotedEntityId; // @synthesize promotedEntityId=_promotedEntityId;
@property(copy, nonatomic) NSArray *moduleSizes; // @synthesize moduleSizes=_moduleSizes;
@property(copy, nonatomic) NSArray *supportedRoles; // @synthesize supportedRoles=_supportedRoles;
@property(copy, nonatomic) NSArray *supportedExperiences; // @synthesize supportedExperiences=_supportedExperiences;
@property(nonatomic) BOOL needModules; // @synthesize needModules=_needModules;
@property(nonatomic) BOOL needTopSubQueriesForDisambiguation; // @synthesize needTopSubQueriesForDisambiguation=_needTopSubQueriesForDisambiguation;
@property(nonatomic) BOOL useChronoSort; // @synthesize useChronoSort=_useChronoSort;
@property(nonatomic) BOOL exactMatch; // @synthesize exactMatch=_exactMatch;
@property(nonatomic) BOOL needDetailedPhotoInfo; // @synthesize needDetailedPhotoInfo=_needDetailedPhotoInfo;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
@property(nonatomic) unsigned int resultsVertical; // @synthesize resultsVertical=_resultsVertical;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property(readonly, nonatomic) unsigned int callSite; // @synthesize callSite=_callSite;
- (void).cxx_destruct;
- (id)_graphSearchNewsReusltsQueryWithAfterCursor:(id)arg1;
- (id)_graphSearchKeywordsQueryWithAfterCursor:(id)arg1;
- (id)_pulseTopicResultsQueryWithAfterCursor:(id)arg1;
- (id)_pulseResultsQueryWithAfterCursor:(id)arg1;
- (id)_graphSearchPostsTailQueryWithAfterCursor:(id)arg1;
- (id)_graphSearchPostsHeadQueryWithBeforeCursor:(id)arg1;
- (id)_graphSearchLinkQueryWithAfterCursor:(id)arg1;
- (id)_graphSearchVideoQueryWithAfterCursor:(id)arg1;
- (id)_isExactMatch;
- (id)_photoSearchQuery:(id)arg1 afterCursor:(id)arg2 withPhotoDetails:(BOOL)arg3;
- (id)_queryForResultTypeEvent:(id)arg1;
- (id)_queryForResultTypeGroup:(id)arg1;
- (id)queryForResultTypeApp:(id)arg1;
- (id)queryForResultTypePageAndMovie:(id)arg1;
- (id)queryForResultTypeFiltered:(id)arg1;
- (id)_queryForResultTypeUser:(id)arg1;
- (id)_queryWithoutModule:(id)arg1;
- (id)_queryWithModule:(id)arg1;
- (id)_queryForNullStatePivotsPreview:(id)arg1;
- (id)newQueryWithCursor:(id)arg1;
- (id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2;
- (id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 callSite:(unsigned int)arg3;

@end
