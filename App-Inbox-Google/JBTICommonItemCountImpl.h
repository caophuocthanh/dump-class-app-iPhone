//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTItemCount.h"

@class NSString;

@interface JBTICommonItemCountImpl : NSObject <JBTItemCount>
{
    int count_;
    BOOL isLowerBound_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (void)initialize;
+ (id)atLeastWithInt:(int)arg1;
+ (id)exactlyWithInt:(int)arg1;
+ (id)sumOfWithJavaUtilList:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLowerBound;
- (int)getApproximateCount;
- (id)initWithInt:(int)arg1 withBoolean:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

