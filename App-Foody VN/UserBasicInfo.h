//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface UserBasicInfo : NSObject
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_maritalStatus;
    NSString *_birthday;
    NSString *_gender;
    NSString *_marital;
    NSString *_descriptionUser;
    NSString *_displayContact;
    NSArray *_socialLink;
}

@property(retain, nonatomic) NSArray *socialLink; // @synthesize socialLink=_socialLink;
@property(copy, nonatomic) NSString *displayContact; // @synthesize displayContact=_displayContact;
@property(copy, nonatomic) NSString *descriptionUser; // @synthesize descriptionUser=_descriptionUser;
@property(copy, nonatomic) NSString *marital; // @synthesize marital=_marital;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *maritalStatus; // @synthesize maritalStatus=_maritalStatus;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (void).cxx_destruct;

@end
