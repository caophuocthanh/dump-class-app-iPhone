//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMMessageDeleter, FBMThreadKey, NSError, NSString;

@protocol FBMMessageDeleterDelegate <NSObject>
- (void)messageDeleter:(FBMMessageDeleter *)arg1 couldNotDeleteMessageWithId:(NSString *)arg2 onThreadWithThreadKey:(FBMThreadKey *)arg3 withError:(NSError *)arg4;
- (void)messageDeleter:(FBMMessageDeleter *)arg1 didDeleteMessageWithId:(NSString *)arg2 onThreadWithThreadKey:(FBMThreadKey *)arg3 deletedLastMessage:(BOOL)arg4;
@end

