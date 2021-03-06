//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PBMutableArray, PrincipalProto;

@interface DataAccessTokenLoggingParams : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL hasLogUseToGin; // @dynamic hasLogUseToGin;
@property(nonatomic) BOOL hasOriginalTokenIdentifier; // @dynamic hasOriginalTokenIdentifier;
@property(nonatomic) BOOL hasReasonArray; // @dynamic hasReasonArray;
@property(nonatomic) BOOL hasRequester; // @dynamic hasRequester;
@property(nonatomic) BOOL hasRequesterCredentialArray; // @dynamic hasRequesterCredentialArray;
@property(nonatomic) BOOL hasSensitivityLevel; // @dynamic hasSensitivityLevel;
@property(nonatomic) BOOL hasUsage; // @dynamic hasUsage;
@property(nonatomic) BOOL logUseToGin; // @dynamic logUseToGin;
@property(retain, nonatomic) NSString *originalTokenIdentifier; // @dynamic originalTokenIdentifier;
@property(retain, nonatomic) PBMutableArray *reasonArray; // @dynamic reasonArray;
@property(retain, nonatomic) PrincipalProto *requester; // @dynamic requester;
@property(retain, nonatomic) PBMutableArray *requesterCredentialArray; // @dynamic requesterCredentialArray;
@property(nonatomic) unsigned int sensitivityLevel; // @dynamic sensitivityLevel;
@property(nonatomic) int usage; // @dynamic usage;

@end

