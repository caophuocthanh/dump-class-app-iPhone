//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBMMQTTTopicConfiguring.h"

@class FBMContactSyncPolicy, FBMMQTTMercuryTopicHandler, FBMMQTTMessengerStatusUpdateAnnouncer, FBMMQTTOrcaMessageNotificationsTopicHandler, FBMMQTTOrcaTypingNotificationsTopicHandler, FBMMQTTPinnedGroupsUpdateHandler, FBMMQTTReadReceiptHandler, FBMMQTTReadStateHandler, FBMMQTTSPMessageSyncTopicHandler, FBMMQTTViOSTopicHandler, FBMMQTTWebRTCThriftTopicHandler, FBMMQTTWebRTCTopicHandler, MNMQTTMessagingEventDispatcher, MNMQTTPersonSyncEventHandler, NSString;

@interface FBMMQTTTopicConfigurer : NSObject <FBClassProvidable, FBMMQTTTopicConfiguring>
{
    FBMMQTTViOSTopicHandler *_mqttViOSTopicHandler;
    FBMMQTTOrcaMessageNotificationsTopicHandler *_mqttOrcaMessageNotificationsTopicHandler;
    FBMMQTTMercuryTopicHandler *_mercuryPushTopicHandler;
    FBMMQTTSPMessageSyncTopicHandler *_mqttSPMessageSyncTopicHandler;
    FBMMQTTOrcaTypingNotificationsTopicHandler *_mqttOrcaTypingNotificationsTopicHandler;
    FBMMQTTWebRTCTopicHandler *_mqttWebRTCTopicHandler;
    FBMMQTTWebRTCThriftTopicHandler *_mqttWebRTCThriftTopicHandler;
    MNMQTTMessagingEventDispatcher *_messagingEventDispatcher;
    FBMMQTTReadStateHandler *_readStateHandler;
    FBMMQTTPinnedGroupsUpdateHandler *_pinnedGroupsUpdateHandler;
    FBMMQTTMessengerStatusUpdateAnnouncer *_messengerStatusAnnouncer;
    FBMMQTTReadReceiptHandler *_readReceiptHandler;
    MNMQTTPersonSyncEventHandler *_personSyncEventHandler;
    FBMContactSyncPolicy *_contactSyncPolicy;
}

@property(retain, nonatomic) FBMContactSyncPolicy *contactSyncPolicy; // @synthesize contactSyncPolicy=_contactSyncPolicy;
@property(retain, nonatomic) MNMQTTPersonSyncEventHandler *personSyncEventHandler; // @synthesize personSyncEventHandler=_personSyncEventHandler;
@property(retain, nonatomic) FBMMQTTReadReceiptHandler *readReceiptHandler; // @synthesize readReceiptHandler=_readReceiptHandler;
@property(retain, nonatomic) FBMMQTTMessengerStatusUpdateAnnouncer *messengerStatusAnnouncer; // @synthesize messengerStatusAnnouncer=_messengerStatusAnnouncer;
@property(retain, nonatomic) FBMMQTTPinnedGroupsUpdateHandler *pinnedGroupsUpdateHandler; // @synthesize pinnedGroupsUpdateHandler=_pinnedGroupsUpdateHandler;
@property(retain, nonatomic) FBMMQTTReadStateHandler *readStateHandler; // @synthesize readStateHandler=_readStateHandler;
@property(retain, nonatomic) MNMQTTMessagingEventDispatcher *messagingEventDispatcher; // @synthesize messagingEventDispatcher=_messagingEventDispatcher;
@property(retain, nonatomic) FBMMQTTWebRTCThriftTopicHandler *mqttWebRTCThriftTopicHandler; // @synthesize mqttWebRTCThriftTopicHandler=_mqttWebRTCThriftTopicHandler;
@property(retain, nonatomic) FBMMQTTWebRTCTopicHandler *mqttWebRTCTopicHandler; // @synthesize mqttWebRTCTopicHandler=_mqttWebRTCTopicHandler;
@property(retain, nonatomic) FBMMQTTOrcaTypingNotificationsTopicHandler *mqttOrcaTypingNotificationsTopicHandler; // @synthesize mqttOrcaTypingNotificationsTopicHandler=_mqttOrcaTypingNotificationsTopicHandler;
@property(retain, nonatomic) FBMMQTTSPMessageSyncTopicHandler *mqttSPMessageSyncTopicHandler; // @synthesize mqttSPMessageSyncTopicHandler=_mqttSPMessageSyncTopicHandler;
@property(retain, nonatomic) FBMMQTTMercuryTopicHandler *mercuryPushTopicHandler; // @synthesize mercuryPushTopicHandler=_mercuryPushTopicHandler;
@property(retain, nonatomic) FBMMQTTOrcaMessageNotificationsTopicHandler *mqttOrcaMessageNotificationsTopicHandler; // @synthesize mqttOrcaMessageNotificationsTopicHandler=_mqttOrcaMessageNotificationsTopicHandler;
@property(retain, nonatomic) FBMMQTTViOSTopicHandler *mqttViOSTopicHandler; // @synthesize mqttViOSTopicHandler=_mqttViOSTopicHandler;
- (void).cxx_destruct;
- (void)_configureMessagingEventDispatcherForProtocol:(unsigned int)arg1;
- (void)endSession;
- (id)_handlersForFQLPlusMQTT;
- (id)_handlersForSyncProtocol;
- (id)topicListenersForNetworkProtocol:(unsigned int)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMQTTOrcaMessageNotificationsTopicHandler:(id)arg1 mercuryPushTopicHandler:(id)arg2 mqttViOSTopicHandler:(id)arg3 mqttSPMessageSyncTopicHandler:(id)arg4 mqttOrcaTypingNotificationsTopicHandler:(id)arg5 mqttWebRTCTopicHandler:(id)arg6 mqttWebRTCThriftTopicHandler:(id)arg7 messagingEventDispatcher:(id)arg8 readStateHandler:(id)arg9 readReceiptHandler:(id)arg10 pinnedGroupsUpdateHandler:(id)arg11 messengerStatusAnnouncer:(id)arg12 personSyncEventHandler:(id)arg13 contactSyncPolicy:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

