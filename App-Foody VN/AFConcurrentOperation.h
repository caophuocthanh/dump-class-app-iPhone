//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@interface AFConcurrentOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _isCancelled;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
@property BOOL isCancelled; // @synthesize isCancelled=_isCancelled;
@property BOOL isFinished; // @synthesize isFinished=_isFinished;
@property BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
- (void)finish;
- (void)cancel;
- (void)start;
- (BOOL)isConcurrent;

@end

