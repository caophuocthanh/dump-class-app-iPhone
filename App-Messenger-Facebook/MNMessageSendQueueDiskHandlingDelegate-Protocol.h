//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSObject<OS_dispatch_queue>;

@protocol MNMessageSendQueueDiskHandlingDelegate <NSObject>
- (void)restoreSendQueueDataFromDiskWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(void (^)(NSData *))arg2;
- (void)persistSendQueueDataToDisk:(NSData *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
@end

