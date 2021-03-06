//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMConfigurable.h"
#import "FBSessionClassProvidable.h"
#import "MNPushMessageHandling.h"

@class FBLazyCreator, NSMutableSet, NSString, UIApplication;

@interface FBMPushedMessageHandler : NSObject <FBSessionClassProvidable, FBMConfigurable, MNPushMessageHandling>
{
    NSMutableSet *_pendingThreadFetchIds;
    NSMutableSet *_idsOfMessagesNavigatedTo;
    NSMutableSet *_idsOfMessagesStitched;
    id <FBMPushedMessageEventHandler_DEPRECATED> _eventHandler;
    UIApplication *_application;
    FBLazyCreator *_authManagerCreator;
    FBLazyCreator *_threadSetCreator;
    FBLazyCreator *_pushedMessageAdderCreator;
    FBLazyCreator *_threadStoreCreator;
    FBLazyCreator *_threadDescriptorFactoryCreator;
    FBLazyCreator *_pushLoggerCreator;
    FBLazyCreator *_databaseOpenedDelayerCreator;
    FBLazyCreator *_messageReceivedListenerCreator;
    FBLazyCreator *_attachmentUtilsCreator;
    FBLazyCreator *_threadMediaCacheCreator;
    FBLazyCreator *_appPropertiesCreator;
    FBLazyCreator *_threadMarkServiceCreator;
}

- (void).cxx_destruct;
- (void)_markThreadRead:(id)arg1 pushedMessage:(id)arg2;
- (void)_markThreadUnread:(id)arg1;
- (void)_markThreadReadIfAlreadyRead:(id)arg1 pushedMessage:(id)arg2;
- (void)_handleThreadFetchedError:(id)arg1 forId:(id)arg2 pushedMessage:(id)arg3 launchedByUser:(BOOL)arg4 requestId:(id)arg5;
- (void)_handleThreadFetched:(id)arg1 pushedMessage:(id)arg2 requestId:(id)arg3;
- (void)_sendThreadRequestWithDescriptor:(id)arg1 message:(id)arg2 launchedByUser:(BOOL)arg3 idForLogging:(id)arg4 threadResultBlock:(CDUnknownBlockType)arg5;
- (void)_fetchThreadForMessage:(id)arg1 launchedByUser:(BOOL)arg2 threadBlock:(CDUnknownBlockType)arg3;
- (void)_markThreadReadForPushMessage:(id)arg1 thread:(id)arg2 added:(BOOL)arg3;
- (id)_addPushMessage:(id)arg1 toThread:(id)arg2;
- (void)_stitchPushMessage:(id)arg1 toThread:(id)arg2 descriptor:(id)arg3 actionIdentifier:(id)arg4 responseInfo:(id)arg5 launchedByUser:(BOOL)arg6 supportsMessagePreview:(BOOL)arg7 handledCompletionBlock:(CDUnknownBlockType)arg8;
- (void)_fireEventForMessageReceivedIfNecessary:(id)arg1 descriptor:(id)arg2 actionIdentifier:(id)arg3 launchedByUser:(BOOL)arg4 isColdStart:(BOOL)arg5;
- (BOOL)_isMessageIncomplete:(id)arg1;
- (void)_updateThreadSyncActionId:(id)arg1;
- (void)_updateMessageState:(id)arg1;
- (void)_handlePushedMessage:(id)arg1 actionIdentifier:(id)arg2 responseInfo:(id)arg3 launchedByUser:(BOOL)arg4 supportsMessagePreview:(BOOL)arg5 isColdStart:(BOOL)arg6 handledCompletionBlock:(CDUnknownBlockType)arg7;
- (BOOL)isAPNSMessageAlreadyHandled:(id)arg1;
- (void)handleSyncMessage:(id)arg1;
- (void)handleAPNSMessage:(id)arg1 supportsPreview:(BOOL)arg2 userActionInfo:(id)arg3 fetchCompletionHandler:(CDUnknownBlockType)arg4;
- (void)handleMQTTPushMessage:(id)arg1 supportsPreview:(BOOL)arg2;
- (void)postNotificationForMessage:(id)arg1 pushSource:(unsigned int)arg2 launchedByUser:(BOOL)arg3;
- (BOOL)shouldBuzzForThread:(id)arg1;
- (BOOL)isConfigured;
- (void)endSession;
- (void)configureWithEventHandler:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithAuthManagerCreator:(CDUnknownBlockType)arg1 threadSetCreator:(CDUnknownBlockType)arg2 pushedMessageAdderCreator:(CDUnknownBlockType)arg3 threadStoreCreator:(CDUnknownBlockType)arg4 pushLoggerCreator:(CDUnknownBlockType)arg5 threadDescriptorFactoryCreator:(CDUnknownBlockType)arg6 databaseOpenedDelayerCreator:(CDUnknownBlockType)arg7 messageReceivedListenerCreator:(CDUnknownBlockType)arg8 attachmentUtilsCreator:(CDUnknownBlockType)arg9 threadSharedMediaModelCacheCreator:(CDUnknownBlockType)arg10 appPropertiesCreator:(CDUnknownBlockType)arg11 threadMarkServiceCreator:(CDUnknownBlockType)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

