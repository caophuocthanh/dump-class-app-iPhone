//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBasePeriod.h"

#import "JavaIoSerializable.h"
#import "OrgJodaTimeReadablePeriod.h"

@class NSString;

@interface OrgJodaTimePeriod : OrgJodaTimeBaseBasePeriod <OrgJodaTimeReadablePeriod, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_parseWithNSString_;
+ (void)initialize;
+ (id)fieldDifferenceWithOrgJodaTimeReadablePartial:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2;
+ (id)millisWithInt:(int)arg1;
+ (id)secondsWithInt:(int)arg1;
+ (id)minutesWithInt:(int)arg1;
+ (id)hoursWithInt:(int)arg1;
+ (id)daysWithInt:(int)arg1;
+ (id)weeksWithInt:(int)arg1;
+ (id)monthsWithInt:(int)arg1;
+ (id)yearsWithInt:(int)arg1;
+ (id)parseWithNSString:(id)arg1 withOrgJodaTimeFormatPeriodFormatter:(id)arg2;
+ (id)parseWithNSString:(id)arg1;
- (id)normalizedStandardWithOrgJodaTimePeriodType:(id)arg1;
- (id)normalizedStandard;
- (void)checkYearsAndMonthsWithNSString:(id)arg1;
- (id)toStandardDuration;
- (id)toStandardSeconds;
- (id)toStandardMinutes;
- (id)toStandardHours;
- (id)toStandardDays;
- (id)toStandardWeeks;
- (id)negated;
- (id)multipliedByWithInt:(int)arg1;
- (id)minusMillisWithInt:(int)arg1;
- (id)minusSecondsWithInt:(int)arg1;
- (id)minusMinutesWithInt:(int)arg1;
- (id)minusHoursWithInt:(int)arg1;
- (id)minusDaysWithInt:(int)arg1;
- (id)minusWeeksWithInt:(int)arg1;
- (id)minusMonthsWithInt:(int)arg1;
- (id)minusYearsWithInt:(int)arg1;
- (id)minusWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)plusMillisWithInt:(int)arg1;
- (id)plusSecondsWithInt:(int)arg1;
- (id)plusMinutesWithInt:(int)arg1;
- (id)plusHoursWithInt:(int)arg1;
- (id)plusDaysWithInt:(int)arg1;
- (id)plusWeeksWithInt:(int)arg1;
- (id)plusMonthsWithInt:(int)arg1;
- (id)plusYearsWithInt:(int)arg1;
- (id)plusWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)withMillisWithInt:(int)arg1;
- (id)withSecondsWithInt:(int)arg1;
- (id)withMinutesWithInt:(int)arg1;
- (id)withHoursWithInt:(int)arg1;
- (id)withDaysWithInt:(int)arg1;
- (id)withWeeksWithInt:(int)arg1;
- (id)withMonthsWithInt:(int)arg1;
- (id)withYearsWithInt:(int)arg1;
- (id)withFieldAddedWithOrgJodaTimeDurationFieldType:(id)arg1 withInt:(int)arg2;
- (id)withFieldWithOrgJodaTimeDurationFieldType:(id)arg1 withInt:(int)arg2;
- (id)withFieldsWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)withPeriodTypeWithOrgJodaTimePeriodType:(id)arg1;
- (int)getMillis;
- (int)getSeconds;
- (int)getMinutes;
- (int)getHours;
- (int)getDays;
- (int)getWeeks;
- (int)getMonths;
- (int)getYears;
- (id)toPeriod;
- (id)initWithIntArray:(id)arg1 withOrgJodaTimePeriodType:(id)arg2;
- (id)initWithId:(id)arg1 withOrgJodaTimePeriodType:(id)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithId:(id)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithId:(id)arg1 withOrgJodaTimePeriodType:(id)arg2;
- (id)initWithId:(id)arg1;
- (id)initWithOrgJodaTimeReadableDuration:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadableDuration:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableDuration:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableDuration:(id)arg2;
- (id)initWithOrgJodaTimeReadablePartial:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadablePartial:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimePeriodType:(id)arg3 withOrgJodaTimeChronology:(id)arg4;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimePeriodType:(id)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)initWithLong:(long long)arg1 withOrgJodaTimePeriodType:(id)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithLong:(long long)arg1 withOrgJodaTimePeriodType:(id)arg2;
- (id)initWithLong:(long long)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withOrgJodaTimePeriodType:(id)arg9;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

