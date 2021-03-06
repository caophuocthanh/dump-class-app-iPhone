//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBUserPreferences;

@interface FBCLLocationLogger : NSObject
{
    unsigned int _eventCtxCounter;
    unsigned int _eventDataCounter;
    unsigned int _impl;
    FBUserPreferences *_userPreferences;
}

+ (id)_captureSystemDictionary;
- (void).cxx_destruct;
- (void)logPermissionStatus:(unsigned int)arg1 isExpired:(BOOL)arg2 locationAuthorizationStatus:(int)arg3;
- (void)logActivities:(id)arg1;
- (void)logVisits:(id)arg1;
- (void)logTrace:(id)arg1 step:(id)arg2 payload:(id)arg3;
- (void)logTrace:(id)arg1 step:(id)arg2;
- (void)logEventSet:(id)arg1;
- (void)logLocations:(id)arg1 eventSet:(id)arg2;
- (id)initWithDataCollectionImpl:(unsigned int)arg1 userPreferences:(id)arg2;

@end

