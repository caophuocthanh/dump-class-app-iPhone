//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonLifecycleTracker_StateEnum;

@interface JBTICommonLifecycleTracker : NSObject
{
    JBTICommonLifecycleTracker_StateEnum *state_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;
- (BOOL)isStopped;
- (BOOL)isRunning;
- (void)stop;
- (void)start;

@end

