//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBApplicationDefinition : FBValueObject <NSCopying>
{
    NSString *_FBID;
    NSString *_secret;
}

@property(readonly, copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(readonly, copy, nonatomic) NSString *FBID; // @synthesize FBID=_FBID;
- (void).cxx_destruct;
- (id)initWithFBID:(id)arg1 secret:(id)arg2;

@end

