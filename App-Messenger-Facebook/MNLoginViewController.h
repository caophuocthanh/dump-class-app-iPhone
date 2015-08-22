//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "FBMUserFetcherDelegate.h"
#import "MNLoginViewDataSource.h"
#import "MNLoginViewDelegate.h"
#import "MNUserLoginDelegate.h"

@class FBLocaleMap, FBMUserFetcher, FBUserSession, MNLoginErrorHandler, MNLoginView, MNRegistrationExistingAccount, MNSSOController, NSString, ZRTokenUpdater;

@interface MNLoginViewController : UIViewController <MNLoginViewDataSource, MNLoginViewDelegate, MNUserLoginDelegate, FBMUserFetcherDelegate, FBClassProvidable>
{
    BOOL _forceEmailPasswordLogin;
    BOOL _loginApprovalRequired;
    id <MNUserLogin> _userLogin;
    FBMUserFetcher *_userFetcher;
    MNLoginView *_loginView;
    MNLoginErrorHandler *_loginErrorHandler;
    MNSSOController *_ssoController;
    BOOL _ssoLoginAllowed;
    MNRegistrationExistingAccount *_existingAccount;
    id <MNLoginViewControllerDelegate> _delegate;
    FBUserSession *_session;
    ZRTokenUpdater *_zeroTokenUpdater;
    id <FBProvider> _userFetcherProvider;
    FBUserSession *_userSession;
    id <FBProvider> _userLoginProvider;
    FBLocaleMap *_localeMap;
    NSString *_appSecret;
}

+ (id)_analyticsStringForLoginViewType:(unsigned int)arg1;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) FBLocaleMap *localeMap; // @synthesize localeMap=_localeMap;
@property(retain, nonatomic) id <FBProvider> userLoginProvider; // @synthesize userLoginProvider=_userLoginProvider;
@property(retain, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <FBProvider> userFetcherProvider; // @synthesize userFetcherProvider=_userFetcherProvider;
@property(retain, nonatomic) ZRTokenUpdater *zeroTokenUpdater; // @synthesize zeroTokenUpdater=_zeroTokenUpdater;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <MNLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MNRegistrationExistingAccount *existingAccount; // @synthesize existingAccount=_existingAccount;
@property(nonatomic) BOOL ssoLoginAllowed; // @synthesize ssoLoginAllowed=_ssoLoginAllowed;
- (void).cxx_destruct;
- (void)_showLoginErrorAlert:(id)arg1;
- (void)_showLoginApprovalAlert;
- (void)_enableUsernameAndPasswordEditingIfNeccessary;
- (id)_password;
- (id)_username;
- (void)_abortLogin;
- (unsigned int)_currentLoginViewType;
- (void)forceEmailPasswordLogin;
@property(nonatomic) BOOL showsRegisterButtonActivityIndicator;
@property(nonatomic) BOOL showsMainActivityIndicator;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)loginViewDidTapForgotPassword:(id)arg1;
- (void)loginViewDidTapSwitchUserButton:(id)arg1;
- (void)loginViewDidTapRegisterButton:(id)arg1;
- (void)loginViewDidTapLoginWithUsernameAndPasswordButton:(id)arg1;
- (void)loginViewDidTapLoginWithKeychainSSOButton:(id)arg1;
- (id)loginViewUserDisplayNameForKeychainSSOLogin:(id)arg1;
- (id)loginViewUserIdForKeychainSSOLogin:(id)arg1;
- (void)_loginComplete;
- (void)_showLoginFailedDueToZeroTokenAlert;
- (void)zeroTokenRefreshFailed:(id)arg1;
- (void)zeroTokenRefreshCompleted:(id)arg1;
- (void)_stopZeroRatingObservers;
- (void)_startZeroRatingObservers;
- (void)fetcher:(id)arg1 couldNotFetchUser:(id)arg2;
- (void)fetcher:(id)arg1 didFetchUser:(id)arg2;
- (void)userLogin:(id)arg1 couldNotLoginUser:(id)arg2 usingSSO:(BOOL)arg3;
- (void)userLogin:(id)arg1 didFinishWithCredentials:(id)arg2 httpCookies:(id)arg3 rawResponse:(id)arg4 usingSSO:(BOOL)arg5;
- (void)updateLayout:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)handleCredentials:(id)arg1 httpCookies:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)fb_shouldBeginSwipeBackAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSession:(id)arg1 zeroTokenUpdater:(id)arg2 userFetcherProvider:(id)arg3 userSession:(id)arg4 localeMap:(id)arg5 appSecret:(id)arg6 userLoginProvider:(id)arg7 ssoController:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
