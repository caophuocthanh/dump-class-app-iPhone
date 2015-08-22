//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGNavigationController.h"

#import "IGNavigationControllerDelegate.h"
#import "IGRegistrationFindUsersViewControllerDelegate.h"
#import "IGRegistrationFlowViewControllerDelegate.h"
#import "IGUsernameViewControllerDelegate.h"
#import "IGWelcomeViewControllerDelegate.h"

@class IGExplorePeopleViewController, NSDictionary, NSString, UIBarButtonItem;

@interface IGRegistrationNavigationController : IGNavigationController <IGUsernameViewControllerDelegate, IGNavigationControllerDelegate, IGRegistrationFindUsersViewControllerDelegate, IGWelcomeViewControllerDelegate, IGRegistrationFlowViewControllerDelegate>
{
    int _currentStep;
    BOOL _registerWithFB;
    BOOL _skipFindFriends;
    BOOL _enterFromAutoLogin;
    NSDictionary *_facebookMeInfo;
    NSString *_email;
    int _findFriendsViewMode;
    int _selectedFindFriendsViewModes;
    IGExplorePeopleViewController *_discoverMorePeopleVC;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) IGExplorePeopleViewController *discoverMorePeopleVC; // @synthesize discoverMorePeopleVC=_discoverMorePeopleVC;
@property(nonatomic) int selectedFindFriendsViewModes; // @synthesize selectedFindFriendsViewModes=_selectedFindFriendsViewModes;
@property(nonatomic) int findFriendsViewMode; // @synthesize findFriendsViewMode=_findFriendsViewMode;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSDictionary *facebookMeInfo; // @synthesize facebookMeInfo=_facebookMeInfo;
@property(nonatomic) BOOL registerWithFB; // @synthesize registerWithFB=_registerWithFB;
- (void).cxx_destruct;
- (void)registrationFlowController:(id)arg1 shouldRegisterWithFacebookInformation:(id)arg2;
- (void)registrationFlowController:(id)arg1 willResetPasswordWithViewController:(id)arg2;
- (void)registrationFlowController:(id)arg1 didFinishRegistrationWithLoggedInDict:(id)arg2;
- (void)registrationFindUsersViewControllerDidSkip:(id)arg1;
- (void)registrationFindUsersViewControllerDidContinue:(id)arg1;
- (void)registrationFindUsersViewController:(id)arg1 didSelectSource:(int)arg2;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(BOOL)arg3;
- (void)onFacebookAuthSuccess;
- (void)welcomeViewController:(id)arg1 willProceedWithEmail:(id)arg2;
- (void)welcomeViewControllerDidTapLogIn:(id)arg1;
- (void)welcomeViewController:(id)arg1 proceedRegisteringWithFBInfo:(id)arg2;
- (void)welcomeViewController:(id)arg1 userEmailTakenAutoLoginWithLoggedInDict:(id)arg2;
- (void)welcomeViewController:(id)arg1 requestsLoginToUsername:(id)arg2;
- (void)usernameViewController:(id)arg1 requestsLoginToUsername:(id)arg2 password:(id)arg3;
- (void)usernameViewControllerDidSwitchToFBFlow:(id)arg1;
- (void)usernameViewControllerDidSwitchToEmailFlow:(id)arg1;
- (void)showNewActivationFlow;
- (BOOL)shouldShowFindMorePeople;
- (BOOL)shouldShowClusterBrowsing;
- (void)continueRegistrationWithoutFB;
- (void)continueRegistrationWithFB;
- (void)showFindFriendsControllerWithHiddenBackButton:(BOOL)arg1 autoload:(int)arg2 showProfilePicture:(BOOL)arg3;
- (void)continueRegistration;
- (void)startRegistrationWithFacebookInfo:(id)arg1;
- (id)newClusterBrowsingVC;
- (void)onDoneButtonTapped;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushSignInViewController;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

