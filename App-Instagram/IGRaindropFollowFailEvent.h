//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropFollowFailEvent : TBaseStruct <TBase, NSCoding>
{
    BOOL __thrift_isFollow;
    long long __thrift_targetUserId;
    long long __thrift_position;
    NSString *__thrift_algorithm;
    NSString *__thrift_clickPoint;
    NSString *__thrift_errorMessage;
    long long __thrift_sectionNumber;
    BOOL __thrift_isFollow_set;
    BOOL __thrift_targetUserId_set;
    BOOL __thrift_position_set;
    BOOL __thrift_algorithm_set;
    BOOL __thrift_clickPoint_set;
    BOOL __thrift_errorMessage_set;
    BOOL __thrift_sectionNumber_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetSectionNumber;
- (BOOL)sectionNumberIsSet;
@property(nonatomic) long long sectionNumber;
- (void)unsetErrorMessage;
- (BOOL)errorMessageIsSet;
@property(retain, nonatomic) NSString *errorMessage;
- (void)unsetClickPoint;
- (BOOL)clickPointIsSet;
@property(retain, nonatomic) NSString *clickPoint;
- (void)unsetAlgorithm;
- (BOOL)algorithmIsSet;
@property(retain, nonatomic) NSString *algorithm;
- (void)unsetPosition;
- (BOOL)positionIsSet;
@property(nonatomic) long long position;
- (void)unsetTargetUserId;
- (BOOL)targetUserIdIsSet;
@property(nonatomic) long long targetUserId;
- (void)unsetIsFollow;
- (BOOL)isFollowIsSet;
@property(nonatomic) BOOL isFollow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsFollow:(BOOL)arg1 targetUserId:(long long)arg2 position:(long long)arg3 algorithm:(id)arg4 clickPoint:(id)arg5 errorMessage:(id)arg6 sectionNumber:(long long)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

