//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNavigationController.h"

#import "IGRegistrationFindUsersViewControllerDelegate.h"
#import "IGRegistrationFlowViewControllerDelegate.h"

@class IGExplorePeopleViewController, NSString, UIBarButtonItem;

@interface IGRegistrationFlowNavigationController : IGNavigationController <IGRegistrationFlowViewControllerDelegate, IGRegistrationFindUsersViewControllerDelegate>
{
    BOOL _skipFindFriends;
    BOOL _registerWithFBInfo;
    BOOL _autoLoggedIn;
    int _currentStep;
    IGExplorePeopleViewController *_discoverMorePeopleVC;
    int _findFriendsViewMode;
    int _selectedFindFriendsViewModes;
    UIBarButtonItem *_doneButton;
}

@property(nonatomic) BOOL autoLoggedIn; // @synthesize autoLoggedIn=_autoLoggedIn;
@property(nonatomic) BOOL registerWithFBInfo; // @synthesize registerWithFBInfo=_registerWithFBInfo;
@property(nonatomic) BOOL skipFindFriends; // @synthesize skipFindFriends=_skipFindFriends;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) int selectedFindFriendsViewModes; // @synthesize selectedFindFriendsViewModes=_selectedFindFriendsViewModes;
@property(nonatomic) int findFriendsViewMode; // @synthesize findFriendsViewMode=_findFriendsViewMode;
@property(retain, nonatomic) IGExplorePeopleViewController *discoverMorePeopleVC; // @synthesize discoverMorePeopleVC=_discoverMorePeopleVC;
@property(nonatomic) int currentStep; // @synthesize currentStep=_currentStep;
- (void).cxx_destruct;
- (void)registrationFindUsersViewControllerDidSkip:(id)arg1;
- (void)registrationFindUsersViewControllerDidContinue:(id)arg1;
- (void)registrationFindUsersViewController:(id)arg1 didSelectSource:(int)arg2;
- (void)registrationFlowController:(id)arg1 willResetPasswordWithViewController:(id)arg2;
- (void)registrationFlowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2;
- (void)registrationFlowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2;
- (BOOL)shouldShowFindMorePeople;
- (BOOL)shouldShowClusterBrowsing;
- (void)showFindFriendsControllerWithHiddenBackButton:(BOOL)arg1 autoload:(int)arg2 showProfilePicture:(BOOL)arg3;
- (void)continueRegistration;
- (void)onDoneButtonTapped;
- (id)newClusterBrowsingVC;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
