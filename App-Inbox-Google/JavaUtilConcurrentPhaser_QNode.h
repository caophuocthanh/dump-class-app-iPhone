//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentForkJoinPool_ManagedBlocker.h"

@class JavaUtilConcurrentPhaser, NSString;

@interface JavaUtilConcurrentPhaser_QNode : NSObject <JavaUtilConcurrentForkJoinPool_ManagedBlocker>
{
    JavaUtilConcurrentPhaser *phaser_;
    int phase_;
    BOOL interruptible_;
    BOOL timed_;
    BOOL wasInterrupted_;
    long long nanos_;
    long long deadline_;
    // Error parsing type: A^v, name: thread_
    JavaUtilConcurrentPhaser_QNode *next_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)__javaClone;
- (void)dealloc;
- (BOOL)block;
- (BOOL)isReleasable;
- (id)initWithJavaUtilConcurrentPhaser:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withLong:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

