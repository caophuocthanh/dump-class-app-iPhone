//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaTextFormat.h"

@class IOSIntArray, IOSObjectArray, JavaUtilLocale;

@interface JavaTextMessageFormat : JavaTextFormat
{
    JavaUtilLocale *locale_;
    IOSObjectArray *strings_;
    IOSIntArray *argumentNumbers_;
    IOSObjectArray *formats_;
    int maxOffset_;
    int maxArgumentIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)formatWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)appendQuotedWithJavaLangStringBuffer:(id)arg1 withNSString:(id)arg2;
- (id)toPattern;
- (id)decodeSimpleDateFormatWithJavaLangStringBuffer:(id)arg1 withJavaTextFormat:(id)arg2;
- (id)decodeDecimalFormatWithJavaLangStringBuffer:(id)arg1 withJavaTextFormat:(id)arg2;
- (void)setLocaleWithJavaUtilLocale:(id)arg1;
- (void)setFormatsWithJavaTextFormatArray:(id)arg1;
- (void)setFormatWithInt:(int)arg1 withJavaTextFormat:(id)arg2;
- (id)parseVariableWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (int)matchWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2 withBoolean:(BOOL)arg3 withNSStringArray:(id)arg4;
- (id)parseObjectWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (id)parseWithNSString:(id)arg1 withJavaTextParsePosition:(id)arg2;
- (id)parseWithNSString:(id)arg1;
- (unsigned int)hash;
- (id)getLocale;
- (void)setFormatsByArgumentIndexWithJavaTextFormatArray:(id)arg1;
- (void)setFormatByArgumentIndexWithInt:(int)arg1 withJavaTextFormat:(id)arg2;
- (id)getFormatsByArgumentIndex;
- (id)getFormats;
- (id)formatWithId:(id)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (void)handleFormatWithJavaTextFormat:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withJavaUtilList:(id)arg4;
- (void)handleArgumentFieldWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaTextFieldPosition:(id)arg4 withJavaUtilList:(id)arg5;
- (id)formatImplWithNSObjectArray:(id)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3 withJavaUtilList:(id)arg4;
- (id)formatWithNSObjectArray:(id)arg1 withJavaLangStringBuffer:(id)arg2 withJavaTextFieldPosition:(id)arg3;
- (id)formatToCharacterIteratorWithId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)clone;
- (void)applyPatternWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)initWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;

@end

