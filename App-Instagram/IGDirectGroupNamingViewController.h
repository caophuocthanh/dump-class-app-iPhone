//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class IGTextField, NSString, UIButton;

@interface IGDirectGroupNamingViewController : UIViewController <UITextFieldDelegate>
{
    id <IGDirectGroupNamingViewControllerDelegate> _delegate;
    IGTextField *_nameTextField;
    UIButton *_closeButton;
}

@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) IGTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
@property(nonatomic) __weak id <IGDirectGroupNamingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)closeButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

