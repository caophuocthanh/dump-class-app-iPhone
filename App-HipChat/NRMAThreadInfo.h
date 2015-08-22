//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NRMAThreadInfo : NSObject
{
    NSString *_name;
    unsigned int _identity;
}

+ (void)clearThreadNames;
+ (void)addThreadName:(id)arg1 forKey:(id)arg2;
+ (id)fetchThreadNameForKey:(id)arg1;
+ (unsigned int)threadNamesCount;
+ (id)threadNames;
@property(readonly) unsigned int identity; // @synthesize identity=_identity;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)toString;
- (BOOL)isEqual:(id)arg1;
- (void)setThreadName:(id)arg1;
- (id)init;

@end
