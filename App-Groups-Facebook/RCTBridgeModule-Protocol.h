//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, RCTBridge;

@protocol RCTBridgeModule <NSObject>

@optional
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(nonatomic) __weak RCTBridge *bridge;
- (void)batchDidComplete;
- (NSDictionary *)constantsToExport;
@end

