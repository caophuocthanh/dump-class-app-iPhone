//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGUserDefaults : NSObject
{
}

+ (id)sharedIGUserDefaults;
- (void)removeObjectForKey:(id)arg1 inUserInfoForService:(id)arg2;
- (void)deleteUserInfoForService:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 andService:(id)arg3;
- (void)setUserInfo:(id)arg1 forService:(id)arg2;
- (id)objectForKey:(id)arg1 andService:(id)arg2;
- (id)userInfoForService:(id)arg1;
- (BOOL)hasAccessTokenExpiredForService:(id)arg1;
- (void)deleteAccessTokenForService:(id)arg1;
- (void)setRefreshToken:(id)arg1 forService:(id)arg2;
- (void)setAccessToken:(id)arg1 forService:(id)arg2;
- (void)setAccessTokenExpiration:(int)arg1 forService:(id)arg2;
- (void)expireAccessTokenForService:(id)arg1;
- (void)setAccessTokenWithExpiration:(id)arg1 expirationInSeconds:(int)arg2 forService:(id)arg3;
- (id)refreshTokenForService:(id)arg1;
- (id)accessTokenForService:(id)arg1;
- (void)deletePasswordForUsername:(id)arg1 andService:(id)arg2;
- (void)setUsername:(id)arg1 andPassword:(id)arg2 forService:(id)arg3;
- (id)passwordForUsername:(id)arg1 andService:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setInteger:(int)arg1 forKey:(id)arg2;
- (int)integerForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)userInfoKeyForService:(id)arg1;
- (id)userPrefixedKey:(id)arg1;

@end

