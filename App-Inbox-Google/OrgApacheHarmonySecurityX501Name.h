//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface OrgApacheHarmonySecurityX501Name : NSObject
{
    // Error parsing type: A^v, name: encoded_
    NSString *rfc1779String_;
    NSString *rfc2253String_;
    NSString *canonicalString_;
    id <JavaUtilList> rdn_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)__javaClone;
- (void)dealloc;
- (id)getEncoded;
- (id)getName0WithNSString:(id)arg1;
- (id)getNameWithNSString:(id)arg1;
- (id)getX500Principal;
- (id)initWithJavaUtilList:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithByteArray:(id)arg1;

@end

