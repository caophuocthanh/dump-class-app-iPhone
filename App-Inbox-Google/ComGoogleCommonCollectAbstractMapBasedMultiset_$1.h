//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilIterator.h"

@class ComGoogleCommonCollectAbstractMapBasedMultiset, NSString;

@interface ComGoogleCommonCollectAbstractMapBasedMultiset_$1 : NSObject <JavaUtilIterator>
{
    ComGoogleCommonCollectAbstractMapBasedMultiset *this$0_;
    id <JavaUtilMap_Entry> toRemove_;
    id <JavaUtilIterator> val$backingEntries_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleCommonCollectAbstractMapBasedMultiset:(id)arg1 withJavaUtilIterator:(id)arg2;
- (void)remove;
- (id)next;
- (BOOL)hasNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

