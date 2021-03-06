//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface FBMapSnapshotter : NSObject
{
    struct Mutex _lock;
    BOOL _enabled;
    NSMutableSet *_outstandingRequests;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)_processCachedData:(id)arg1 key:(id)arg2 request:(id)arg3 cache:(id)arg4;
- (void)requestSnapshot:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_serviceRequest:(id)arg1 cache:(id)arg2 cacheKey:(id)arg3;
- (id)init;

@end

