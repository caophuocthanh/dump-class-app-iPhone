//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatCookieContext.h"

@class Account, NSDictionary, NSHTTPCookie;

@interface AccountCookieContext : HipChatCookieContext
{
    NSDictionary *_internalAPIAuthToken;
    Account *_account;
    NSHTTPCookie *_tokenCookie;
    NSHTTPCookie *_uidCookie;
}

@property(retain, nonatomic) NSHTTPCookie *uidCookie; // @synthesize uidCookie=_uidCookie;
@property(retain, nonatomic) NSHTTPCookie *tokenCookie; // @synthesize tokenCookie=_tokenCookie;
@property(readonly, nonatomic) __weak Account *account; // @synthesize account=_account;
@property(retain, nonatomic) NSDictionary *internalAPIAuthToken; // @synthesize internalAPIAuthToken=_internalAPIAuthToken;
- (void).cxx_destruct;
- (void)setupAccountCookies;
- (void)clearCookies;
- (id)initWithAccount:(id)arg1;

@end
