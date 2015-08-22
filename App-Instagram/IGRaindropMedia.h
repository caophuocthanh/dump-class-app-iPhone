//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropMedia : TBaseStruct <TBase, NSCoding>
{
    NSString *__thrift_mediaId;
    NSString *__thrift_ownerId;
    int __thrift_contentType;
    BOOL __thrift_mediaId_set;
    BOOL __thrift_ownerId_set;
    BOOL __thrift_contentType_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetContentType;
- (BOOL)contentTypeIsSet;
@property(nonatomic) int contentType;
- (void)unsetOwnerId;
- (BOOL)ownerIdIsSet;
@property(retain, nonatomic) NSString *ownerId;
- (void)unsetMediaId;
- (BOOL)mediaIdIsSet;
@property(retain, nonatomic) NSString *mediaId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(id)arg1 ownerId:(id)arg2 contentType:(int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
