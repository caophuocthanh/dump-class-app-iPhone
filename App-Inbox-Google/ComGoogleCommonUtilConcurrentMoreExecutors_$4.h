//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService.h"

@interface ComGoogleCommonUtilConcurrentMoreExecutors_$4 : ComGoogleCommonUtilConcurrentWrappingScheduledExecutorService
{
    id <ComGoogleCommonBaseSupplier> val$nameSupplier_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleCommonBaseSupplier:(id)arg1 withJavaUtilConcurrentScheduledExecutorService:(id)arg2;
- (id)wrapTaskWithJavaLangRunnable:(id)arg1;
- (id)wrapTaskWithJavaUtilConcurrentCallable:(id)arg1;

@end

