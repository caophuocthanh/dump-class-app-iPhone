//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "UIKeyInput.h"

@class NSString, UIView;

@interface GBTInputButton : UIButton <UIKeyInput>
{
    UIView *inputView;
    UIView *inputAccessoryView;
}

@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (BOOL)hasText;
- (BOOL)resignFirstResponder;
- (BOOL)canBecomeFirstResponder;

// Remaining properties
@property(nonatomic) int autocapitalizationType;
@property(nonatomic) int autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enablesReturnKeyAutomatically;
@property(readonly) unsigned int hash;
@property(nonatomic) int keyboardAppearance;
@property(nonatomic) int keyboardType;
@property(nonatomic) int returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property(nonatomic) int spellCheckingType;
@property(readonly) Class superclass;

@end

