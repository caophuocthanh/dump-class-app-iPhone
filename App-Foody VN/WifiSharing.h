//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, User;

@interface WifiSharing : NSObject
{
    NSString *_Id;
    NSString *_name;
    NSString *_password;
    NSString *_lastDateUpdate;
    User *_user;
}

@property(retain, nonatomic) User *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *lastDateUpdate; // @synthesize lastDateUpdate=_lastDateUpdate;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;

@end

