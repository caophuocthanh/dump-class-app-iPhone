//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol ComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator <NSObject, JavaObject>
- (void)cancel;
- (BOOL)didIgnoreEarlierWrites;
- (id <ComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator>)createContinuationAccumulatorWithComGoogleCumulusCommonIndexIndexIterable:(id <ComGoogleCumulusCommonIndexIndexIterable>)arg1;
- (void)fetchObjectsWithInt:(int)arg1 withJavaLangRunnable:(id <JavaLangRunnable>)arg2;
- (BOOL)isAtEnd;
- (BOOL)isComplete;
- (void)clearRankedObjects;
- (id <JavaUtilList>)getRankedObjects;
@end

