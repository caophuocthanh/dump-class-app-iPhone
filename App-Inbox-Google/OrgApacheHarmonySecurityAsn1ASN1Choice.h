//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgApacheHarmonySecurityAsn1ASN1Type.h"

@class IOSObjectArray;

@interface OrgApacheHarmonySecurityAsn1ASN1Choice : OrgApacheHarmonySecurityAsn1ASN1Type
{
    IOSObjectArray *type_;
    IOSObjectArray *identifiers_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (id)getObjectToEncodeWithId:(id)arg1;
- (int)getIndexWithId:(id)arg1;
- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(id)arg1;
- (BOOL)checkTagWithInt:(int)arg1;
- (void)addIdentifierWithJavaUtilTreeMap:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithOrgApacheHarmonySecurityAsn1ASN1TypeArray:(id)arg1;

@end

