//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "ZRTariffedUxSentryDelegate.h"

@class FBMLocationUpdateRequestHandler, NSString, ZRTariffedUxSentry;

@interface MNLocationPickerLocationRequestHandler : NSObject <ZRTariffedUxSentryDelegate, FBClassProvidable>
{
    FBMLocationUpdateRequestHandler *_locationUpdateRequestHandler;
    ZRTariffedUxSentry *_sentry;
    CDUnknownBlockType _failureBlock;
}

- (void).cxx_destruct;
- (void)nonZeroRatedSessionUxMustDeactivate:(id)arg1;
- (void)nonZeroRatedSessionDidFailToStart:(id)arg1;
- (void)nonZeroRatedSessionUxMayActivate:(id)arg1;
- (BOOL)cancelRequest:(id)arg1;
- (id)requestLocationWithPermissionGrantedBlock:(CDUnknownBlockType)arg1 permissionDeniedBlock:(CDUnknownBlockType)arg2 locationUpdateBlock:(CDUnknownBlockType)arg3 requestFailureBlock:(CDUnknownBlockType)arg4;
- (void)enterNonZeroRatedSessionWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
