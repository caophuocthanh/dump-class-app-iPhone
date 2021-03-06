//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCacheLocalCache_LocalManualCache.h"

#import "ComGoogleCommonCacheLoadingCache.h"

@class NSString;

@interface ComGoogleCommonCacheLocalCache_LocalLoadingCache : ComGoogleCommonCacheLocalCache_LocalManualCache <ComGoogleCommonCacheLoadingCache>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)writeReplace;
- (id)applyWithId:(id)arg1;
- (void)refreshWithId:(id)arg1;
- (id)getAllWithJavaLangIterable:(id)arg1;
- (id)getUncheckedWithId:(id)arg1;
- (id)getWithId:(id)arg1;
- (id)initWithComGoogleCommonCacheCacheBuilder:(id)arg1 withComGoogleCommonCacheCacheLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

