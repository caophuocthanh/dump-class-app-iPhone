//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSKeyedUnarchiver.h"

@interface NSKeyedUnarchiver (FBBase)
+ (id)fb_unarchiveObjectWithFile:(id)arg1 error:(id *)arg2;
+ (id)fb_unarchiveObjectWithData:(id)arg1 error:(id *)arg2;
- (id)fb_decodeObjectForKey:(id)arg1 error:(id *)arg2;
- (int)fb_decodeIntForKey:(id)arg1 error:(id *)arg2;
- (long long)fb_decodeInt64ForKey:(id)arg1 error:(id *)arg2;
- (int)fb_decodeInt32ForKey:(id)arg1 error:(id *)arg2;
- (float)fb_decodeFloatForKey:(id)arg1 error:(id *)arg2;
- (double)fb_decodeDoubleForKey:(id)arg1 error:(id *)arg2;
- (const char *)fb_decodeBytesForKey:(id)arg1 returnedLength:(unsigned int *)arg2 error:(id *)arg3;
- (BOOL)fb_decodeBoolForKey:(id)arg1 error:(id *)arg2;
- (id)fb_initForReadingWithData:(id)arg1 error:(id *)arg2;
@end

