//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonCacheAbstractCache_StatsCounter.h"

@class NSString;

@interface ComGoogleCommonCacheAbstractCache_SimpleStatsCounter : NSObject <ComGoogleCommonCacheAbstractCache_StatsCounter>
{
    id <ComGoogleCommonCacheLongAddable> hitCount_;
    id <ComGoogleCommonCacheLongAddable> missCount_;
    id <ComGoogleCommonCacheLongAddable> loadSuccessCount_;
    id <ComGoogleCommonCacheLongAddable> loadExceptionCount_;
    id <ComGoogleCommonCacheLongAddable> totalLoadTime_;
    id <ComGoogleCommonCacheLongAddable> evictionCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)incrementByWithComGoogleCommonCacheAbstractCache_StatsCounter:(id)arg1;
- (id)snapshot;
- (void)recordEviction;
- (void)recordLoadExceptionWithLong:(long long)arg1;
- (void)recordLoadSuccessWithLong:(long long)arg1;
- (void)recordMissesWithInt:(int)arg1;
- (void)recordHitsWithInt:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

