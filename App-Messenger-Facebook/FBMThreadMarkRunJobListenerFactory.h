//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface FBMThreadMarkRunJobListenerFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)listenerWithCompleteBlock:(CDUnknownBlockType)arg1;
- (id)initWithAffiliatedQueue:(id)arg1;
- (id)initWithNoQueueAffliation;

@end
