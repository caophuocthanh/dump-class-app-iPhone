//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface NRMATaskQueue : NSObject
{
    struct dispatch_queue_s *_dequeueDispatch;
    NSTimer *timer;
    NSMutableArray *_queue;
}

+ (void)clear;
+ (unsigned int)size;
+ (void)queue:(id)arg1;
+ (void)synchronousDequeue;
+ (void)stop;
+ (void)start;
+ (id)taskQueue;
@property(retain) NSMutableArray *queue; // @synthesize queue=_queue;
@property(retain) NSTimer *timer; // @synthesize timer;
- (void).cxx_destruct;
- (void)dequeue;
- (void)asyncDequeue;
- (struct dispatch_queue_s *)dispatchQueue;
- (void)dealloc;
- (id)init;

@end
