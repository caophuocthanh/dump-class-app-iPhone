//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractList.h"

@interface ComGoogleCommonCollectLists_ReverseList : JavaUtilAbstractList
{
    id <JavaUtilList> forwardList_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_setWithInt_withId__params;
+ (id)__annotations_addWithInt_withId__params;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)listIteratorWithInt:(int)arg1;
- (id)iterator;
- (id)subListWithInt:(int)arg1 withInt:(int)arg2;
- (int)size;
- (id)getWithInt:(int)arg1;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (void)removeRangeWithInt:(int)arg1 withInt:(int)arg2;
- (id)removeWithInt:(int)arg1;
- (void)clear;
- (void)addWithInt:(int)arg1 withId:(id)arg2;
- (int)reversePositionWithInt:(int)arg1;
- (int)reverseIndexWithInt:(int)arg1;
- (id)getForwardList;
- (id)initWithJavaUtilList:(id)arg1;

@end

