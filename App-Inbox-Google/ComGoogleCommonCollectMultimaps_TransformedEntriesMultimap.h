//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMultimap.h"

@interface ComGoogleCommonCollectMultimaps_TransformedEntriesMultimap : ComGoogleCommonCollectAbstractMultimap
{
    id <ComGoogleCommonCollectMultimap> fromMultimap_;
    id <ComGoogleCommonCollectMaps_EntryTransformer> transformer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)createValues;
- (int)size;
- (id)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (id)removeAllWithId:(id)arg1;
- (BOOL)removeWithId:(id)arg1 withId:(id)arg2;
- (BOOL)putAllWithComGoogleCommonCollectMultimap:(id)arg1;
- (BOOL)putAllWithId:(id)arg1 withJavaLangIterable:(id)arg2;
- (BOOL)putWithId:(id)arg1 withId:(id)arg2;
- (id)keys;
- (id)keySet;
- (BOOL)isEmpty;
- (id)getWithId:(id)arg1;
- (id)entryIterator;
- (BOOL)containsKeyWithId:(id)arg1;
- (void)clear;
- (id)createAsMap;
- (id)transformWithId:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)initWithComGoogleCommonCollectMultimap:(id)arg1 withComGoogleCommonCollectMaps_EntryTransformer:(id)arg2;

@end

