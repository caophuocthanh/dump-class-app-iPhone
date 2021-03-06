//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Promise.h"

@interface PromiseChainer : Promise
{
    Promise *_parent;
    CDUnknownBlockType _fulfill;
    CDUnknownBlockType _reject;
}

@property(copy, nonatomic) CDUnknownBlockType reject; // @synthesize reject=_reject;
@property(copy, nonatomic) CDUnknownBlockType fulfill; // @synthesize fulfill=_fulfill;
@property(retain, nonatomic) Promise *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)addHandlerToParent;
- (void)resolvePromiseWith:(CDUnknownBlockType)arg1;
- (id)initWithParent:(id)arg1 operationQueue:(id)arg2 dispatchQueue:(id)arg3 fulfill:(CDUnknownBlockType)arg4 reject:(CDUnknownBlockType)arg5;

@end

