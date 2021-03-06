//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBKeychainStore : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
}

@property(readonly, copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
- (id)queryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (BOOL)setData:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (BOOL)setData:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (BOOL)setString:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (BOOL)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (BOOL)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;
- (id)initWithService:(id)arg1;

@end

