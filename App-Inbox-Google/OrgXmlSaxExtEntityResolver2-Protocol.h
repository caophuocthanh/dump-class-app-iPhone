//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"
#import "OrgXmlSaxEntityResolver.h"

@class NSString, OrgXmlSaxInputSource;

@protocol OrgXmlSaxExtEntityResolver2 <OrgXmlSaxEntityResolver, NSObject, JavaObject>
- (OrgXmlSaxInputSource *)resolveEntityWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3 withNSString:(NSString *)arg4;
- (OrgXmlSaxInputSource *)getExternalSubsetWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
@end

