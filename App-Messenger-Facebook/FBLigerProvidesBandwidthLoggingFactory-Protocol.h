//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBLigerProvidesBandwidthLoggingFactory <NSObject>
- (id <FBLigerProvidesBandwidthLogging>)createBandwidthLogger:(unique_ptr_eed73377)arg1 evb:(struct EventBase *)arg2;
- (unique_ptr_e3177ddc)createBandwidthMonitor;
@end

