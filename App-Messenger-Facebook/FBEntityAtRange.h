//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@interface FBEntityAtRange : NSObject
{
    NSNumber *_offset;
    NSNumber *_length;
    id _entity;
}

+ (id)entityName;
+ (id)graphQLTypeName;
@property(retain, nonatomic) id entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSNumber *length; // @synthesize length=_length;
@property(retain, nonatomic) NSNumber *offset; // @synthesize offset=_offset;
- (void)dealloc;

@end

