//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBLocaleMap, MNSettingsView, MNUserSetUpStatePersister, NSArray, NSString;

@interface MNMiscellaneousSettingsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    FBLocaleMap *_localeMap;
    MNUserSetUpStatePersister *_setUpStatePersister;
    MNSettingsView *_settingsView;
    NSArray *_settingsSections;
}

- (void).cxx_destruct;
- (void)_initializeSettingsSections;
- (void)_openURL:(id)arg1;
- (void)_thirdPartyNoticesSettingTapped;
- (void)_termsOfServiceTapped;
- (void)_privacyShortcutsTapped;
- (void)_dataPolicyTapped;
- (void)_logSelectAppInfoWithLabel:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithLocaleMap:(id)arg1 userSetUpStatePersister:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

