//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNMQTTMessagingEventHandler.h"

@class FBLazyCreator, NSString;

@interface FBMMQTTReadStateHandler : NSObject <MNMQTTMessagingEventHandler, FBSessionClassProvidable>
{
    FBLazyCreator *_threadSetCreator;
    FBLazyCreator *_badgeCounterCreator;
    FBLazyCreator *_announcerCreator;
    id <MNAuthenticationManager> _authenticationManager;
}

- (void).cxx_destruct;
- (id)_parseThreadsFromPayload:(id)arg1;
- (void)_handlePayload:(id)arg1 isUnread:(BOOL)arg2;
- (void)didReceivePayload:(id)arg1 forEvent:(id)arg2;
- (void)handleUnreadPayload:(id)arg1;
- (void)handleReadPayload:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithThreadSetCreator:(CDUnknownBlockType)arg1 badgeCounterCreator:(CDUnknownBlockType)arg2 announcerCreator:(CDUnknownBlockType)arg3 authenticationManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

