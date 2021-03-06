//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropLikeEvent : TBaseStruct <TBase, NSCoding>
{
    BOOL __thrift_isLike;
    long long __thrift_mediaId;
    BOOL __thrift_isDoubleTap;
    long long __thrift_mediaOwnerId;
    BOOL __thrift_isFollow;
    NSString *__thrift_algorithm;
    long long __thrift_position;
    BOOL __thrift_isLike_set;
    BOOL __thrift_mediaId_set;
    BOOL __thrift_isDoubleTap_set;
    BOOL __thrift_mediaOwnerId_set;
    BOOL __thrift_isFollow_set;
    BOOL __thrift_algorithm_set;
    BOOL __thrift_position_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetPosition;
- (BOOL)positionIsSet;
@property(nonatomic) long long position;
- (void)unsetAlgorithm;
- (BOOL)algorithmIsSet;
@property(retain, nonatomic) NSString *algorithm;
- (void)unsetIsFollow;
- (BOOL)isFollowIsSet;
@property(nonatomic) BOOL isFollow;
- (void)unsetMediaOwnerId;
- (BOOL)mediaOwnerIdIsSet;
@property(nonatomic) long long mediaOwnerId;
- (void)unsetIsDoubleTap;
- (BOOL)isDoubleTapIsSet;
@property(nonatomic) BOOL isDoubleTap;
- (void)unsetMediaId;
- (BOOL)mediaIdIsSet;
@property(nonatomic) long long mediaId;
- (void)unsetIsLike;
- (BOOL)isLikeIsSet;
@property(nonatomic) BOOL isLike;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsLike:(BOOL)arg1 mediaId:(long long)arg2 isDoubleTap:(BOOL)arg3 mediaOwnerId:(long long)arg4 isFollow:(BOOL)arg5 algorithm:(id)arg6 position:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

