//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMLTimeService.h"

@class NSString;

@interface JBTISmartMailNoopTimeService : NSObject <TMLTimeService>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getResolvedTimeZoneWithNSString_;
- (id)init;
- (id)today;
- (long long)nowMillis;
- (id)now;
- (id)dateMidnightFromUtcMillisWithLong:(long long)arg1;
- (id)dateTimeFromLocalFieldsWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6;
- (id)dateMidnightFromLocalFieldsWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)dateTimeFromMillisWithLong:(long long)arg1;
- (id)getResolvedTimeZoneWithNSString:(id)arg1;
- (void)resolveTimeZonesWithJavaUtilCollection:(id)arg1 withTMLTimeZoneBatchCallback:(id)arg2 withTMLMeasurement:(id)arg3;
- (void)resolveTimeZoneWithNSString:(id)arg1 withTMLTimeZoneCallback:(id)arg2 withTMLMeasurement:(id)arg3;
- (void)removeOnTimeZoneChangeListenerWithJavaLangRunnable:(id)arg1;
- (void)addOnTimeZoneChangeListenerWithJavaLangRunnable:(id)arg1;
- (id)getTimeZone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

