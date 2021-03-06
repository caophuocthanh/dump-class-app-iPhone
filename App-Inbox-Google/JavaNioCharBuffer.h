//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioBuffer.h"

#import "JavaLangAppendable.h"
#import "JavaLangCharSequence.h"
#import "JavaLangComparable.h"
#import "JavaLangReadable.h"

@class NSString;

@interface JavaNioCharBuffer : JavaNioBuffer <JavaLangComparable, JavaLangCharSequence, JavaLangAppendable, JavaLangReadable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)wrapWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)wrapWithJavaLangCharSequence:(id)arg1;
+ (id)wrapWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)wrapWithCharArray:(id)arg1;
+ (id)allocateWithInt:(int)arg1;
- (int)readWithJavaNioCharBuffer:(id)arg1;
- (id)appendWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)appendWithJavaLangCharSequence:(id)arg1;
- (id)appendWithChar:(unsigned short)arg1;
@property(readonly, copy) NSString *description;
- (id)subSequenceFrom:(int)arg1 to:(int)arg2;
- (id)slice;
- (id)putWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithNSString:(id)arg1;
- (id)putWithInt:(int)arg1 withChar:(unsigned short)arg2;
- (id)putWithJavaNioCharBuffer:(id)arg1;
- (id)putWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)putWithCharArray:(id)arg1;
- (id)putWithChar:(unsigned short)arg1;
- (BOOL)protectedHasArray;
- (int)protectedArrayOffset;
- (id)protectedArray;
- (id)order;
- (int)length;
- (BOOL)isDirect;
@property(readonly) unsigned int hash;
- (BOOL)hasArray;
- (unsigned short)getWithInt:(int)arg1;
- (id)getWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)getWithCharArray:(id)arg1;
- (unsigned short)get;
- (BOOL)isEqual:(id)arg1;
- (id)duplicate;
- (int)compareToWithId:(id)arg1;
- (id)compact;
- (unsigned short)charAtWithInt:(int)arg1;
- (id)asReadOnlyBuffer;
- (int)arrayOffset;
- (id)array;
- (id)initWithInt:(int)arg1 withLong:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

