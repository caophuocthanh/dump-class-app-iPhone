//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMUser, FBMUserFetcher, NSError;

@protocol FBMUserFetcherDelegate <NSObject>
- (void)fetcher:(FBMUserFetcher *)arg1 couldNotFetchUser:(NSError *)arg2;
- (void)fetcher:(FBMUserFetcher *)arg1 didFetchUser:(FBMUser *)arg2;
@end

