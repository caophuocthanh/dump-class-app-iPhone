//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTPaymentMethod.h"

#import "NSMutableCopying.h"

@class NSString;

@interface BTPayPalPaymentMethod : BTPaymentMethod <NSMutableCopying>
{
    NSString *_email;
}

@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

