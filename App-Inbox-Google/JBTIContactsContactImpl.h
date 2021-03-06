//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTContact.h"

@class ComGoogleAppsBigtopServicesContactsBigTopContact, JBTCCachedValue, JBTIContactsPerContactPhotoUrls, NSString;

@interface JBTIContactsContactImpl : NSObject <JBTContact>
{
    ComGoogleAppsBigtopServicesContactsBigTopContact *bigTopContact_;
    NSString *idNamespaceForContactReferences_;
    id <JBTId> contactId_;
    NSString *rank_;
    JBTCCachedValue *contactReferences_;
    JBTIContactsPerContactPhotoUrls *photoUrls_;
    BOOL isLocal_;
    JBTCCachedValue *primaryEmail_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_equalsWithId__params;
+ (id)__annotations_getPrimaryEmail;
- (void)dealloc;
- (id)getSource;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocal;
- (id)getBigTopEmailList;
- (id)getRank;
- (id)getLocations;
- (id)getPhoneNumbers;
- (id)getEmailAddresses;
- (id)getContactReferences;
- (id)getPhotoUrlWithInt:(int)arg1;
- (BOOL)hasProfilePhotoUrl;
- (BOOL)hasBrandPhotoUrl;
- (id)getPrimaryEmail;
- (id)getFullName;
- (id)getIdNamespaceForContactReferences;
- (id)getId;
- (id)initWithJBTId:(id)arg1 withNSString:(id)arg2 withComGoogleAppsBigtopServicesContactsBigTopContact:(id)arg3 withNSString:(id)arg4 withJBTIContactsPerContactPhotoUrls:(id)arg5 withBoolean:(BOOL)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

