//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface MarauderEventBatch : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_timeStampInMilliseconds;
    NSString *__thrift_deviceID;
    NSString *__thrift_appID;
    NSString *__thrift_appVersion;
    struct NSMutableArray *__thrift_events;
    NSString *__thrift_platformSoftwareVersion;
    NSString *__thrift_platformHardwareVersion;
    BOOL __thrift_timeStampInMilliseconds_set;
    BOOL __thrift_deviceID_set;
    BOOL __thrift_appID_set;
    BOOL __thrift_appVersion_set;
    BOOL __thrift_events_set;
    BOOL __thrift_platformSoftwareVersion_set;
    BOOL __thrift_platformHardwareVersion_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPlatformHardwareVersion;
- (BOOL)platformHardwareVersionIsSet;
@property(retain, nonatomic) NSString *platformHardwareVersion;
- (void)unsetPlatformSoftwareVersion;
- (BOOL)platformSoftwareVersionIsSet;
@property(retain, nonatomic) NSString *platformSoftwareVersion;
- (void)unsetEvents;
- (BOOL)eventsIsSet;
@property(retain, nonatomic) NSMutableArray *events;
- (void)unsetAppVersion;
- (BOOL)appVersionIsSet;
@property(retain, nonatomic) NSString *appVersion;
- (void)unsetAppID;
- (BOOL)appIDIsSet;
@property(retain, nonatomic) NSString *appID;
- (void)unsetDeviceID;
- (BOOL)deviceIDIsSet;
@property(retain, nonatomic) NSString *deviceID;
- (void)unsetTimeStampInMilliseconds;
- (BOOL)timeStampInMillisecondsIsSet;
@property(nonatomic) long long timeStampInMilliseconds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStampInMilliseconds:(long long)arg1 deviceID:(id)arg2 appID:(id)arg3 appVersion:(id)arg4 events:(struct NSMutableArray *)arg5 platformSoftwareVersion:(id)arg6 platformHardwareVersion:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
