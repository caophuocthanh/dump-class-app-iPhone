//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "FBTableViewSectionDataSource.h"
#import "MNContactSyncCellControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBUserSession, MNContactSyncCellController, MNInvitePeopleCellController, NSString;

@interface MNFindFriendsTableViewController : NSObject <MNContactSyncCellControllerDelegate, FBClassProvidable, UITableViewDataSource, UITableViewDelegate, FBTableViewSectionDataSource>
{
    MNInvitePeopleCellController *_invitePeopleCellController;
    MNContactSyncCellController *_contactSyncCellController;
    FBUserSession *_session;
    BOOL _enabled;
    id <FBTableViewMutating> _tableViewMutator;
}

@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
- (void).cxx_destruct;
- (BOOL)_allSectionsDisabled;
- (void)_reloadData;
- (int)_numberOfSections;
- (int)_numberOfRowsInSection:(int)arg1;
- (void)contactSyncCellControllerCellNeedsUpdate:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_syncContactsCellForTableView:(id)arg1;
- (id)_invitePeopleCellForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithContactSyncCellController:(id)arg1 findFriendsModelController:(id)arg2 session:(id)arg3;

// Remaining properties
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

