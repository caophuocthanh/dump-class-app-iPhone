//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTAddress_Builder <NSObject, JavaObject>
- (id <JBTAddress>)build;
- (id <JBTAddress_Builder>)setIncludeNameInFormattedStringWithBoolean:(BOOL)arg1;
- (id <JBTAddress_Builder>)setLongitudeWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setLatitudeWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setPostalCodeWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setCountryWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setRegionWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setLocalityWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setAddressFromPlaceApiWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (id <JBTAddress_Builder>)setStreetAddressWithNSString:(NSString *)arg1;
- (id <JBTAddress_Builder>)setNameWithNSString:(NSString *)arg1;
@end

