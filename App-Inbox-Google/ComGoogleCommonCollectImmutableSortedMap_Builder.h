//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableMap_Builder.h"

@interface ComGoogleCommonCollectImmutableSortedMap_Builder : ComGoogleCommonCollectImmutableMap_Builder
{
    id <JavaUtilComparator> comparator_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithJavaUtilMap_Entry:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)initWithJavaUtilComparator:(id)arg1;

@end

