//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusCommonUtilBox, ComGoogleCumulusSyncClientMemoryObjectIndex, ComGoogleCumulusSyncClientMemoryObjectIndex_MemoryIndexUpdater, ComGoogleCumulusTypeTypeProto_BaseObject, IOSIntArray, NSString;

@interface ComGoogleCumulusSyncClientMemoryObjectIndex_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusSyncClientMemoryObjectIndex *this$0_;
    ComGoogleCumulusCommonUtilBox *val$continuation_;
    IOSIntArray *val$previousDocId_;
    ComGoogleCumulusTypeTypeProto_BaseObject *val$baseObject_;
    ComGoogleCumulusSyncClientMemoryObjectIndex_MemoryIndexUpdater *val$indexUpdate_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientMemoryObjectIndex:(id)arg1 withComGoogleCumulusCommonUtilBox:(id)arg2 withIntArray:(id)arg3 withComGoogleCumulusTypeTypeProto_BaseObject:(id)arg4 withComGoogleCumulusSyncClientMemoryObjectIndex_MemoryIndexUpdater:(id)arg5;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

