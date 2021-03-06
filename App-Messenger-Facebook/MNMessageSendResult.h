//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSError, NSString;

@interface MNMessageSendResult : NSObject <NSCopying>
{
    unsigned int _subtype;
    NSString *_success_offlineThreadingId;
    NSString *_success_messageId;
    NSString *_failure_offlineThreadingId;
    NSError *_failure_error;
}

+ (id)successWithOfflineThreadingId:(id)arg1 messageId:(id)arg2;
+ (id)failureWithOfflineThreadingId:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (void)matchSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

