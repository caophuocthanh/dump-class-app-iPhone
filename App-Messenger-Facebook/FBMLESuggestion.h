//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBMLESuggestion : FBValueObject <NSCopying>
{
    unsigned int _type;
    NSString *_title;
    NSString *_iconId;
    NSString *_iconUri;
    NSString *_typeIdentifier;
    NSString *_schoolType;
}

@property(readonly, copy, nonatomic) NSString *schoolType; // @synthesize schoolType=_schoolType;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(readonly, copy, nonatomic) NSString *iconUri; // @synthesize iconUri=_iconUri;
@property(readonly, copy, nonatomic) NSString *iconId; // @synthesize iconId=_iconId;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(unsigned int)arg1 title:(id)arg2 iconId:(id)arg3 iconUri:(id)arg4 typeIdentifier:(id)arg5 schoolType:(id)arg6;

@end
