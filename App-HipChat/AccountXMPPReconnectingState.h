//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccountXMPPReactivatingState.h"

@interface AccountXMPPReconnectingState : AccountXMPPReactivatingState
{
}

- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStreamDidConnect:(id)arg1;
- (BOOL)isConnecting;
- (void)reconnectionFailed;
- (void)timeout;
- (void)transitionIn;

@end
