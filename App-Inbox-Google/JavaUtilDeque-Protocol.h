//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilQueue.h"
#import "NSObject.h"

@protocol JavaUtilDeque <JavaUtilQueue, NSObject, JavaObject>
- (id <JavaUtilIterator>)descendingIterator;
- (id <JavaUtilIterator>)iterator;
- (int)size;
- (BOOL)containsWithId:(id)arg1;
- (BOOL)removeWithId:(id)arg1;
- (id)pop;
- (void)pushWithId:(id)arg1;
- (id)peek;
- (id)element;
- (id)poll;
- (id)remove;
- (BOOL)offerWithId:(id)arg1;
- (BOOL)addWithId:(id)arg1;
- (BOOL)removeLastOccurrenceWithId:(id)arg1;
- (BOOL)removeFirstOccurrenceWithId:(id)arg1;
- (id)peekLast;
- (id)peekFirst;
- (id)getLast;
- (id)getFirst;
- (id)pollLast;
- (id)pollFirst;
- (id)removeLast;
- (id)removeFirst;
- (BOOL)offerLastWithId:(id)arg1;
- (BOOL)offerFirstWithId:(id)arg1;
- (void)addLastWithId:(id)arg1;
- (void)addFirstWithId:(id)arg1;
@end

