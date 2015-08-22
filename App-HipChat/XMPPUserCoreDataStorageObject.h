//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "XMPPUser.h"

@class NSNumber, NSSet, NSString, UIImage, XMPPJID, XMPPResourceCoreDataStorageObject;

@interface XMPPUserCoreDataStorageObject : NSManagedObject <XMPPUser>
{
    int section;
}

+ (id)keyPathsForValuesAffectingAllResources;
+ (id)keyPathsForValuesAffectingSectionName;
+ (id)keyPathsForValuesAffectingSection;
+ (id)keyPathsForValuesAffectingIsOnline;
+ (id)keyPathsForValuesAffectingJid;
+ (id)insertInManagedObjectContext:(id)arg1 withItem:(id)arg2 streamBareJidStr:(id)arg3;
+ (id)insertInManagedObjectContext:(id)arg1 withJID:(id)arg2 streamBareJidStr:(id)arg3;
- (int)compareByAvailabilityName:(id)arg1 options:(unsigned int)arg2;
- (int)compareByAvailabilityName:(id)arg1;
- (int)compareByName:(id)arg1 options:(unsigned int)arg2;
- (int)compareByName:(id)arg1;
- (id)allResources;
- (id)resourceForJID:(id)arg1;
- (BOOL)isPendingApproval;
- (BOOL)isOnline;
- (void)updateWithPresence:(id)arg1 streamBareJidStr:(id)arg2;
- (void)recalculatePrimaryResource;
- (void)updateWithItem:(id)arg1;
- (void)updateGroupsWithItem:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
@property(retain, nonatomic) NSString *mentionName; // @dynamic mentionName;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) NSString *sectionName; // @dynamic sectionName;
@property(retain, nonatomic) NSNumber *sectionNum; // @dynamic sectionNum;
@property(nonatomic) int primitiveSection; // @dynamic primitiveSection;
@property(nonatomic) int section; // @dynamic section;
@property(retain, nonatomic) NSString *jidStr; // @dynamic jidStr;
@property(retain, nonatomic) XMPPJID *jid; // @dynamic jid;

// Remaining properties
@property(retain, nonatomic) NSString *ask; // @dynamic ask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *groups; // @dynamic groups;
@property(readonly) unsigned int hash;
@property(retain, nonatomic) NSString *mobile; // @dynamic mobile;
@property(retain, nonatomic) UIImage *photo; // @dynamic photo;
@property(retain, nonatomic) XMPPResourceCoreDataStorageObject *primaryResource; // @dynamic primaryResource;
@property(retain, nonatomic) NSString *primitiveDisplayName; // @dynamic primitiveDisplayName;
@property(retain, nonatomic) XMPPJID *primitiveJid; // @dynamic primitiveJid;
@property(retain, nonatomic) NSString *primitiveJidStr; // @dynamic primitiveJidStr;
@property(retain, nonatomic) NSString *primitiveMentionName; // @dynamic primitiveMentionName;
@property(retain, nonatomic) NSString *primitiveName; // @dynamic primitiveName;
@property(retain, nonatomic) NSString *primitiveSectionName; // @dynamic primitiveSectionName;
@property(retain, nonatomic) NSNumber *primitiveSectionNum; // @dynamic primitiveSectionNum;
@property(retain, nonatomic) NSSet *resources; // @dynamic resources;
@property(retain, nonatomic) NSString *streamBareJidStr; // @dynamic streamBareJidStr;
@property(retain, nonatomic) NSString *subscription; // @dynamic subscription;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *unreadMessages; // @dynamic unreadMessages;

@end
