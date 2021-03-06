//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLRemoteModelObject.h"

@class CBLBoard, CBLConversation, CBLPin, CBLUser, NSDate, NSString;

@interface CBLConversationMessage : CBLRemoteModelObject
{
    CBLConversation *_conversation;
    NSDate *_createdAt;
    CBLUser *_sender;
    NSString *_text;
    CBLPin *_pin;
    CBLBoard *_board;
    CBLUser *_user;
}

+ (id)propertyTransformerClasses;
+ (id)propertyAliases;
@property(readonly, nonatomic) CBLUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) CBLBoard *board; // @synthesize board=_board;
@property(readonly, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) CBLUser *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) CBLConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (Class)classForConversationObject;
@property(readonly, nonatomic) CBLRemoteModelObject *object;
@property(readonly, nonatomic) BOOL hasObject;
@property(readonly, nonatomic, getter=isSenderActiveUser) BOOL senderActiveUser;

@end

