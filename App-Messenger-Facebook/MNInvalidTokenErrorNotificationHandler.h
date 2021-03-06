//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class NSNotificationCenter, NSString, OrcaMessengerRequestManager;

@interface MNInvalidTokenErrorNotificationHandler : NSObject <FBClassProvidable>
{
    OrcaMessengerRequestManager *_orcaMessengerRequestManager;
    NSNotificationCenter *_notificationCenter;
    id _requesterInvalidTokenObserver;
}

@property(retain, nonatomic) id requesterInvalidTokenObserver; // @synthesize requesterInvalidTokenObserver=_requesterInvalidTokenObserver;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) OrcaMessengerRequestManager *orcaMessengerRequestManager; // @synthesize orcaMessengerRequestManager=_orcaMessengerRequestManager;
- (void).cxx_destruct;
- (void)_showSessionExpiredAlertDueToError:(id)arg1;
- (void)stopObservingNotification;
- (void)startObservingNotification;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithOrcaMessengerRequestManager:(id)arg1 notificationCenter:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

