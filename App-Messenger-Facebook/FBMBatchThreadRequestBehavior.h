//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface FBMBatchThreadRequestBehavior : NSObject <NSCopying>
{
    CDUnknownBlockType _fetchedBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType fetchedBlock; // @synthesize fetchedBlock=_fetchedBlock;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFetchedBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end
