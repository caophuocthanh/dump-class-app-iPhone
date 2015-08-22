//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBResponding.h"

@class FBGraphBatchRequest, NSDictionary, NSMapTable, NSString;

@interface FBBatchResponse : NSObject <FBResponding>
{
    NSMapTable *_requestToResponseMap;
    FBGraphBatchRequest *_batchRequest;
    id <FBRequest> _request;
    NSDictionary *_headers;
}

@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) id <FBRequest> request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)orderedResponses;
- (id)responseForRequest:(id)arg1;
- (void)setResponse:(id)arg1 forRequest:(id)arg2;
- (id)initWithRequest:(id)arg1 headers:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
