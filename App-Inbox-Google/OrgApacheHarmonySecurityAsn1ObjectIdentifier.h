//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSIntArray, NSString;

@interface OrgApacheHarmonySecurityAsn1ObjectIdentifier : NSObject
{
    IOSIntArray *oid_;
    NSString *soid_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)toIntArrayWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
+ (BOOL)isOIDWithNSString:(id)arg1;
+ (id)toIntArrayWithNSString:(id)arg1;
+ (id)toStringWithIntArray:(id)arg1;
+ (void)validateWithIntArray:(id)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithIntArray:(id)arg1;

@end

