//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IGCookieStorage : NSObject
{
}

- (void)migrateCookiesFromKey:(id)arg1 toKey:(id)arg2;
- (void)purgeCookiesForKey:(id)arg1;
- (void)purgeAllCookies;
- (void)saveCookieKeyMap:(id)arg1;
- (void)saveCookieProperties:(id)arg1 forKey:(id)arg2;
- (void)storeCookies:(id)arg1 forKey:(id)arg2;
- (id)defaults;
- (id)allCookies;
- (id)cookiePropertiesForKey:(id)arg1;
- (id)cookiesForKey:(id)arg1;

@end

