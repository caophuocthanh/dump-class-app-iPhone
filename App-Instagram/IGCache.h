//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSFileManager, NSObject<OS_dispatch_queue>, NSString;

@interface IGCache : NSObject
{
    NSCache *_memCache;
    NSFileManager *_fileManager;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSString *_cachePath;
    unsigned int _trimmingTask;
    double _lastTrimTime;
    unsigned int _diskCapacity;
    unsigned int _maxObjectCount;
}

@property(nonatomic) unsigned int maxObjectCount; // @synthesize maxObjectCount=_maxObjectCount;
@property(nonatomic) unsigned int diskCapacity; // @synthesize diskCapacity=_diskCapacity;
- (void).cxx_destruct;
- (id)io_queue_objectForKey:(id)arg1;
- (id)pathFromKey:(id)arg1;
- (void)startBackgroundCacheTrimmingTask;
- (int)removeExcessFiles;
- (void)removeAllObjectsWithDeletionBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned int)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)objectForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)objectForKey:(id)arg1;
- (BOOL)containsKey:(id)arg1;
- (id)initWithName:(id)arg1 diskCapacity:(unsigned int)arg2 maxObjectCount:(unsigned int)arg3 maxInMemoryCount:(unsigned int)arg4 maxInMemoryCost:(unsigned int)arg5;
- (id)initWithName:(id)arg1 diskCapacity:(unsigned int)arg2 maxObjectCount:(unsigned int)arg3 maxInMemoryCount:(unsigned int)arg4;
- (id)initWithName:(id)arg1 diskCapacity:(unsigned int)arg2 maxObjectCount:(unsigned int)arg3;
- (void)dealloc;

@end

