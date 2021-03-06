//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOTextContentViewObject.h"

@class SSOIdentity, SSOProfileSource;

@interface SSOIdentityContentViewObject : GOOTextContentViewObject
{
    BOOL _profileImageCircular;
    SSOIdentity *_identity;
    SSOProfileSource *_profileSource;
}

+ (id)objectWithIdentity:(id)arg1 profileSource:(id)arg2;
@property(nonatomic, getter=isProfileImageCircular) BOOL profileImageCircular; // @synthesize profileImageCircular=_profileImageCircular;
@property(retain, nonatomic) SSOProfileSource *profileSource; // @synthesize profileSource=_profileSource;
@property(retain, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
- (void).cxx_destruct;
- (id)profileImage;
- (Class)contentViewClass;

@end

