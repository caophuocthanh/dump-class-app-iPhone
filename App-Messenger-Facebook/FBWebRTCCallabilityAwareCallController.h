//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBWebRTCCallControllerDelegate.h"
#import "FBWebRTCUserCallabilityObserver.h"

@class FBExperimentManager, FBMUser, FBWebRTCCallController, NSString;

@interface FBWebRTCCallabilityAwareCallController : NSObject <FBWebRTCUserCallabilityObserver, FBWebRTCCallControllerDelegate, FBClassProvidable>
{
    FBWebRTCCallController *_callController;
    FBMUser *_user;
    id <FBWebRTCCallabilityAwareCallControllerDelegate> _delegate;
    FBExperimentManager *_experimentManager;
}

@property(retain, nonatomic) FBExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(nonatomic) __weak id <FBWebRTCCallabilityAwareCallControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notifyDelegateOfChange;
- (void)callController:(id)arg1 canMakeOutboundCallDidChange:(BOOL)arg2;
- (void)callabilityDidUpdateForUser:(id)arg1;
- (void)startCallWithTrigger:(id)arg1 isVideoCall:(BOOL)arg2;
- (void)showCannotCallAlert;
- (id)otherUserCallability;
@property(readonly, nonatomic) BOOL isVoipEnabledToOtherUser;
- (void)cancelModalUI;
- (void)refreshCallability;
@property(readonly, nonatomic) id <FBWebRTCCapabilities> callCapabilities;
- (void)_startListeningToCallability;
- (void)_stopListeningToCallability;
- (void)tearDown;
- (void)configureWithUser:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithCallController:(id)arg1 experimentManager:(id)arg2;
- (id)init;
- (void)configureWithThreadSummary:(id)arg1 users:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

