//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASDisplayNode<FBPageableItem>, FBPagingController;

@protocol FBPagingControllerDataSource <NSObject>

@optional
- (ASDisplayNode<FBPageableItem> *)pagingController:(FBPagingController *)arg1 nodeAfterNode:(ASDisplayNode<FBPageableItem> *)arg2;
- (ASDisplayNode<FBPageableItem> *)pagingController:(FBPagingController *)arg1 nodeBeforeNode:(ASDisplayNode<FBPageableItem> *)arg2;
@end

