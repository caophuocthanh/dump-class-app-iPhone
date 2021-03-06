//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class FBUserSession, MNSyncProtocolPublisher, NSString;

@interface MNSyncProtocolQueueRequester : NSObject <FBSessionClassProvidable>
{
    MNSyncProtocolPublisher *_publisher;
    FBUserSession *_session;
    id <MNSyncProtocolQueueDeviceParamsProviding> _deviceParamsProvider;
}

- (void).cxx_destruct;
- (id)_createQueueRequestWithConfig:(id)arg1;
- (void)requestQueueWithConfig:(id)arg1 withSuccessBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPublisher:(id)arg1 session:(id)arg2 deviceParamsProvider:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

