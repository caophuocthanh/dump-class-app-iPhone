//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper;

@interface ComGoogleCumulusSyncClientSubscriptionsManager : NSObject
{
    id <JavaUtilMap> clientProducers_;
    id <ComGoogleCommonBaseReceiver> workerEventBus_;
    id <ComGoogleCumulusSyncClientProxiedSubscriptionRegistry> proxiedRegistry_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
}

- (void)dealloc;
- (id)createClientReceiverWithNSString:(id)arg1;
- (id)createClientProducerWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientProxiedSubscriptionRegistry:(id)arg1 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg2 withComGoogleCommonBaseReceiver:(id)arg3;

@end

