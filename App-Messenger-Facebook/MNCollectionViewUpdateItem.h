//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewUpdateItem.h"

@class NSIndexPath;

@interface MNCollectionViewUpdateItem : UICollectionViewUpdateItem
{
    NSIndexPath *_indexPathBeforeUpdate;
    NSIndexPath *_indexPathAfterUpdate;
    int _updateAction;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)updateAction;
- (id)indexPathAfterUpdate;
- (id)indexPathBeforeUpdate;
- (id)initWithIndexPathBeforeUpdate:(id)arg1 indexPathAfterUpdate:(id)arg2 updateAction:(int)arg3;

@end
