//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface IGDirectSharePendingRequestDataSource : NSObject
{
    NSMutableArray *_pendingRequests;
    NSString *_fetchURLString;
}

@property(copy, nonatomic) NSString *fetchURLString; // @synthesize fetchURLString=_fetchURLString;
- (void).cxx_destruct;
- (void)removeAllPendingRequests;
- (unsigned int)removePendingRequestWithUserPK:(id)arg1;
- (void)addPendingRequest:(id)arg1;
@property(readonly, nonatomic) NSArray *pendingRequests;
- (unsigned int)numberOfPendingRequests;
- (void)parsePendingRequestFromDictionary:(id)arg1;
- (void)fetchData;
- (id)init;

@end

