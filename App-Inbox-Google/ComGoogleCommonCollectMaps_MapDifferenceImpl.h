//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonCollectMapDifference.h"

@class NSString;

@interface ComGoogleCommonCollectMaps_MapDifferenceImpl : NSObject <ComGoogleCommonCollectMapDifference>
{
    id <JavaUtilMap> onlyOnLeft_;
    id <JavaUtilMap> onlyOnRight_;
    id <JavaUtilMap> onBoth_;
    id <JavaUtilMap> differences_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)entriesDiffering;
- (id)entriesInCommon;
- (id)entriesOnlyOnRight;
- (id)entriesOnlyOnLeft;
- (BOOL)areEqual;
- (id)initWithJavaUtilMap:(id)arg1 withJavaUtilMap:(id)arg2 withJavaUtilMap:(id)arg3 withJavaUtilMap:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

