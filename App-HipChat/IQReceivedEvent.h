//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatEvent.h"

@class NSString, XMPPJID;

@interface IQReceivedEvent : HipChatEvent
{
    XMPPJID *_fromJid;
    NSString *_iqId;
    NSString *_iqType;
}

@property(readonly, copy, nonatomic) NSString *iqType; // @synthesize iqType=_iqType;
@property(readonly, copy, nonatomic) NSString *iqId; // @synthesize iqId=_iqId;
@property(readonly, copy, nonatomic) XMPPJID *fromJid; // @synthesize fromJid=_fromJid;
- (void).cxx_destruct;
- (id)initWithFromJID:(id)arg1 iqId:(id)arg2 type:(id)arg3;

@end

