//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusCommonNetProducerRequest.h"

@interface ComGoogleCumulusSyncClientCommandProducerRequest : ComGoogleCumulusCommonNetProducerRequest
{
    id <JavaUtilMap> requestedRefs_;
    id <JCGCuCallback> completionCallback_;
}

- (void)dealloc;
- (id)getCompletionCallback;
- (id)getPendingLogRequests;
- (id)initWithComGoogleCumulusCommonNetProto_Request_Builder:(id)arg1 withJavaUtilMap:(id)arg2 withJCGCuCallback:(id)arg3;

@end

