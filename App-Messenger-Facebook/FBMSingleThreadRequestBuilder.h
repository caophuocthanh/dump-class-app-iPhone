//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMMessageCursorDescriptor, FBMThreadDescriptor, MNModelRequestConfiguration;

@interface FBMSingleThreadRequestBuilder : NSObject
{
    FBMThreadDescriptor *_descriptor;
    unsigned int _options;
    unsigned int _fulfillmentPolicy;
    int _numberOfMessagesRequested;
    FBMMessageCursorDescriptor *_oldestMessageCursorDescriptor;
    MNModelRequestConfiguration *_configuration;
    CDUnknownBlockType _fetchedBlock;
    CDUnknownBlockType _threadNotCreatedBlock;
    CDUnknownBlockType _failureBlock;
    CDUnknownBlockType _progressBlock;
}

+ (id)aSingleFBMThreadRequestBuilderWithThreadDescriptor:(id)arg1 fetchedBlock:(CDUnknownBlockType)arg2 threadNotCreatedBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (id)withOldestMessageCursorDescriptor:(id)arg1;
- (id)withNumberOfMessagesRequested:(int)arg1;
- (id)withFulfillmentPolicy:(unsigned int)arg1;
- (id)withOptions:(unsigned int)arg1;
- (id)withProgressBlock:(CDUnknownBlockType)arg1;
- (id)withConfiguration:(id)arg1;
- (id)build;
- (id)initWithThreadDescriptor:(id)arg1 fetchedBlock:(CDUnknownBlockType)arg2 threadNotCreatedBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

@end
