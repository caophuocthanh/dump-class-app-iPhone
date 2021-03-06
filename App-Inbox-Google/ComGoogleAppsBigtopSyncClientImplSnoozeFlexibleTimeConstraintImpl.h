//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTFlexibleTimeConstraint.h"

@class JBTFlexibleTimeConstraint_TypeEnum, JBTFormattedTime_FormatEnum, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSnoozeFlexibleTimeConstraintImpl : NSObject <JBTFlexibleTimeConstraint>
{
    JBTFlexibleTimeConstraint_TypeEnum *type_;
    long long timestampSeconds_;
    BOOL isDateOnly_;
    JBTFormattedTime_FormatEnum *timeFormat_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (id)getFormattedTime;
- (BOOL)isDateOnly;
- (long long)getTimestampSeconds;
- (id)getType;
- (id)initWithJBTFlexibleTimeConstraint_TypeEnum:(id)arg1 withLong:(long long)arg2 withBoolean:(BOOL)arg3 withJBTFormattedTime_FormatEnum:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

