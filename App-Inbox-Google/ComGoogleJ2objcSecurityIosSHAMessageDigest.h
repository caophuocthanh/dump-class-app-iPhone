//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecurityMessageDigest.h"

#import "NSCopying.h"

@class JavaIoByteArrayOutputStream;

@interface ComGoogleJ2objcSecurityIosSHAMessageDigest : JavaSecurityMessageDigest <NSCopying>
{
    JavaIoByteArrayOutputStream *buffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)engineReset;
- (void)engineUpdateWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)engineUpdateWithByte:(BOOL)arg1;
- (id)initWithNSString:(id)arg1;

@end

