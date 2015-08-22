//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBMobileConfigFactory, NSString, UITableView;

@interface FBMMobileConfigDebugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    FBMobileConfigFactory *_factory;
    struct shared_ptr<mobileconfig::FBMobileConfigStorageManager> _storageManager;
    NSString *_userFBID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)configureValueDisplayCell:(id)arg1 atPath:(id)arg2;
- (id)configureSettingsCell:(id)arg1 atPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)performShadowStressTest;
- (void)dealloc;
- (void)loadView;
- (void)triggerMobileConfigRefresh;
- (id)initWithMobileConfigFactory:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
