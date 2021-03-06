//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRMAConsumerProtocol.h"

@class NSString;

@interface NRMAMeasurementConsumer : NSObject <NRMAConsumerProtocol>
{
    int _measurementType;
}

- (void)consumeMeasurements:(id)arg1;
- (void)consumeMeasurement:(id)arg1;
@property(readonly) int measurementType;
- (id)initWithType:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

