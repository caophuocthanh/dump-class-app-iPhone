//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString, PBMethodOptions;

@interface PBMethodDescriptorProto : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) BOOL clientStreaming; // @dynamic clientStreaming;
@property(nonatomic) BOOL hasClientStreaming; // @dynamic hasClientStreaming;
@property(nonatomic) BOOL hasInputType; // @dynamic hasInputType;
@property(nonatomic) BOOL hasName; // @dynamic hasName;
@property(nonatomic) BOOL hasOptions; // @dynamic hasOptions;
@property(nonatomic) BOOL hasOutputType; // @dynamic hasOutputType;
@property(nonatomic) BOOL hasServerStreaming; // @dynamic hasServerStreaming;
@property(retain, nonatomic) NSString *inputType; // @dynamic inputType;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) PBMethodOptions *options; // @dynamic options;
@property(retain, nonatomic) NSString *outputType; // @dynamic outputType;
@property(nonatomic) BOOL serverStreaming; // @dynamic serverStreaming;

@end

