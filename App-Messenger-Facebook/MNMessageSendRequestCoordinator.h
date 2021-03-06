//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphMessageSendListening.h"
#import "MNMessageSendStateMachineSendRequester.h"
#import "MNMessageSenderExtensionDelegate.h"
#import "MNMessageSyncEventListening.h"

@class FBGraphMessageSendRequestRunner, FBMessageAttachmentPreparer, FBReachabilityAnnouncer, MNMQTTMessageBatchCreator, MNMessageSenderExtensionController, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface MNMessageSendRequestCoordinator : NSObject <FBGraphMessageSendListening, MNMessageSenderExtensionDelegate, MNMessageSendStateMachineSendRequester, MNMessageSyncEventListening>
{
    FBGraphMessageSendRequestRunner *_graphSendRequestRunner;
    FBMessageAttachmentPreparer *_messageAttachmentPreparer;
    id <MNMessageSendMQTTAdapting> _mqttSender;
    MNMQTTMessageBatchCreator *_mqttMessageBatchCreator;
    MNMessageSenderExtensionController *_extensionSender;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    id <MNMessageSendAttachmentProgressListening> _attachmentProgressListener;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_stateMachinesByOfflineThreadingId;
    NSMutableDictionary *_graphSendRequestsByOfflineThreadingId;
    NSMutableDictionary *_attachmentPrepareOperationsByOfflineThreadingId;
}

- (void).cxx_destruct;
- (void)retryMessage:(id)arg1;
- (void)cancelMessage:(id)arg1;
- (void)prepareAttachments:(id)arg1 forMessage:(id)arg2;
- (void)sendMessageViaGraph:(id)arg1;
- (void)sendMessageBatchViaMQTTBeginningWithMessage:(id)arg1 maxBatchSize:(unsigned int)arg2;
- (void)sendMessageViaMQTT:(id)arg1;
- (void)sendMessageViaExtension:(id)arg1;
- (void)messageDidSyncViaThreadFetch:(id)arg1 messageId:(id)arg2;
- (void)messageDidSyncViaSyncProtocol:(id)arg1 messageId:(id)arg2;
- (void)_messageAttachmentPreparationDidFail:(id)arg1 error:(id)arg2;
- (void)_messageAttachmentPreparationDidComplete:(id)arg1;
- (void)_message:(id)arg1 attachment:(id)arg2 preparationProgressDidChange:(float)arg3;
- (void)graphMessageSendRequestRunnerDidUpdateProgressForMessage:(id)arg1 didUpdateUploadProgress:(float)arg2;
- (void)graphMessageSendRequestRunnerWillSendMessage:(id)arg1;
- (void)graphMessageSendRequestRunnerDidSendMessage:(id)arg1 messageId:(id)arg2;
- (void)graphMessageSendRequestRunnerDidCancelSendingMessage:(id)arg1;
- (void)graphMessageSendRequestRunnerCouldNotSendMessage:(id)arg1 error:(id)arg2;
- (void)graphMessageSendRequestRunnerWillRetrySendingMessage:(id)arg1;
- (void)_mqttMessageBatchDidFinish:(id)arg1 results:(id)arg2;
- (void)_mqttMessageBatchDidPublish:(id)arg1;
- (void)_mqttMessage:(id)arg1 didFailWithError:(id)arg2 shouldTreatAsBatchHeadIfPossible:(BOOL)arg3;
- (void)_mqttMessage:(id)arg1 didSucceedWithMessageId:(id)arg2;
- (void)_mqttMessageDidPublish:(id)arg1;
- (void)extension:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)extension:(id)arg1 didSendMessage:(id)arg2 messageId:(id)arg3;
- (id)_sendingContextForMessage:(id)arg1 shouldTreatAsBatchHeadIfPossible:(BOOL)arg2;
- (id)_stateMachineFromMessage:(id)arg1;
- (void)failSendingMessageWithOfflineThreadingId:(id)arg1;
- (void)cancelSendingMessageWithOfflineThreadingId:(id)arg1;
- (void)finishSendingMessageWithOfflineThreadingId:(id)arg1;
- (void)beginSendingMessageWithOfflineThreadingId:(id)arg1;
- (void)prepareSendingMessageWithOfflineThreadingId:(id)arg1;
- (void)prepareSendingMessageWithStateMachine:(id)arg1;
- (id)initWithGraphRequestRunner:(id)arg1 attachmentPreparer:(id)arg2 mqttSender:(id)arg3 mqttMessageBatchCreator:(id)arg4 extensionSender:(id)arg5 reachabilityAnnouncer:(id)arg6 attachmentProgressListener:(id)arg7 queue:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

