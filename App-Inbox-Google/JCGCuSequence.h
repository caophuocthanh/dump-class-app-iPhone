//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JCGCuAbstractSequence.h"

@interface JCGCuSequence : JCGCuAbstractSequence
{
    id <JavaUtilList> steps_;
    BOOL hasStarted_;
}

- (void)dealloc;
- (void)runWithJCGCuCallback:(id)arg1;
- (id)addStepWithJCGCuStep:(id)arg1;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)initWithJCGCuWorkQueue:(id)arg1 withJCGCuStepArray:(id)arg2;
- (id)initWithJCGCuStepArray:(id)arg1;

@end

