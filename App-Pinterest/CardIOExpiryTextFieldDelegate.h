//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardIOConfigurableTextFieldDelegate.h"

@class CardIOCreditCardExpiryFormatter;

@interface CardIOExpiryTextFieldDelegate : CardIOConfigurableTextFieldDelegate
{
    BOOL _backspacing;
    CardIOCreditCardExpiryFormatter *_formatter;
}

@property(nonatomic) BOOL backspacing; // @synthesize backspacing=_backspacing;
@property(retain, nonatomic) CardIOCreditCardExpiryFormatter *formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)cleanupTextField:(id)arg1;
- (id)init;

@end
