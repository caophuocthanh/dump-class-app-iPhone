//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class IGRaindropPlace, NSString;

@interface IGRaindropResultId : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_hashtagId;
    long long __thrift_userId;
    IGRaindropPlace *__thrift_placeId;
    BOOL __thrift_hashtagId_set;
    BOOL __thrift_userId_set;
    BOOL __thrift_placeId_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPlaceId;
- (BOOL)placeIdIsSet;
@property(retain, nonatomic) IGRaindropPlace *placeId;
- (void)unsetUserId;
- (BOOL)userIdIsSet;
@property(nonatomic) long long userId;
- (void)unsetHashtagId;
- (BOOL)hashtagIdIsSet;
@property(retain, nonatomic) NSString *hashtagId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashtagId:(id)arg1 userId:(long long)arg2 placeId:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

