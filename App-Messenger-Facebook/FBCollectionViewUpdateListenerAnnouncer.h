//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBCollectionViewUpdateListener.h"

@class NSString;

@interface FBCollectionViewUpdateListenerAnnouncer : FBAnnouncerBase <FBCollectionViewUpdateListener>
{
}

- (void)collectionViewDidEndUpdates:(id)arg1;
- (void)collectionViewWillEndUpdates:(id)arg1;
- (void)collectionViewDidBeginUpdates:(id)arg1;
- (void)collectionViewWillBeginUpdates:(id)arg1;
- (void)collectionView:(id)arg1 willDeleteItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willInsertItemsAtIndexPaths:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
