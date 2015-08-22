//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UIAlertViewDelegate.h"

@class FBExperimentManager, FBMemConfiguration, FBPreferenceChangeConfirmer, FBUserSession, NSArray, NSString, UIColor;

@interface FBExperimentGroupViewController : UITableViewController <UIAlertViewDelegate>
{
    FBMemConfiguration *_experiment;
    NSString *_frozenExperimentGroup;
    FBExperimentManager *_experimentManager;
    NSArray *_groups;
    FBUserSession *_session;
    NSArray *_cells;
    BOOL _hasOverride;
    UIColor *_overrideColor;
    UIColor *_activeColor;
    FBPreferenceChangeConfirmer *_confirmer;
    id <FBAlertViewCreating> _alertViewCreator;
}

- (void).cxx_destruct;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)analyticsModule;
- (BOOL)fb_showBackArrowButton;
- (BOOL)fb_showNavigationJewels;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_changeOverride:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_selectCurrentGroup;
- (id)_displayNameForGroup:(id)arg1;
- (BOOL)_sectionIndexIsKeySection:(int)arg1;
- (BOOL)_sectionIndexIsDescriptionSection:(int)arg1;
- (BOOL)_sectionIndexIsOverrideSection:(int)arg1;
- (int)_groupSectionIndex;
- (BOOL)fb_showAuxiliaryViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithExperiment:(id)arg1 experimentManager:(id)arg2 overrideConfirmer:(id)arg3 alertViewCreator:(id)arg4 session:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
