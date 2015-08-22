//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBBlockDataCache.h"

@class FBLayeredCache, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface FBRangeDataCache : NSObject <FBBlockDataCache>
{
    FBLayeredCache *_cache;
    NSMutableDictionary *_semaphores;
    NSObject<OS_dispatch_queue> *_queue;
    struct Mutex _lock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)blockSize;
- (unsigned int)truncateOffsetForAlignment:(unsigned int)arg1;
- (void)invalidateDataKey:(id)arg1;
- (void)insertBlock:(id)arg1 key:(id)arg2 blockIndex:(unsigned int)arg3 videoBasicData:(CDStruct_facbd6cb)arg4;
- (void)insertData:(id)arg1 key:(id)arg2 range:(struct _NSRange)arg3 expectedContentLength:(unsigned int)arg4 videoBasicData:(CDStruct_facbd6cb)arg5;
- (void)setExpectedContentLength:(unsigned int)arg1 dataKey:(id)arg2;
- (unsigned int)expectedContentLengthWithDataKey:(id)arg1;
- (id)dataWithKey:(id)arg1 range:(struct _NSRange)arg2 expectedContentLength:(unsigned int)arg3;
- (void)clearCache;
- (id)initWithCache:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
