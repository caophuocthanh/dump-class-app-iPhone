//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSString;

@interface CBLExperiment : CBLModelObject
{
    BOOL _persisted;
    NSString *_name;
    NSString *_group;
}

+ (id)propertyAliases;
@property(nonatomic, getter=isPersisted) BOOL persisted; // @synthesize persisted=_persisted;
@property(copy, nonatomic) NSString *group; // @synthesize group=_group;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)asDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
