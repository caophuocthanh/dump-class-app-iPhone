//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGRegistrationSignUpViewBase.h"

#import "IGTextFieldDelegate.h"

@class IGTextField, NSString, UIButton, UILabel, UIView;

@interface IGRegistrationSignUpView : IGRegistrationSignUpViewBase <IGTextFieldDelegate>
{
    BOOL _hasSetConstraints;
    IGTextField *_emailField;
    UILabel *_separatorLabel;
    UIButton *_nextButton;
    UIView *_separatorLine;
}

@property(nonatomic) BOOL hasSetConstraints; // @synthesize hasSetConstraints=_hasSetConstraints;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UIButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UILabel *separatorLabel; // @synthesize separatorLabel=_separatorLabel;
@property(retain, nonatomic) IGTextField *emailField; // @synthesize emailField=_emailField;
- (void).cxx_destruct;
- (void)proceedWithSignUpWithKeyboard:(BOOL)arg1;
- (void)setConstraintsForFrameOfView:(id)arg1 toMatchFrameOfView:(id)arg2;
- (void)setConstraintsForCenterOfView:(id)arg1 toMatchCenterOfView:(id)arg2;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)nextButtonTapped;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

