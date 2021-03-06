//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilConcurrentExecutors_DelegatedExecutorService.h"

#import "JavaUtilConcurrentScheduledExecutorService.h"

@class NSString;

@interface JavaUtilConcurrentExecutors_DelegatedScheduledExecutorService : JavaUtilConcurrentExecutors_DelegatedExecutorService <JavaUtilConcurrentScheduledExecutorService>
{
    id <JavaUtilConcurrentScheduledExecutorService> e_DelegatedScheduledExecutorService_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)scheduleWithFixedDelayWithJavaLangRunnable:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withJavaUtilConcurrentTimeUnitEnum:(id)arg4;
- (id)scheduleAtFixedRateWithJavaLangRunnable:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withJavaUtilConcurrentTimeUnitEnum:(id)arg4;
- (id)scheduleWithJavaUtilConcurrentCallable:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (id)scheduleWithJavaLangRunnable:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (id)initWithJavaUtilConcurrentScheduledExecutorService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

