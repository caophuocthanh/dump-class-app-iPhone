//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class IOSIntArray, IOSObjectArray, NSString;

@interface OrgJodaTimePeriodType : NSObject <JavaIoSerializable>
{
    NSString *iName_;
    IOSObjectArray *iTypes_;
    IOSIntArray *iIndices_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)forFieldsWithOrgJodaTimeDurationFieldTypeArray:(id)arg1;
+ (id)millis;
+ (id)seconds;
+ (id)minutes;
+ (id)hours;
+ (id)days;
+ (id)weeks;
+ (id)months;
+ (id)years;
+ (id)time;
+ (id)dayTime;
+ (id)yearDay;
+ (id)yearDayTime;
+ (id)yearWeekDay;
+ (id)yearWeekDayTime;
+ (id)yearMonthDay;
+ (id)yearMonthDayTime;
+ (id)standard;
- (void)dealloc;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)withFieldRemovedWithInt:(int)arg1 withNSString:(id)arg2;
- (id)withMillisRemoved;
- (id)withSecondsRemoved;
- (id)withMinutesRemoved;
- (id)withHoursRemoved;
- (id)withDaysRemoved;
- (id)withWeeksRemoved;
- (id)withMonthsRemoved;
- (id)withYearsRemoved;
- (BOOL)addIndexedFieldWithOrgJodaTimeReadablePeriod:(id)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withInt:(int)arg4;
- (BOOL)setIndexedFieldWithOrgJodaTimeReadablePeriod:(id)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withInt:(int)arg4;
- (int)getIndexedFieldWithOrgJodaTimeReadablePeriod:(id)arg1 withInt:(int)arg2;
@property(readonly, copy) NSString *description;
- (int)indexOfWithOrgJodaTimeDurationFieldType:(id)arg1;
- (BOOL)isSupportedWithOrgJodaTimeDurationFieldType:(id)arg1;
- (id)getFieldTypeWithInt:(int)arg1;
- (int)size;
- (id)getName;
- (id)initWithNSString:(id)arg1 withOrgJodaTimeDurationFieldTypeArray:(id)arg2 withIntArray:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

