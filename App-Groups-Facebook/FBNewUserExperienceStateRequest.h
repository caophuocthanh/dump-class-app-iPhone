//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNetworkerRequest.h"

@class NSArray;

@interface FBNewUserExperienceStateRequest : FBNetworkerRequest
{
    NSArray *_flows;
}

+ (BOOL)hasSeenFlow:(unsigned int)arg1 session:(id)arg2;
+ (id)userDefaultsKeyForFlow:(unsigned int)arg1;
+ (id)idForFlow:(unsigned int)arg1;
@property(copy, nonatomic) NSArray *flows; // @synthesize flows=_flows;
- (void).cxx_destruct;
- (id)networkRequest;
- (id)initWithFlows:(id)arg1 callbackPerformer:(id)arg2;

@end

