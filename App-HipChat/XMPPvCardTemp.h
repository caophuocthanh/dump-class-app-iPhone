//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPvCardTempBase.h"

@class CLLocation, NSArray, NSData, NSDate, NSString, NSTimeZone, XMPPJID;

@interface XMPPvCardTemp : XMPPvCardTempBase
{
}

+ (id)iqvCardRequestForJID:(id)arg1;
+ (id)vCardTempCopyFromIQ:(id)arg1;
+ (id)vCardTempSubElementFromIQ:(id)arg1;
+ (id)vCardTempFromElement:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *keyType;
@property(retain, nonatomic) NSData *key;
@property(nonatomic) int privacyClass;
@property(retain, nonatomic) NSString *description;
@property(retain, nonatomic) NSString *version;
@property(retain, nonatomic) NSString *url;
@property(retain, nonatomic) NSString *uid;
@property(retain, nonatomic) NSData *sound;
@property(retain, nonatomic) NSString *phoneticSound;
@property(retain, nonatomic) NSString *sortString;
@property(retain, nonatomic) NSDate *revision;
@property(retain, nonatomic) NSString *prodid;
@property(retain, nonatomic) NSString *note;
@property(retain, nonatomic) NSArray *categories;
@property(retain, nonatomic) NSArray *orgUnits;
@property(retain, nonatomic) NSString *orgName;
@property(retain, nonatomic) XMPPvCardTemp *agent;
@property(retain, nonatomic) NSData *logo;
@property(retain, nonatomic) NSString *role;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) CLLocation *location;
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(retain, nonatomic) NSString *mailer;
@property(retain, nonatomic) XMPPJID *jid;
- (void)clearEmailAddresses;
@property(retain, nonatomic) NSArray *emailAddresses;
- (void)removeEmailAddress:(id)arg1;
- (void)addEmailAddress:(id)arg1;
- (void)clearTelecomsAddresses;
@property(retain, nonatomic) NSArray *telecomsAddresses;
- (void)removeTelecomsAddress:(id)arg1;
- (void)addTelecomsAddress:(id)arg1;
- (void)clearLabels;
@property(retain, nonatomic) NSArray *labels;
- (void)removeLabel:(id)arg1;
- (void)addLabel:(id)arg1;
- (void)clearAddresses;
@property(retain, nonatomic) NSArray *addresses;
- (void)removeAddress:(id)arg1;
- (void)addAddress:(id)arg1;
@property(retain, nonatomic) NSString *suffix;
@property(retain, nonatomic) NSString *prefix;
@property(retain, nonatomic) NSString *middleName;
@property(retain, nonatomic) NSString *givenName;
@property(retain, nonatomic) NSString *familyName;
@property(retain, nonatomic) NSString *formattedName;
@property(retain, nonatomic) NSString *nickname;
@property(retain, nonatomic) NSData *photo;
@property(retain, nonatomic) NSDate *bday;

@end
