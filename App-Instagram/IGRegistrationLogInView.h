//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGTextFieldDelegate.h"

@class IGFacebookButton, IGPasswordField, IGTextField, NSString;

@interface IGRegistrationLogInView : UIView <IGTextFieldDelegate>
{
    BOOL _submitting;
    BOOL _fromReg;
    id <IGRegistrationLogInViewDelegate> _delegate;
    IGTextField *_usernameField;
    IGPasswordField *_passwordField;
    IGFacebookButton *_facebookButton;
    UIView *_facebookButtonSeparator;
    float _fieldHeight;
}

@property(nonatomic) float fieldHeight; // @synthesize fieldHeight=_fieldHeight;
@property(retain, nonatomic) UIView *facebookButtonSeparator; // @synthesize facebookButtonSeparator=_facebookButtonSeparator;
@property(nonatomic) BOOL fromReg; // @synthesize fromReg=_fromReg;
@property(nonatomic) BOOL submitting; // @synthesize submitting=_submitting;
@property(retain, nonatomic) IGFacebookButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) IGPasswordField *passwordField; // @synthesize passwordField=_passwordField;
@property(retain, nonatomic) IGTextField *usernameField; // @synthesize usernameField=_usernameField;
@property(nonatomic) __weak id <IGRegistrationLogInViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)didChangeTextFieldCommon:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)validate;
- (void)showMissingError:(id)arg1;
- (BOOL)clockIsIncorrect;
- (void)setLoading:(BOOL)arg1;
- (void)forgotTapped;
- (void)logInButtonTapped;
@property(copy, nonatomic) NSString *username;
- (void)clearFields;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1 credentialsFormHeight:(float)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

