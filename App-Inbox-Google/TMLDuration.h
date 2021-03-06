//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangComparable.h"
#import "OrgTimepediaExporterClientExportable.h"

@class NSString;

@interface TMLDuration : NSObject <JavaLangComparable, OrgTimepediaExporterClientExportable>
{
    long long millis_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations;
+ (id)standardWeeksWithLong:(long long)arg1;
+ (id)standardDaysWithLong:(long long)arg1;
+ (id)standardHoursWithLong:(long long)arg1;
+ (id)standardMinutesWithLong:(long long)arg1;
+ (id)millisWithLong:(long long)arg1;
+ (id)betweenWithTMLInstant:(id)arg1 withTMLInstant:(id)arg2;
- (int)compareToWithId:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)toStandardRoundedWeeks;
- (BOOL)isExactWeeks;
- (id)toNextStandardRoundedDays;
- (id)toStandardRoundedDays;
- (BOOL)isExactDays;
- (id)toStandardRoundedHours;
- (BOOL)isExactHours;
- (id)toStandardRoundedMinutes;
- (int)divideAndRoundWithLong:(long long)arg1 withInt:(int)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned int hash;
- (long long)getMillis;
- (id)initWithLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

