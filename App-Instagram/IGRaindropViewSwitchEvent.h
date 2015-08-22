//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class IGRaindropNavState, NSString;

@interface IGRaindropViewSwitchEvent : TBaseStruct <TBase, NSCoding>
{
    int __thrift_fromViewType;
    int __thrift_toViewType;
    IGRaindropNavState *__thrift_fromNavState;
    NSString *__thrift_clickPoint;
    BOOL __thrift_fromViewType_set;
    BOOL __thrift_toViewType_set;
    BOOL __thrift_fromNavState_set;
    BOOL __thrift_clickPoint_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetClickPoint;
- (BOOL)clickPointIsSet;
@property(retain, nonatomic) NSString *clickPoint;
- (void)unsetFromNavState;
- (BOOL)fromNavStateIsSet;
@property(retain, nonatomic) IGRaindropNavState *fromNavState;
- (void)unsetToViewType;
- (BOOL)toViewTypeIsSet;
@property(nonatomic) int toViewType;
- (void)unsetFromViewType;
- (BOOL)fromViewTypeIsSet;
@property(nonatomic) int fromViewType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromViewType:(int)arg1 toViewType:(int)arg2 fromNavState:(id)arg3 clickPoint:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

