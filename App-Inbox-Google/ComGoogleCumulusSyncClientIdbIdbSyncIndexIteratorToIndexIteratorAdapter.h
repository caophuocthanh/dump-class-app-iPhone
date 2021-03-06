//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientSyncIndex_Iterator.h"

@class ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbSyncIndexIteratorToIndexIteratorAdapter : NSObject <ComGoogleCumulusSyncClientSyncIndex_Iterator>
{
    id <ComGoogleCumulusCommonIndexIndexIterator> indexIterator_;
    ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata *metadata_;
    BOOL reverse_;
    BOOL advancingHasBeenRequested_;
}

+ (id)getRankStringFromRankWithInt:(int)arg1;
- (void)dealloc;
- (void)advanceAsyncWithJavaLangRunnable:(id)arg1;
- (BOOL)advance;
- (id)getCurrentRank;
- (id)getCurrentId;
- (id)initWithComGoogleCumulusCommonIndexIndexIterator:(id)arg1 withComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata:(id)arg2 withBoolean:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

