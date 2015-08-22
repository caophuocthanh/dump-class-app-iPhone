//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSDictionary, NSNumber, NSString;

@interface MNSyncProtocolDeltaRequestConfig : FBValueObject <NSCopying>
{
    NSString *_syncToken;
    NSString *_queueType;
    NSNumber *_apiVersion;
    NSDictionary *_queueParams;
    long long _sequenceId;
}

@property(readonly, copy, nonatomic) NSDictionary *queueParams; // @synthesize queueParams=_queueParams;
@property(readonly, copy, nonatomic) NSNumber *apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, copy, nonatomic) NSString *queueType; // @synthesize queueType=_queueType;
@property(readonly, nonatomic) long long sequenceId; // @synthesize sequenceId=_sequenceId;
@property(readonly, copy, nonatomic) NSString *syncToken; // @synthesize syncToken=_syncToken;
- (void).cxx_destruct;
- (id)initWithSyncToken:(id)arg1 sequenceId:(long long)arg2 queueType:(id)arg3 apiVersion:(id)arg4 queueParams:(id)arg5;

@end
