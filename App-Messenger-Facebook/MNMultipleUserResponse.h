//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface MNMultipleUserResponse : FBValueObject <NSCopying>
{
    NSDictionary *_usersByUserId;
}

@property(readonly, copy, nonatomic) NSDictionary *usersByUserId; // @synthesize usersByUserId=_usersByUserId;
- (void).cxx_destruct;
- (id)initWithUsersByUserId:(id)arg1;

@end

