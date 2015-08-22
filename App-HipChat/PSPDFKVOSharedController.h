//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable;

@interface PSPDFKVOSharedController : NSObject
{
    NSHashTable *_infos;
    int _lock;
}

+ (id)sharedController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelMultipleObservations:(id)arg1;
- (void)cancelObservation:(id)arg1;
- (void)beginObservationWithInfo:(id)arg1;
- (id)debugDescription;
- (id)init;

@end
