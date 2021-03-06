//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaSecurityPrincipal.h"

@class NSString, OrgApacheHarmonySecurityX501Name;

@interface JavaxSecurityAuthX500X500Principal : NSObject <JavaIoSerializable, JavaSecurityPrincipal>
{
    OrgApacheHarmonySecurityX501Name *dn_;
    NSString *canonicalName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)substituteNameFromMapWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (id)getNameWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)getNameWithNSString:(id)arg1;
- (id)getName;
- (id)getEncoded;
- (BOOL)isEqual:(id)arg1;
- (id)getCanonicalName;
- (id)incorrectInputNameWithJavaIoIOException:(id)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)incorrectInputEncodingWithJavaIoIOException:(id)arg1;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithByteArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

