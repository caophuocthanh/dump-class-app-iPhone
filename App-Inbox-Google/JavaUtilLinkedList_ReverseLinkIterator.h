//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class JavaUtilLinkedList, JavaUtilLinkedList_Link, NSString;

@interface JavaUtilLinkedList_ReverseLinkIterator : NSObject <JavaUtilIterator>
{
    int expectedModCount_;
    JavaUtilLinkedList *list_;
    JavaUtilLinkedList_Link *link_;
    BOOL canRemove_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)remove;
- (id)next;
- (BOOL)hasNext;
- (id)initWithJavaUtilLinkedList:(id)arg1 withJavaUtilLinkedList:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

