//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol MNThreadMessageSenderPluginServiceDelegate <NSObject>
- (void)threadMessageSenderPluginService:(id <MNThreadMessageSenderPluginService>)arg1 didSendAttachment:(id <MNPluginCompatibleAttachment>)arg2;
- (void)threadMessageSenderPluginService:(id <MNThreadMessageSenderPluginService>)arg1 didFailToSendAttachment:(id <MNPluginCompatibleAttachment>)arg2 withError:(NSError *)arg3;
- (void)threadMessageSenderPluginService:(id <MNThreadMessageSenderPluginService>)arg1 didEnqueueAttachment:(id <MNPluginCompatibleAttachment>)arg2;
@end
