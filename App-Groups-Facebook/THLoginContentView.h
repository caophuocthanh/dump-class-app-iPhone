//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAuthenticatingContentView.h"
#import "UITextFieldDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextField;

@interface THLoginContentView : UIView <UITextFieldDelegate, FBAuthenticatingContentView>
{
    unsigned int _interfaceType;
    UITextField *_usernameField;
    UITextField *_passwordField;
    UIView *_usernameFieldSeparator;
    UIView *_passwordFieldSeparator;
    UIButton *_loginButton;
    UIActivityIndicatorView *_loginProgressIndicator;
    UIImageView *_loginApprovalLockImageView;
    UITextField *_loginApprovalCodeField;
    UILabel *_loginApprovalTitle;
    UILabel *_loginApprovalHint;
    UIButton *_loginApprovalConfirmationButton;
    UIActivityIndicatorView *_loginApprovalProgressIndicator;
    UIView *_loginApprovalFieldSeparator;
    UILabel *_ssoHeaderLabel;
    NSString *_ssoDisplayName;
    UIButton *_ssoConfirmationButton;
    UIActivityIndicatorView *_ssoLoginProgressIndicator;
    UIButton *_ssoLoginAsDifferentUserButton;
    BOOL canShowAccountList;
    id <FBAuthenticatingAction> delegate;
    unsigned int interfaceType;
}

+ (id)_ssoLoginAsDifferentUserButton;
+ (id)_continueButton;
+ (id)_continueButtonWithLoader:(id)arg1;
+ (id)_loginApprovalHint;
+ (id)_loginApprovalTitle;
+ (id)_loginApprovalCodeField;
+ (id)_passwordField;
+ (id)_usernameField;
+ (id)_textField;
@property(nonatomic) BOOL canShowAccountList; // @synthesize canShowAccountList;
@property(nonatomic) __weak id <FBAuthenticatingAction> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (float)_contentHorizontalMargin;
- (float)_loginApprovalInputTopMargin;
- (float)_loginApprovalTopMargin;
- (float)_usernameFieldTopMargin;
- (float)_separatorThickness;
- (BOOL)_isDeviceTall;
- (BOOL)_isDeviceMedium;
- (BOOL)_isDeviceShort;
- (void)_makeButtonGray:(id)arg1;
- (void)_makeButtonBlue:(id)arg1;
- (void)_alignProgressIndicator:(id)arg1 withinButton:(id)arg2;
- (void)_performPasswordSubmission;
- (void)_performApprovalCodeSubmission;
- (void)_ssoConfirmationButtonTapped:(id)arg1;
- (void)_loginApprovalConfirmationButtonTapped:(id)arg1;
- (void)_loginApprovalCodeFieldDidChange:(id)arg1;
- (void)_loginButtonTapped:(id)arg1;
- (void)_loginFieldDidChange:(id)arg1;
- (BOOL)_canPerformLoginApproval;
- (BOOL)_canPerformLogin;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)_addSSOSubviews;
- (void)_addLoginApprovalSubviews;
- (void)_addLoginSubviews;
- (void)_updateLoginScreenBasedOnUserState;
- (void)registerGoBackToAccountListTarget:(id)arg1 action:(SEL)arg2;
- (void)registerGoBackToAuthenticationTarget:(id)arg1 action:(SEL)arg2;
- (void)setRegisteredNewUserLoginUsername:(id)arg1;
- (void)registerDidSubmitSSOApprovalTarget:(id)arg1 action:(SEL)arg2;
- (void)registerIgnoreSSOTarget:(id)arg1 action:(SEL)arg2;
- (void)updateViewStateForErrorReason:(unsigned int)arg1;
- (void)_resetViewToOriginalCondition:(unsigned int)arg1;
- (void)setDefaultUsername:(id)arg1;
- (void)setSsoDisplayName:(id)arg1;
@property(nonatomic) unsigned int interfaceType; // @synthesize interfaceType;
- (id)usernameText;
- (unsigned int)getDeviceBasedLoginAttempts;
- (void)setPasswordConfirmErrorMessage;
- (void)setPasswordErrorAndClearUserInput;
- (void)setPinErrorAndClearUserInput;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

