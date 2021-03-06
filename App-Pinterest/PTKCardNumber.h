//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PTKComponent.h"

@class NSString;

@interface PTKCardNumber : PTKComponent
{
    NSString *_number;
}

+ (id)cardNumberWithString:(id)arg1;
- (void).cxx_destruct;
- (int)lengthForCardType;
@property(readonly, nonatomic, getter=isPartiallyValid) BOOL partiallyValid;
@property(readonly, nonatomic, getter=isValidLuhn) BOOL validLuhn;
@property(readonly, nonatomic, getter=isValidLength) BOOL validLength;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic) NSString *formattedStringWithTrail;
@property(readonly, nonatomic) NSString *formattedString;
@property(readonly, nonatomic) NSString *string;
@property(readonly, nonatomic) NSString *lastGroup;
@property(readonly, nonatomic) NSString *last4;
@property(readonly, nonatomic) int cardType;
- (id)initWithString:(id)arg1;

@end

