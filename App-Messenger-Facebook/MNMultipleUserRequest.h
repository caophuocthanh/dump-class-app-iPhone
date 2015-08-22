//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNModelRequestConfiguration, MNMultipleUserRequestBehavior, NSSet;

@interface MNMultipleUserRequest : FBValueObject <NSCopying>
{
    BOOL _allowEmailUsers;
    NSSet *_requestedUserIds;
    MNModelRequestConfiguration *_configuration;
    MNMultipleUserRequestBehavior *_behavior;
}

@property(readonly, copy, nonatomic) MNMultipleUserRequestBehavior *behavior; // @synthesize behavior=_behavior;
@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) BOOL allowEmailUsers; // @synthesize allowEmailUsers=_allowEmailUsers;
@property(readonly, copy, nonatomic) NSSet *requestedUserIds; // @synthesize requestedUserIds=_requestedUserIds;
- (void).cxx_destruct;
- (id)initWithRequestedUserIds:(id)arg1 allowEmailUsers:(BOOL)arg2 configuration:(id)arg3 behavior:(id)arg4;

@end
