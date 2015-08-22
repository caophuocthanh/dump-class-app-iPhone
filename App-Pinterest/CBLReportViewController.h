//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLTextInputViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, UITableView;

@interface CBLReportViewController : CBLBaseViewController <CBLTextInputViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <CBLReportViewControllerDelegate> _delegate;
    int _selectedType;
    NSString *_otherReason;
    NSArray *_reasons;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *reasons; // @synthesize reasons=_reasons;
@property(copy, nonatomic) NSString *otherReason; // @synthesize otherReason=_otherReason;
@property(nonatomic) int selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) __weak id <CBLReportViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)styleForTableView;
- (void)reportWithReasonKey:(id)arg1;
- (void)reportAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)CBLTextInputViewControllerDidCancel;
- (void)CBLTextInputViewControllerDidSaveText:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
