//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@protocol PSPDFDatabaseEncryptionProvider <NSObject>
- (BOOL)reEncryptDatabase:(void *)arg1 withKey:(NSData *)arg2;
- (BOOL)encryptDatabase:(void *)arg1 withKey:(NSData *)arg2;
@end
