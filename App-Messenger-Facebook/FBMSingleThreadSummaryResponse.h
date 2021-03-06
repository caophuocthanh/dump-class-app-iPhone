//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBMThreadSummary, NSError;

@interface FBMSingleThreadSummaryResponse : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMThreadSummary *_threadFetched_threadSummary;
    NSError *_fetchingFailed_error;
}

+ (id)threadNotCreated;
+ (id)threadFetchedWithThreadSummary:(id)arg1;
+ (id)fetchingFailedWithError:(id)arg1;
- (void).cxx_destruct;
- (void)matchThreadFetched:(CDUnknownBlockType)arg1 threadNotCreated:(CDUnknownBlockType)arg2 fetchingFailed:(CDUnknownBlockType)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

