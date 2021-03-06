//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class XMPPJID;

@interface XMPPPubSub : XMPPModule
{
    XMPPJID *serviceJID;
}

@property(readonly, nonatomic) XMPPJID *serviceJID; // @synthesize serviceJID;
- (void).cxx_destruct;
- (id)publishToNode:(id)arg1 entry:(id)arg2;
- (id)configureNode:(id)arg1;
- (id)allItemsForNode:(id)arg1;
- (id)discoverItemsForNode:(id)arg1;
- (id)deleteNode:(id)arg1;
- (id)createNode:(id)arg1 withOptions:(id)arg2;
- (id)getSubscriptionsForNode:(id)arg1;
- (id)getSubscriptions;
- (id)unsubscribeFromNode:(id)arg1 withSubid:(id)arg2;
- (id)unsubscribeFromNode:(id)arg1;
- (id)subscribeToNode:(id)arg1 withOptions:(id)arg2;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithServiceJID:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithServiceJID:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

