//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class IOSIntArray, JBTIConversationSendingMonitorImpl, JBTIConversationSendingMonitorImpl_MonitoredMessage, NSString;

@interface JBTIConversationSendingMonitorImpl_$2 : NSObject <JavaLangRunnable>
{
    JBTIConversationSendingMonitorImpl *this$0_;
    IOSIntArray *val$cancellationToken_;
    JBTIConversationSendingMonitorImpl_MonitoredMessage *val$monitoredMessage_;
    id <JBTId> val$messageId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIConversationSendingMonitorImpl:(id)arg1 withIntArray:(id)arg2 withJBTIConversationSendingMonitorImpl_MonitoredMessage:(id)arg3 withJBTId:(id)arg4;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

