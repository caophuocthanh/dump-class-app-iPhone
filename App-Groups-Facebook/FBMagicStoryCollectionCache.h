//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMutableSortedSet, NSArray;

@interface FBMagicStoryCollectionCache : NSObject
{
    FBMutableSortedSet *_sortedCollections;
    unsigned int _maxItemCount;
}

- (void).cxx_destruct;
- (void)removeAllCollections;
- (BOOL)addCollection:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *collections;
- (id)initWithComparator:(CDUnknownBlockType)arg1 maxItemCount:(unsigned int)arg2;

@end

