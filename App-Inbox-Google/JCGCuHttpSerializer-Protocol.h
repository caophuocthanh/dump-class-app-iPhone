//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JavaIoOutputStream, NSString;

@protocol JCGCuHttpSerializer <NSObject, JavaObject>
- (BOOL)isSerializable;
- (BOOL)serializeWithId:(id)arg1 withJavaIoOutputStream:(JavaIoOutputStream *)arg2;
- (NSString *)getHttpContentType;
@end

