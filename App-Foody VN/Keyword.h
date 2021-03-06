//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSString, Photo;

@interface Keyword : NSObject
{
    NSString *Id;
    NSString *className;
    NSString *value;
    NSString *cityId;
    Photo *photo;
    NSString *resAddress;
    NSString *resName;
    CLLocation *_location;
    NSString *_distance;
    struct _NSRange selectedRange;
}

+ (id)arrayToCommaSeparatedList:(id)arg1;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *resName; // @synthesize resName;
@property(copy, nonatomic) NSString *resAddress; // @synthesize resAddress;
@property(retain, nonatomic) Photo *photo; // @synthesize photo;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId;
@property(copy, nonatomic) NSString *value; // @synthesize value;
@property(copy, nonatomic) NSString *className; // @synthesize className;
@property(copy, nonatomic) NSString *Id; // @synthesize Id;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange;
- (void).cxx_destruct;
- (void)calculatorDistanceFromLocation:(id)arg1;

@end

