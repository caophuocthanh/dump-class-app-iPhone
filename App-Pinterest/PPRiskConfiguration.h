//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface PPRiskConfiguration : NSObject <NSCoding>
{
    BOOL _endpointIsStage;
    NSDate *_lastFullUpdateTimestamp;
    NSDate *_lastPINLockTimestamp;
    NSString *_confVersion;
    NSArray *_knownAppURLSchemes;
    NSDictionary *_knownAppPaths;
    int _locationMinAccuracy;
    NSString *_endpointURL;
    NSDictionary *_knownDeviceModel;
    double _confRefreshTimeInterval;
    double _forcedFullUpdateTimeInterval;
    double _asyncUpdateTimeInterval;
    double _locationMaxCacheAge;
    double _internalCacheMaxAge;
}

+ (id)knownAppURLSchemes;
+ (id)knownDeviceModel;
@property(retain, nonatomic) NSDictionary *knownDeviceModel; // @synthesize knownDeviceModel=_knownDeviceModel;
@property(nonatomic) double internalCacheMaxAge; // @synthesize internalCacheMaxAge=_internalCacheMaxAge;
@property(nonatomic) BOOL endpointIsStage; // @synthesize endpointIsStage=_endpointIsStage;
@property(copy, nonatomic) NSString *endpointURL; // @synthesize endpointURL=_endpointURL;
@property(nonatomic) double locationMaxCacheAge; // @synthesize locationMaxCacheAge=_locationMaxCacheAge;
@property(nonatomic) int locationMinAccuracy; // @synthesize locationMinAccuracy=_locationMinAccuracy;
@property(retain, nonatomic) NSDictionary *knownAppPaths; // @synthesize knownAppPaths=_knownAppPaths;
@property(retain, nonatomic) NSArray *knownAppURLSchemes; // @synthesize knownAppURLSchemes=_knownAppURLSchemes;
@property(nonatomic) double asyncUpdateTimeInterval; // @synthesize asyncUpdateTimeInterval=_asyncUpdateTimeInterval;
@property(nonatomic) double forcedFullUpdateTimeInterval; // @synthesize forcedFullUpdateTimeInterval=_forcedFullUpdateTimeInterval;
@property(nonatomic) double confRefreshTimeInterval; // @synthesize confRefreshTimeInterval=_confRefreshTimeInterval;
@property(retain, nonatomic) NSString *confVersion; // @synthesize confVersion=_confVersion;
@property(retain, nonatomic) NSDate *lastPINLockTimestamp; // @synthesize lastPINLockTimestamp=_lastPINLockTimestamp;
@property(retain, nonatomic) NSDate *lastFullUpdateTimestamp; // @synthesize lastFullUpdateTimestamp=_lastFullUpdateTimestamp;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultConfig;
- (id)initWithDictionary:(id)arg1;

@end

