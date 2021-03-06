//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMMutableMessage, FBMThread, NSError, NSString;

@protocol FBMThreadCreationListener <NSObject>
- (void)didCancelCreatingThreadWithOfflineID:(NSString *)arg1;
- (void)didFailToCreateThreadWithOfflineID:(NSString *)arg1 withMessage:(FBMMutableMessage *)arg2 error:(NSError *)arg3;
- (void)didCreateThread:(FBMThread *)arg1 withMessage:(FBMMutableMessage *)arg2 forPendingThreadWithOfflineID:(NSString *)arg3;
- (void)willCreateThreadWithOfflineID:(NSString *)arg1 withMessage:(FBMMutableMessage *)arg2;
- (void)didAddMessage:(FBMMutableMessage *)arg1 toQueueForPendingThreadWithOfflineID:(NSString *)arg2;
@end

