//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBTweakCategory, NSArray, NSString, UITableView;

@interface _FBTweakCollectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    NSArray *_sortedCollections;
    FBTweakCategory *_tweakCategory;
    id <_FBTweakCollectionViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <_FBTweakCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) FBTweakCategory *tweakCategory; // @synthesize tweakCategory=_tweakCategory;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)_keyboardFrameChanged:(id)arg1;
- (void)_done;
- (void)_reloadData;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithTweakCategory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

