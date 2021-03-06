//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSString;

@interface PayPalShippingAddress : NSObject <NSCopying>
{
    BOOL _isDefaultAddress;
    NSString *_recipientName;
    NSString *_line1;
    NSString *_line2;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_countryCode;
    NSDictionary *_jsonDictionary;
}

+ (id)shippingAddressFromJsonDictionary:(id)arg1;
+ (id)shippingAddressWithRecipientName:(id)arg1 withLine1:(id)arg2 withLine2:(id)arg3 withCity:(id)arg4 withState:(id)arg5 withPostalCode:(id)arg6 withCountryCode:(id)arg7;
@property(nonatomic) BOOL isDefaultAddress; // @synthesize isDefaultAddress=_isDefaultAddress;
@property(copy, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *line2; // @synthesize line2=_line2;
@property(copy, nonatomic) NSString *line1; // @synthesize line1=_line1;
@property(copy, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqualToShippingAddress:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryForJsonValue;

@end

