//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaUtilConcurrentTimeUnitEnum;

@protocol JavaUtilConcurrentLocksLock <NSObject, JavaObject>
- (id <JavaUtilConcurrentLocksCondition>)newCondition;
- (void)unlock;
- (BOOL)tryLockWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg2;
- (BOOL)tryLock;
- (void)lockInterruptibly;
- (void)lock;
@end

