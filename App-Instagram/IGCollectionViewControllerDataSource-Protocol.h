//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCollectionViewChangeSet, IGCollectionViewController, NSArray, NSIndexPath, NSString, UICollectionViewCell;

@protocol IGCollectionViewControllerDataSource <NSObject>
- (struct CGSize)collectionViewController:(IGCollectionViewController *)arg1 sizeForItemAtIndexPath:(NSIndexPath *)arg2 withViewWidth:(float)arg3 withObjects:(NSArray *)arg4 context:(id)arg5;
- (int)collectionViewController:(IGCollectionViewController *)arg1 numberOfItemsInSection:(int)arg2 withObjects:(NSArray *)arg3 context:(id)arg4;
- (int)collectionViewController:(IGCollectionViewController *)arg1 numberOfSectionsForObjects:(NSArray *)arg2 context:(id)arg3;
- (UICollectionViewCell *)collectionViewController:(IGCollectionViewController *)arg1 viewForSupplementaryViewOfKind:(NSString *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (UICollectionViewCell *)collectionViewController:(IGCollectionViewController *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;

@optional
- (void)collectionViewController:(IGCollectionViewController *)arg1 prepareContext:(id)arg2 forObjects:(NSArray *)arg3;
- (IGCollectionViewChangeSet *)collectionViewController:(IGCollectionViewController *)arg1 changeSetFromObjects:(NSArray *)arg2 fromContext:(id)arg3 toObjects:(NSArray *)arg4 toContext:(id)arg5;
@end

