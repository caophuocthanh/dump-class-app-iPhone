//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangRuntimeException.h"

@class IOSClass, NSString;

@interface JavaLangAnnotationIncompleteAnnotationException : JavaLangRuntimeException
{
    IOSClass *annotationType_;
    NSString *elementName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)elementName;
- (id)annotationType;
- (id)initWithIOSClass:(id)arg1 withNSString:(id)arg2;

@end

