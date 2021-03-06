//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusQueryFullResult, ComGoogleCumulusQueryQueryProto_Result, NSString;

@interface ComGoogleCumulusQueryClientCachedResult : NSObject
{
    id <ComGoogleCumulusQueryClientReferenceUpdater> referenceUpdater_;
    id <ComGoogleCumulusSyncClientObjectSyncer> objectSyncer_;
    ComGoogleCumulusQueryFullResult *fullRemoteResult_;
    ComGoogleCumulusQueryQueryProto_Result *accumulatedPendingRemoteResult_;
    ComGoogleCumulusQueryFullResult *fullLocalCqAddedResult_;
    id <JavaUtilMap> localDropMap_;
    int localDropMapVersion_;
    ComGoogleCumulusQueryFullResult *fullLocalResult_;
    ComGoogleCumulusQueryQueryProto_Result *fullBlendedResult_;
    ComGoogleCumulusQueryQueryProto_Result *unclippedFullBlendedResult_;
    ComGoogleCumulusQueryQueryProto_Result *pendingUnclippedFullBlendedResult_;
    ComGoogleCumulusQueryQueryProto_Result *pendingFullBlendedResult_;
    ComGoogleCumulusQueryQueryProto_Result *pendingDeltaBlendedResult_;
    NSString *lastOutboundVersion_;
    int nextOutboundVersion_;
    BOOL disallowConsistencyFetch_;
}

+ (void)initialize;
+ (id)filterStaleUpdatesWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusCommonObjectChecker:(id)arg2;
+ (BOOL)hasStaleUpdateWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusCommonObjectChecker:(id)arg2;
+ (void)prepareClientResultDetailsWithComGoogleCumulusQueryQueryProto_Result_Builder:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2 withNSString:(id)arg3;
+ (BOOL)computeMergedHasMoreWithComGoogleCumulusQueryFullResult:(id)arg1 withComGoogleCumulusQueryFullResult:(id)arg2;
- (void)dealloc;
- (void)addToRefMapWithJavaUtilMap:(id)arg1 withComGoogleCumulusSyncRefState_SliceIdList:(id)arg2;
- (id)getFullBlendedResultForTest;
- (id)getFullCQAddedResultForTest;
- (id)getFullRemoteResultForTest;
- (id)getFullLocalResultForTest;
- (id)prepareClientResultWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2 withComGoogleCumulusQueryQueryProto_Query:(id)arg3;
- (void)removeFromFullBlendedWithComGoogleCumulusQueryClientClientQueryProtoUtil_ObjectRemovalFunction:(id)arg1;
- (void)removeFromDroppedListWithComGoogleCumulusApiTypeObjectReference:(id)arg1;
- (void)clear;
- (BOOL)needsBackfillWithBoolean:(BOOL)arg1 withJavaUtilSet:(id)arg2;
- (id)getUnclippedFullResult;
- (id)getFullResult;
- (void)commitPendingWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2;
- (id)updateWithComGoogleCumulusQueryQueryProto_Result:(id)arg1 withComGoogleCumulusQueryQueryProto_Query:(id)arg2 withComGoogleCumulusCommonObjectChecker:(id)arg3;
- (void)trimToFullBlended;
- (id)initWithComGoogleCumulusQueryClientReferenceUpdater:(id)arg1 withComGoogleCumulusSyncClientObjectSyncer:(id)arg2 withBoolean:(BOOL)arg3;

@end

