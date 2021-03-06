//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class JavaUtilPriorityQueue, NSString;

@interface JavaUtilPriorityQueue_PriorityIterator : NSObject <JavaUtilIterator>
{
    JavaUtilPriorityQueue *this$0_;
    int currentIndex_;
    BOOL allowRemove_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilPriorityQueue:(id)arg1;
- (void)remove;
- (id)next;
- (BOOL)hasNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

