//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncClientImplTopicsTopicFactory, JBTIConversationConversationFactory, JBTISearchSearchClickLogger_Factory, JBTISmartMailSmartMailInfoFactory;

@interface ComGoogleAppsBigtopSyncClientImplSearchOneboxOneBoxFactory : NSObject
{
    JBTIConversationConversationFactory *conversationFactory_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    ComGoogleAppsBigtopSyncClientImplTopicsTopicFactory *topicFactory_;
    id <JBTISmartMailSmartMailCommandApplier> commandApplier_;
    JBTISearchSearchClickLogger_Factory *searchClickLoggerFactory_;
    JBTISmartMailSmartMailInfoFactory *smartMailInfoFactory_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_createActionWithJBTISmartMailSmartMailComponentContextImpl_withJCSAction_;
+ (id)__annotations_createComponentsFromSmartMailInfoWithJCSSmartMailInfo_withJBTItem_;
+ (id)__annotations_createTopicOneBoxWithJBTId_withComGoogleAppsBigtopServicesTopicsTopic_;
+ (id)__annotations_createFactBoxWithJBTId_withComGoogleAppsBigtopServicesSearchFactBox_;
+ (id)__annotations_createObjectOneBoxWithJBTId_withJCSSmartMailInfo_;
+ (id)__annotations_initWithJBTIConversationConversationFactory_withJBTICommonTransactionFactory_withComGoogleAppsBigtopSyncClientImplTopicsTopicFactory_withJBTISmartMailSmartMailCommandApplier_withJBTISearchSearchClickLogger_Factory_withJBTISmartMailSmartMailInfoFactory_withComGoogleCumulusCommonUtilClock_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)createActionWithJBTISmartMailSmartMailComponentContextImpl:(id)arg1 withJCSAction:(id)arg2;
- (id)createSmartMailContextWithJBTItem:(id)arg1;
- (id)createComponentsForUnifiedTemplatesWithJCSSmartMailInfo:(id)arg1 withJBTItem:(id)arg2;
- (id)createGenericSmartMailFromSmartMailInfoWithJCSSmartMailInfo:(id)arg1 withJBTItem:(id)arg2;
- (id)createComponentsFromSmartMailInfoWithJCSSmartMailInfo:(id)arg1 withJBTItem:(id)arg2;
- (id)createTopicOneBoxWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesTopicsTopic:(id)arg2;
- (id)createFactBoxWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesSearchFactBox:(id)arg2;
- (id)createObjectOneBoxWithJBTId:(id)arg1 withJCSSmartMailInfo:(id)arg2;
- (id)initWithJBTIConversationConversationFactory:(id)arg1 withJBTICommonTransactionFactory:(id)arg2 withComGoogleAppsBigtopSyncClientImplTopicsTopicFactory:(id)arg3 withJBTISmartMailSmartMailCommandApplier:(id)arg4 withJBTISearchSearchClickLogger_Factory:(id)arg5 withJBTISmartMailSmartMailInfoFactory:(id)arg6 withComGoogleCumulusCommonUtilClock:(id)arg7;

@end

