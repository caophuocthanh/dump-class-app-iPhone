//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface OrgJodaTimeDateTimeZone : NSObject <JavaIoSerializable>
{
    NSString *iID_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getID;
+ (id)__annotations_forIDWithNSString_;
+ (void)initialize;
+ (id)offsetFormatter;
+ (id)printOffsetWithInt:(int)arg1;
+ (int)parseOffsetWithNSString:(id)arg1;
+ (id)getConvertedIdWithNSString:(id)arg1;
+ (id)getDefaultNameProvider;
+ (void)setNameProvider0WithOrgJodaTimeTzNameProvider:(id)arg1;
+ (void)setNameProviderWithOrgJodaTimeTzNameProvider:(id)arg1;
+ (id)getNameProvider;
+ (id)getDefaultProvider;
+ (void)setProvider0WithOrgJodaTimeTzProvider:(id)arg1;
+ (void)setProviderWithOrgJodaTimeTzProvider:(id)arg1;
+ (id)getProvider;
+ (id)getAvailableIDs;
+ (id)fixedOffsetZoneWithNSString:(id)arg1 withInt:(int)arg2;
+ (id)forTimeZoneWithJavaUtilTimeZone:(id)arg1;
+ (id)forOffsetMillisWithInt:(int)arg1;
+ (id)forOffsetHoursMinutesWithInt:(int)arg1 withInt:(int)arg2;
+ (id)forOffsetHoursWithInt:(int)arg1;
+ (id)forIDWithNSString:(id)arg1;
+ (void)setDefaultWithOrgJodaTimeDateTimeZone:(id)arg1;
+ (id)getDefault;
- (void)dealloc;
- (id)writeReplace;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)toTimeZone;
- (long long)previousTransitionWithLong:(long long)arg1;
- (long long)nextTransitionWithLong:(long long)arg1;
- (BOOL)isFixed;
- (long long)adjustOffsetWithLong:(long long)arg1 withBoolean:(BOOL)arg2;
- (BOOL)isLocalDateTimeGapWithOrgJodaTimeLocalDateTime:(id)arg1;
- (long long)getMillisKeepLocalWithOrgJodaTimeDateTimeZone:(id)arg1 withLong:(long long)arg2;
- (long long)convertLocalToUTCWithLong:(long long)arg1 withBoolean:(BOOL)arg2;
- (long long)convertLocalToUTCWithLong:(long long)arg1 withBoolean:(BOOL)arg2 withLong:(long long)arg3;
- (long long)convertUTCToLocalWithLong:(long long)arg1;
- (int)getOffsetFromLocalWithLong:(long long)arg1;
- (BOOL)isStandardOffsetWithLong:(long long)arg1;
- (int)getStandardOffsetWithLong:(long long)arg1;
- (int)getOffsetWithOrgJodaTimeReadableInstant:(id)arg1;
- (int)getOffsetWithLong:(long long)arg1;
- (id)getNameWithLong:(long long)arg1 withJavaUtilLocale:(id)arg2;
- (id)getNameWithLong:(long long)arg1;
- (id)getShortNameWithLong:(long long)arg1 withJavaUtilLocale:(id)arg2;
- (id)getShortNameWithLong:(long long)arg1;
- (id)getNameKeyWithLong:(long long)arg1;
- (id)getID;
- (id)initWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

