//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HCCachedObject.h"

@class AccountContext, DDXMLElement, NSArray, NSDate, NSString, XMPPJID;

@interface Message : NSObject <HCCachedObject>
{
    BOOL _displaysOnSend;
    BOOL _hasImpreciseDate;
    BOOL _isEcho;
    BOOL _isHistory;
    BOOL _isPresence;
    BOOL _isSystem;
    BOOL _midIsFake;
    BOOL _shouldNotify;
    NSString *_body;
    NSString *_color;
    NSDate *_date;
    NSString *_displayId;
    NSString *_displayName;
    DDXMLElement *_fileData;
    NSString *_format;
    XMPPJID *_fromJid;
    XMPPJID *_viaJid;
    NSString *_htmlBody;
    NSString *_imageHTML;
    NSArray *_metadata;
    NSString *_mid;
    NSString *_type;
    AccountContext *_accountContext;
}

+ (id)getFromJidFromXMPPMessage:(id)arg1;
+ (id)outboundMessageWithBody:(id)arg1 messageId:(id)arg2 userJid:(id)arg3 accountContext:(id)arg4;
+ (id)infoMessageWithBody:(id)arg1 from:(id)arg2 isPresence:(BOOL)arg3 accountContext:(id)arg4;
+ (void)copyMetadataDict:(id)arg1 toMetadataXML:(id)arg2;
+ (void)updateMessage:(id)arg1 withMetadataFromServerResponse:(id)arg2;
+ (id)messageFromServerResponse:(id)arg1 accountContext:(id)arg2;
+ (id)messageFromXMPPMessage:(id)arg1 accountContext:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) BOOL shouldNotify; // @synthesize shouldNotify=_shouldNotify;
@property(nonatomic) BOOL midIsFake; // @synthesize midIsFake=_midIsFake;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL isSystem; // @synthesize isSystem=_isSystem;
@property(nonatomic) BOOL isPresence; // @synthesize isPresence=_isPresence;
@property(nonatomic) BOOL isHistory; // @synthesize isHistory=_isHistory;
@property(nonatomic) BOOL isEcho; // @synthesize isEcho=_isEcho;
@property(copy, nonatomic) NSString *imageHTML; // @synthesize imageHTML=_imageHTML;
@property(copy, nonatomic) NSString *htmlBody; // @synthesize htmlBody=_htmlBody;
@property(nonatomic) BOOL hasImpreciseDate; // @synthesize hasImpreciseDate=_hasImpreciseDate;
@property(retain, nonatomic) XMPPJID *viaJid; // @synthesize viaJid=_viaJid;
@property(retain, nonatomic) XMPPJID *fromJid; // @synthesize fromJid=_fromJid;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) DDXMLElement *fileData; // @synthesize fileData=_fileData;
@property(nonatomic) BOOL displaysOnSend; // @synthesize displaysOnSend=_displaysOnSend;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *displayId; // @synthesize displayId=_displayId;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
- (void).cxx_destruct;
- (int)compare:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)key;
- (id)proxyForJson;
- (BOOL)isCode;
- (BOOL)isMonospace;
- (BOOL)hasBody;
- (void)useFakeMid;
- (id)legacyChatArgs;
- (id)fillWithJsonData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

