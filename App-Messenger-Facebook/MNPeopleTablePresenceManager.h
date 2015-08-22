//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNPeopleTableCellVisibilityObserver.h"
#import "MNPresenceUpdateListening.h"

@class MNPresenceSubscriptionService, NSMapTable, NSString, UIImage;

@interface MNPeopleTablePresenceManager : NSObject <MNPeopleTableCellVisibilityObserver, MNPresenceUpdateListening, FBClassProvidable>
{
    BOOL _started;
    MNPresenceSubscriptionService *_presenceSubscriptionService;
    id <MNPeopleTableCellVisibilityAnnouncer> _cellVisibilityAnnouncer;
    NSMapTable *_personIdToVisibleCellMap;
    UIImage *_presenceImage;
}

- (void).cxx_destruct;
- (void)_cleanUpObservation;
- (id)_cellForPersonId:(id)arg1;
- (void)didReceivePresenceUpdate:(id)arg1;
- (void)peopleCellDidDisappear:(id)arg1;
- (void)peopleCellWillAppear:(id)arg1;
- (void)stop;
- (void)startWithTableObservationProvider:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPresenceSubscriptionService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
