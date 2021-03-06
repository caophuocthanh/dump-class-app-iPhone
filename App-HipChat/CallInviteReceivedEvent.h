//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CallEvent.h"

@class NSDate;

@interface CallInviteReceivedEvent : CallEvent
{
    int _callOptions;
    NSDate *_callDate;
}

@property(retain, nonatomic) NSDate *callDate; // @synthesize callDate=_callDate;
@property(readonly, nonatomic) int callOptions; // @synthesize callOptions=_callOptions;
- (void).cxx_destruct;
- (id)initWithAccountContext:(id)arg1 fromJID:(id)arg2;
- (id)initWithAccountContext:(id)arg1 fromJID:(id)arg2 callOptions:(int)arg3;

@end

