//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientAbstractPrioritizedObjects.h"

@class ComGoogleCumulusCommonUtilEventBus;

@interface ComGoogleCumulusSyncClientModifiedPrioritizedObjects : ComGoogleCumulusSyncClientAbstractPrioritizedObjects
{
    ComGoogleCumulusCommonUtilEventBus *objectMutationClearBus_;
}

- (void)dealloc;
- (BOOL)removeWithNSString:(id)arg1;
- (void)setPriorityWithNSString:(id)arg1 withJavaLangInteger:(id)arg2 withInt:(int)arg3;
- (id)initWithComGoogleCumulusCommonUtilEventBus:(id)arg1;

@end

