//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSMutableSet;

@interface XMPPMUC : XMPPModule
{
    NSMutableSet *rooms;
}

- (void).cxx_destruct;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)xmppStream:(id)arg1 willUnregisterModule:(id)arg2;
- (void)xmppStream:(id)arg1 didRegisterModule:(id)arg2;
- (BOOL)isMUCRoomMessage:(id)arg1;
- (BOOL)isMUCRoomPresence:(id)arg1;
- (BOOL)isMUCRoomElement:(id)arg1;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;

@end
