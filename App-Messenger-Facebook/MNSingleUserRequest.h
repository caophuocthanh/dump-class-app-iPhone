//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MNModelRequestConfiguration, MNSingleUserRequestFilter;

@interface MNSingleUserRequest : NSObject <NSCopying>
{
    MNSingleUserRequestFilter *_filter;
    MNModelRequestConfiguration *_configuration;
    CDUnknownBlockType _onSuccess;
    CDUnknownBlockType _onFailure;
    CDUnknownBlockType _onProgress;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType onProgress; // @synthesize onProgress=_onProgress;
@property(readonly, copy, nonatomic) CDUnknownBlockType onFailure; // @synthesize onFailure=_onFailure;
@property(readonly, copy, nonatomic) CDUnknownBlockType onSuccess; // @synthesize onSuccess=_onSuccess;
@property(readonly, copy, nonatomic) MNModelRequestConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, retain, nonatomic) MNSingleUserRequestFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFilter:(id)arg1 configuration:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)init;

@end
