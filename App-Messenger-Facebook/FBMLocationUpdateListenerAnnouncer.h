//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMLocationUpdateListener.h"

@class FBAnnouncerBaseImplementation, NSString;

@interface FBMLocationUpdateListenerAnnouncer : NSObject <FBMLocationUpdateListener>
{
    FBAnnouncerBaseImplementation *_baseImplementation;
}

- (void).cxx_destruct;
- (void)locationUpdater:(id)arg1 didReceiveAuthorizationStatusChange:(int)arg2;
- (void)locationUpdater:(id)arg1 didFailToReceiveLocationUpdate:(id)arg2;
- (void)locationUpdater:(id)arg1 didReceiveLastKnownGoodLocation:(id)arg2;
- (void)locationUpdater:(id)arg1 didReceiveLatestInaccurateLocationUpdate:(id)arg2;
- (void)locationUpdater:(id)arg1 didReceiveLocationUpdate:(id)arg2;
- (void)enumerateSubscriptionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeSubscription:(id)arg1;
- (void)addSubscription:(id)arg1;
- (id)initWithFirstSubscriptionAdded:(CDUnknownBlockType)arg1 lastSubscriptionRemoved:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

