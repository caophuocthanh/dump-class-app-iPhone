//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class IGRaindropRankInfo, NSString;

@interface IGRaindropNavEvent : TBaseStruct <TBase, NSCoding>
{
    int __thrift_viewType;
    IGRaindropRankInfo *__thrift_rankInfo;
    BOOL __thrift_viewType_set;
    BOOL __thrift_rankInfo_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetRankInfo;
- (BOOL)rankInfoIsSet;
@property(retain, nonatomic) IGRaindropRankInfo *rankInfo;
- (void)unsetViewType;
- (BOOL)viewTypeIsSet;
@property(nonatomic) int viewType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewType:(int)arg1 rankInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
