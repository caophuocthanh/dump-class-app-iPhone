//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MNMessageSendAutoRetryConfiguration, MNMessageSendLegacyConfiguration;

@interface MNMessageSendConfiguration : NSObject <NSCopying>
{
    unsigned int _subtype;
    MNMessageSendLegacyConfiguration *_legacy;
    MNMessageSendAutoRetryConfiguration *_autoRetry;
}

+ (id)legacy:(id)arg1;
+ (id)autoRetry:(id)arg1;
- (void).cxx_destruct;
- (void)matchLegacy:(CDUnknownBlockType)arg1 autoRetry:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

