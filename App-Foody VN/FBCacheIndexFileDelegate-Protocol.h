//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCacheIndex, NSData, NSString;

@protocol FBCacheIndexFileDelegate <NSObject>
- (void)cacheIndex:(FBCacheIndex *)arg1 deleteFileWithName:(NSString *)arg2;
- (void)cacheIndex:(FBCacheIndex *)arg1 writeFileWithName:(NSString *)arg2 data:(NSData *)arg3;
@end

