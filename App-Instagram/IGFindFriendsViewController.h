//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGContactsFriendsViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString;

@interface IGFindFriendsViewController : IGGroupedTableViewController <IGContactsFriendsViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    NSMutableArray *_tableSections;
    BOOL _disconnectingAddressBookContact;
}

+ (BOOL)shouldShowVK;
@property(nonatomic, getter=isDisconnectingAddressBookContact) BOOL disconnectingAddressBookContact; // @synthesize disconnectingAddressBookContact=_disconnectingAddressBookContact;
- (void).cxx_destruct;
- (void)doSuggestedUsers;
- (void)doVkontakteFind;
- (void)doFacebookFind;
- (void)doContactsFind;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)contactsViewController:(id)arg1 didDisconnectContactsWithSuccess:(BOOL)arg2;
- (void)contactsViewControllerWillDisconnectContacts:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAppBecameActive;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

