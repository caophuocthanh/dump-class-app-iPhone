//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSURLSessionDelegate.h"

@class NSRecursiveLock, NSString, NSURLSessionDataTask;

@interface PINDataTaskOperation : NSOperation <NSURLSessionDelegate>
{
    NSRecursiveLock *_lock;
    NSURLSessionDataTask *_dataTask;
    unsigned int _state;
}

+ (id)dataTaskOperationWithSessionManager:(id)arg1 request:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (void)cancelTask;
- (void)finish;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (void)cancel;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
