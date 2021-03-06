//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLReportViewController.h"

#import "CBLPresentedViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLPin, NSString;

@interface CBLReportPinViewController : CBLReportViewController <CBLPresentedViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    CBLPin *_pin;
    int _sourceViewType;
    int _sourceViewParameter;
}

@property(nonatomic) int sourceViewParameter; // @synthesize sourceViewParameter=_sourceViewParameter;
@property(nonatomic) int sourceViewType; // @synthesize sourceViewType=_sourceViewType;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)presentedViewControllerShouldBeDismissed:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)reportWithReasonKey:(id)arg1;
- (void)copyrightAction:(id)arg1;
- (id)createFooterView;
- (id)createHeaderView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

