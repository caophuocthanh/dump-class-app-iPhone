//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNSingleUserHandlerRequest, NSString;

@interface MNSingleUserRemotePopulationJobInfo : NSObject
{
    MNSingleUserHandlerRequest *_request;
    NSString *_loadingIndicatorKey;
}

@property(copy, nonatomic) NSString *loadingIndicatorKey; // @synthesize loadingIndicatorKey=_loadingIndicatorKey;
@property(copy, nonatomic) MNSingleUserHandlerRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

