//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTConversationMessageDraft_ResponseTypeEnum, JBTMessageAttachment_TypeEnum, JBTMessageRegion_TypeEnum, NSString;

@protocol JBTConversationMessageDraft <NSObject, JavaObject>
- (id <JBTMessageAttachment>)getInlineAttachmentForEmbeddedUrlWithNSString:(NSString *)arg1;
- (void)maybeTriggerCreateReminderPromo;
- (id <JBTId>)getNewMessageId;
- (id <JBTId>)getNewConversationId;
- (id <JBTParticipantsSummary>)getParticipantsSummaryWithInt:(int)arg1;
- (void)setParticipantSetWithJBTParticipantSet:(id <JBTParticipantSet>)arg1;
- (id <JBTParticipantSet>)getParticipantSet;
- (void)setHasBeenEdited;
- (id <JBTRecipientsSummary>)getRecipientsSummaryWithInt:(int)arg1;
- (JBTMessageRegion_TypeEnum *)getMessageRegionTypeFromOrdinalWithInt:(int)arg1;
- (id <JBTMessageRegion>)createMessageRegionWithNSString:(NSString *)arg1 withJBTMessageRegion_TypeEnum:(JBTMessageRegion_TypeEnum *)arg2;
- (id <JavaUtilList>)getBodyRegions;
- (id <JBTId>)undoableDiscardWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2 withJBTId:(id <JBTId>)arg3 withJBTId:(id <JBTId>)arg4;
- (id <JBTId>)discardWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (BOOL)canDiscard;
- (id <JBTId>)sendWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (BOOL)canSend;
- (id <JBTId>)saveWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (BOOL)canSave;
- (BOOL)hasListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)removeListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)addListenerWithJBTEventListener:(id <JBTEventListener>)arg1;
- (void)changeResponseTypeKeepAttachmentsWithJBTConversationMessageDraft_ResponseTypeEnum:(JBTConversationMessageDraft_ResponseTypeEnum *)arg1;
- (void)changeResponseTypeWithJBTConversationMessageDraft_ResponseTypeEnum:(JBTConversationMessageDraft_ResponseTypeEnum *)arg1;
- (BOOL)canBeReplyAll;
- (BOOL)canChangeResponseType;
- (NSString *)generateAttachmentIdWithNSString:(NSString *)arg1;
- (id <JBTMessageAttachment>)createAttachmentGivenSizeWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3 withJBTMessageAttachment_TypeEnum:(JBTMessageAttachment_TypeEnum *)arg4 withNSString:(NSString *)arg5 withLong:(long long)arg6;
- (id <JBTMessageAttachment>)createAttachmentGivenIdWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3 withJBTMessageAttachment_TypeEnum:(JBTMessageAttachment_TypeEnum *)arg4 withNSString:(NSString *)arg5;
- (id <JBTMessageAttachment>)createAttachmentWithIdWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3 withJBTMessageAttachment_TypeEnum:(JBTMessageAttachment_TypeEnum *)arg4;
- (id <JBTMessageAttachment>)createAttachmentWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3;
- (void)setAttachmentListWithJavaUtilList:(id <JavaUtilList>)arg1;
- (id <JavaUtilList>)getAttachmentList;
- (id <JavaUtilList>)getAttachments;
- (id <JavaUtilList>)getBcc;
- (id <JavaUtilList>)getCc;
- (id <JavaUtilList>)getTo;
- (void)setFromWithJBTContactReference:(id <JBTContactReference>)arg1;
- (id <JavaUtilList>)getVerifiedFromAddresses;
- (id <JBTContactReference>)getFrom;
- (void)setBodyWithNSString:(NSString *)arg1;
- (NSString *)getBody;
- (void)setBodyPlainTextWithNSString:(NSString *)arg1;
- (NSString *)getBodyPlainText;
- (void)setSubjectWithNSString:(NSString *)arg1;
- (NSString *)getSubject;
- (id <JBTId>)getOwnerConversationId;
- (NSString *)getSerializedId;
@end

