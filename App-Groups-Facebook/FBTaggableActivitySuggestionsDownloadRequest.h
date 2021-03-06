//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLPagedDownloadRequest.h"

@class CLLocation, NSString;

@interface FBTaggableActivitySuggestionsDownloadRequest : FBGraphQLPagedDownloadRequest
{
    BOOL _isPrefetch;
    NSString *_searchQuery;
    NSString *_placeID;
    NSString *_typeaheadSessionID;
    NSString *_requestID;
    NSString *_surfaceID;
    CLLocation *_viewerLocation;
    NSString *_flowSource;
}

@property(copy, nonatomic) NSString *flowSource; // @synthesize flowSource=_flowSource;
@property(copy, nonatomic) CLLocation *viewerLocation; // @synthesize viewerLocation=_viewerLocation;
@property(copy, nonatomic) NSString *surfaceID; // @synthesize surfaceID=_surfaceID;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(copy, nonatomic) NSString *typeaheadSessionID; // @synthesize typeaheadSessionID=_typeaheadSessionID;
@property(nonatomic) BOOL isPrefetch; // @synthesize isPrefetch=_isPrefetch;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void).cxx_destruct;
- (id)newQueryWithCursor:(id)arg1;

@end

