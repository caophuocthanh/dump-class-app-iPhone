//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessagingRegionFetcherServiceListening.h"

@class FBExperimentManager, MNUserSettings, NSString;

@interface MNMessagingRegionFetchPolicy : NSObject <MNMessagingRegionFetcherServiceListening>
{
    MNUserSettings *_userSettings;
    FBExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (void)_markMessagingRegionFetchedNow;
- (void)messagingRegionFetcherService:(id)arg1 didFailToFetchMessagingRegionInfoWithError:(id)arg2;
- (void)messagingRegionFetcherService:(id)arg1 didFetchMessagingRegionInfo:(id)arg2;
- (BOOL)shouldFetchMessagingRegion;
- (id)initWithUserSettings:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
