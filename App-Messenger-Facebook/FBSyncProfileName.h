//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBSyncProfileName : NSObject
{
    NSString *_locale;
    NSString *_name;
    NSString *_first;
    NSString *_last;
    NSString *_nameAlternate;
    NSString *_firstAlternate;
    NSString *_lastAlternate;
}

@property(copy, nonatomic) NSString *lastAlternate; // @synthesize lastAlternate=_lastAlternate;
@property(copy, nonatomic) NSString *firstAlternate; // @synthesize firstAlternate=_firstAlternate;
@property(copy, nonatomic) NSString *nameAlternate; // @synthesize nameAlternate=_nameAlternate;
@property(copy, nonatomic) NSString *last; // @synthesize last=_last;
@property(copy, nonatomic) NSString *first; // @synthesize first=_first;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;

@end
