//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusApiBaseError.h"

@class NSString;

@interface ComGoogleCumulusApiBatchError : ComGoogleCumulusApiBaseError
{
    NSString *batchId_;
    id <JavaUtilList> affectedObjects_;
}

- (void)dealloc;
- (id)description;
- (id)getAffectedObjects;
- (id)getBatchId;
- (id)initWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_Error:(id)arg2 withJavaUtilList:(id)arg3;

@end

