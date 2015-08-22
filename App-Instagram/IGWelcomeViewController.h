//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGLogInViewDelegate.h"
#import "IGLogInViewOnePasswordDelegate.h"
#import "IGSignUpViewDelegate.h"

@class IGLogInView, IGRegistrationToggleView, IGSignUpView, IGWelcomeBackgroundView, NSString;

@interface IGWelcomeViewController : IGViewController <IGSignUpViewDelegate, IGLogInViewDelegate, IGLogInViewOnePasswordDelegate>
{
    BOOL _textFieldTextDidChange;
    BOOL _useNewLandingPage;
    id <IGWelcomeViewControllerDelegate> _delegate;
    IGSignUpView *_signUpView;
    IGLogInView *_logInView;
    IGRegistrationToggleView *_toggleView;
    IGWelcomeBackgroundView *_backgroundView;
    int _registrationMode;
}

@property(nonatomic) BOOL useNewLandingPage; // @synthesize useNewLandingPage=_useNewLandingPage;
@property(nonatomic) BOOL textFieldTextDidChange; // @synthesize textFieldTextDidChange=_textFieldTextDidChange;
@property(nonatomic) int registrationMode; // @synthesize registrationMode=_registrationMode;
@property(retain, nonatomic) IGWelcomeBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) IGRegistrationToggleView *toggleView; // @synthesize toggleView=_toggleView;
@property(retain, nonatomic) IGLogInView *logInView; // @synthesize logInView=_logInView;
@property(retain, nonatomic) IGSignUpView *signUpView; // @synthesize signUpView=_signUpView;
@property(nonatomic) __weak id <IGWelcomeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleLockedAccountForResponse:(id)arg1;
- (void)handleEmailTakenAutoLoginForResponse:(id)arg1;
- (void)handleEmailAlreadyTakenForResponse:(id)arg1;
- (void)handleLoggedInUserForResponse:(id)arg1;
- (void)submitFBSignupRequest;
- (void)onFacebookAuthCancelled;
- (void)onFacebookAuthSuccess;
- (void)authWithFacebookForRegistrationMode:(int)arg1;
- (void)logIn;
- (void)logInViewDidPromptForOnePassword:(id)arg1;
- (void)logInView:(id)arg1 willProceedWithKeyboard:(BOOL)arg2;
- (void)logInView:(id)arg1 didChangeTextField:(id)arg2;
- (void)logInView:(id)arg1 didBeginEditingTextField:(id)arg2;
- (void)logInView:(id)arg1 didDismissForHelpWithUsername:(id)arg2;
- (void)signUpView:(id)arg1 didChangeTextField:(id)arg2;
- (void)signUpView:(id)arg1 didBeginEditingTextField:(id)arg2;
- (void)signUpView:(id)arg1 willProceedWithEmail:(id)arg2 keyboard:(BOOL)arg3;
- (void)logInWithFacebookTapped;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)setFacebookButtonLoading:(BOOL)arg1;
- (void)setKeyboardStateForSignUp:(BOOL)arg1;
- (void)logTextFieldEvent:(id)arg1 forTextField:(id)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)attributedStringForString:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersNavigationBarHidden;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

