//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBToastQueuing.h"

@class NSString;

@interface FBFilteredToastQueue : NSObject <FBToastQueuing>
{
    CDUnknownBlockType _predicate;
    id <FBToastQueuing> _queue;
}

- (void).cxx_destruct;
- (void)removeToast:(id)arg1;
- (void)queueToast:(id)arg1;
- (BOOL)isEmpty;
- (id)peek;
- (id)dequeue;
- (id)initWithToastQueue:(id)arg1 predicate:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

