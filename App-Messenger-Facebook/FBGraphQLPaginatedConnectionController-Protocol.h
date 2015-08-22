//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLDownloadRequest, FBGraphQLQuery, FBMemPageInfo, NSArray;

@protocol FBGraphQLPaginatedConnectionController <NSObject>
- (FBMemPageInfo *)tailPageInfo;
- (NSArray *)currentConnectionContents;
- (void)includeDataFromResponseForQuery:(FBGraphQLQuery *)arg1 completionBlock:(void (^)(NSError *, BOOL))arg2;
- (void)includeDataFromResponseForDownloadRequest:(FBGraphQLDownloadRequest *)arg1 completionBlock:(void (^)(NSError *, BOOL))arg2;
@end
