//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap.h"

#import "JavaUtilNavigableMap.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap, NSString;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap : ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap <JavaUtilNavigableMap>
{
    ComGoogleCommonCollectAbstractMapBasedMultimap *this$2_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)tailMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)tailMapWithId:(id)arg1;
- (id)headMapWithId:(id)arg1 withBoolean:(BOOL)arg2;
- (id)headMapWithId:(id)arg1;
- (id)subMapWithId:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)subMapWithId:(id)arg1 withId:(id)arg2;
- (id)descendingKeySet;
- (id)navigableKeySet;
- (id)createKeySet;
- (id)keySet;
- (id)descendingMap;
- (id)pollAsMapEntryWithJavaUtilIterator:(id)arg1;
- (id)pollLastEntry;
- (id)pollFirstEntry;
- (id)lastEntry;
- (id)firstEntry;
- (id)higherKeyWithId:(id)arg1;
- (id)higherEntryWithId:(id)arg1;
- (id)ceilingKeyWithId:(id)arg1;
- (id)ceilingEntryWithId:(id)arg1;
- (id)floorKeyWithId:(id)arg1;
- (id)floorEntryWithId:(id)arg1;
- (id)lowerKeyWithId:(id)arg1;
- (id)lowerEntryWithId:(id)arg1;
- (id)sortedMap;
- (id)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(id)arg1 withJavaUtilNavigableMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

