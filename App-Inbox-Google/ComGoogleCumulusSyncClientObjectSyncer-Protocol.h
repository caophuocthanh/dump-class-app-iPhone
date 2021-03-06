//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCommonBasePair, ComGoogleCumulusCommonBaseProto_ObjectReference, ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum, NSString;

@protocol ComGoogleCumulusSyncClientObjectSyncer <NSObject, JavaObject>
- (BOOL)isMissingWithNSString:(NSString *)arg1;
- (void)forceObjectSyncWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (ComGoogleCommonBasePair *)addSyncStateToUpdateWithNSString:(NSString *)arg1 withBoolean:(BOOL)arg2 withComGoogleCumulusApiTypeObjectReader:(id <ComGoogleCumulusApiTypeObjectReader>)arg3 withNSString:(NSString *)arg4;
- (int)getSyncRemainingCount;
- (int)size;
- (id <JavaUtilCollection>)getQueuedRefs;
- (id <JavaUtilCollection>)getMissingRefsWithInt:(int)arg1;
- (BOOL)shouldSyncIfNotLocalWithComGoogleCumulusCommonBaseProto_ObjectReference:(ComGoogleCumulusCommonBaseProto_ObjectReference *)arg1;
- (void)evictedWithComGoogleCumulusApiTypeObjectReader:(id <ComGoogleCumulusApiTypeObjectReader>)arg1 withBoolean:(BOOL)arg2;
- (void)willStoreWithComGoogleCumulusCommonBaseProto_ObjectReference:(ComGoogleCumulusCommonBaseProto_ObjectReference *)arg1 withComGoogleCumulusApiTypeObjectReader:(id <ComGoogleCumulusApiTypeObjectReader>)arg2;
- (ComGoogleCumulusQueryQueryProto_Result_SyncSourceEnum *)notifyLocallyAvailableWithComGoogleCumulusCommonBaseProto_ObjectReference:(ComGoogleCumulusCommonBaseProto_ObjectReference *)arg1 withComGoogleCumulusApiTypeObjectReader:(id <ComGoogleCumulusApiTypeObjectReader>)arg2;
- (BOOL)hasSubscriptionWithComGoogleCumulusApiTypeObjectReader:(id <ComGoogleCumulusApiTypeObjectReader>)arg1;
@end

