//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropClusterEvent : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_clusterId;
    NSString *__thrift_clusterUserId;
    NSString *__thrift_clusterPosition;
    NSString *__thrift_clusterUserPosition;
    int __thrift_clusterEventType;
    long long __thrift_errorStatusCode;
    NSString *__thrift_errorMessage;
    BOOL __thrift_clusterId_set;
    BOOL __thrift_clusterUserId_set;
    BOOL __thrift_clusterPosition_set;
    BOOL __thrift_clusterUserPosition_set;
    BOOL __thrift_clusterEventType_set;
    BOOL __thrift_errorStatusCode_set;
    BOOL __thrift_errorMessage_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetErrorMessage;
- (BOOL)errorMessageIsSet;
@property(retain, nonatomic) NSString *errorMessage;
- (void)unsetErrorStatusCode;
- (BOOL)errorStatusCodeIsSet;
@property(nonatomic) long long errorStatusCode;
- (void)unsetClusterEventType;
- (BOOL)clusterEventTypeIsSet;
@property(nonatomic) int clusterEventType;
- (void)unsetClusterUserPosition;
- (BOOL)clusterUserPositionIsSet;
@property(retain, nonatomic) NSString *clusterUserPosition;
- (void)unsetClusterPosition;
- (BOOL)clusterPositionIsSet;
@property(retain, nonatomic) NSString *clusterPosition;
- (void)unsetClusterUserId;
- (BOOL)clusterUserIdIsSet;
@property(retain, nonatomic) NSString *clusterUserId;
- (void)unsetClusterId;
- (BOOL)clusterIdIsSet;
@property(retain, nonatomic) NSString *clusterId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithClusterId:(id)arg1 clusterUserId:(id)arg2 clusterPosition:(id)arg3 clusterUserPosition:(id)arg4 clusterEventType:(int)arg5 errorStatusCode:(long long)arg6 errorMessage:(id)arg7;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
