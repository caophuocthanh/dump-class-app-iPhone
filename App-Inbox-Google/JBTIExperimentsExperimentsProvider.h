//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JBTIExperimentsExperimentsProvider : NSObject
{
    id <JavaUtilMap> experimentFlagMap_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getStringWithJBTExperimentId_;
+ (id)__annotations_getIntegerWithJBTExperimentId_;
+ (id)__annotations_getLongWithJBTExperimentId_;
- (void)dealloc;
- (id)getStringWithJBTExperimentId:(id)arg1;
- (id)getIntegerOrWithJBTExperimentId:(id)arg1 withInt:(int)arg2;
- (id)getIntegerWithJBTExperimentId:(id)arg1;
- (id)getLongOrWithJBTExperimentId:(id)arg1 withLong:(long long)arg2;
- (id)getLongWithJBTExperimentId:(id)arg1;
- (BOOL)getBooleanOrWithJBTExperimentId:(id)arg1 withBoolean:(BOOL)arg2;
- (BOOL)getBooleanWithJBTExperimentId:(id)arg1;
- (BOOL)containsWithJBTExperimentId:(id)arg1;
- (id)initWithJavaUtilMap:(id)arg1;

@end

