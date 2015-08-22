//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNServiceControllable.h"

@class MNMessagingRegionFetchPolicy, MNMessagingRegionFetcher, MNMessagingRegionFetcherServiceListeningAnnouncer, NSString;

@interface MNMessagingRegionFetcherService : NSObject <MNServiceControllable>
{
    MNMessagingRegionFetcher *_messagingRegionFetcher;
    MNMessagingRegionFetchPolicy *_messagingRegionFetchPolicy;
    MNMessagingRegionFetcherServiceListeningAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_handleMessagingRegionFetchFailureWithError:(id)arg1;
- (void)_handleSuccessfulFetchOfMessagingRegionInfo:(id)arg1;
- (void)_fetchMessagingRegion;
- (void)_fetchMessagingRegionIfPossible;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithMessagingRegionFetcher:(id)arg1 messagingFetchRegionFetchPolicy:(id)arg2 announcer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
