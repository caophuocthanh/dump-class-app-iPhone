//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractSet.h"

@class JavaUtilHashMap;

@interface JavaUtilHashMap_EntrySet : JavaUtilAbstractSet
{
    JavaUtilHashMap *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)__javaClone;
- (id)initWithJavaUtilHashMap:(id)arg1;
- (void)clear;
- (BOOL)isEmpty;
- (int)size;
- (BOOL)removeWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)iterator;

@end

