//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPerforming.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FBQueuePerformer : NSObject <FBPerforming>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_queueIdentifier;
}

+ (id)queuePerformerWithQueue:(id)arg1;
+ (id)globalDefaultPerformer;
+ (id)mainQueuePerformer;
- (void).cxx_destruct;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCurrentPerformer;
- (id)initWithQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

