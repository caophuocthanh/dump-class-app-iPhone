//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FPTINetworkAdapterProtocol.h"

@class NSDate, NSDictionary, NSString;

@interface PPAnalyticsTracker : NSObject <FPTINetworkAdapterProtocol>
{
    BOOL _sessionImpressionSent;
    NSString *_deviceUDID;
    NSString *_sessionID;
    NSDictionary *_standardProperties;
    NSDate *_lastImpressionDate;
}

@property(copy, nonatomic) NSDate *lastImpressionDate; // @synthesize lastImpressionDate=_lastImpressionDate;
@property(nonatomic) BOOL sessionImpressionSent; // @synthesize sessionImpressionSent=_sessionImpressionSent;
@property(copy, nonatomic) NSDictionary *standardProperties; // @synthesize standardProperties=_standardProperties;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
- (void).cxx_destruct;
- (void)sendRequestWithData:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)enqueueImpression:(id)arg1;
- (void)enqueueImpressionByKey:(id)arg1 withParams:(id)arg2;
- (void)addStandardParamsTo:(id)arg1;
- (id)init;

@end

