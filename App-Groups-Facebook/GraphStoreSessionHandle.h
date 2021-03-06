//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInvalidating.h"

@class NSString;

@interface GraphStoreSessionHandle : NSObject <FBInvalidating>
{
    shared_ptr_430685d1 _store;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (shared_ptr_430685d1)store;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

