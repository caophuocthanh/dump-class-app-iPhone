//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMaps_FilteredEntryMap.h"

#import "ComGoogleCommonCollectBiMap.h"

@class NSString;

@interface ComGoogleCommonCollectMaps_FilteredEntryBiMap : ComGoogleCommonCollectMaps_FilteredEntryMap <ComGoogleCommonCollectBiMap>
{
    id <ComGoogleCommonCollectBiMap> inverse_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_forcePutWithId_withId__params;
+ (id)inversePredicateWithComGoogleCommonBasePredicate:(id)arg1;
- (void)dealloc;
- (id)values;
- (id)inverse;
- (id)forcePutWithId:(id)arg1 withId:(id)arg2;
- (id)unfiltered;
- (id)initWithComGoogleCommonCollectBiMap:(id)arg1 withComGoogleCommonBasePredicate:(id)arg2 withComGoogleCommonCollectBiMap:(id)arg3;
- (id)initWithComGoogleCommonCollectBiMap:(id)arg1 withComGoogleCommonBasePredicate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

