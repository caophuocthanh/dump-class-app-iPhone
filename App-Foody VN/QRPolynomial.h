//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QRPolynomial : NSObject
{
    int *_coeffs;
    int _length;
}

@property(readonly, nonatomic) int length; // @synthesize length=_length;
- (id)mod:(id)arg1;
- (id)multiply:(id)arg1;
- (int)get:(int)arg1;
- (void)dealloc;
- (id)initWithCoeffs:(int *)arg1 length:(int)arg2 shift:(int)arg3;

@end

