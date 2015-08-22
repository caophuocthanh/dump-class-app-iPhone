//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"

@class MNPushInstructionsView, NSString;

@interface MNPushInstructionsViewController : UIViewController <FBClassProvidable>
{
    MNPushInstructionsView *_instructionsView;
    id <MNPushInstructionsViewControllerDelegate> _delegate;
}

@property(nonatomic) id <MNPushInstructionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (int)preferredStatusBarStyle;
- (void)_userDismissedInstructions;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
