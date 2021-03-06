//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface CardIOConfigurableTextFieldDelegate : NSObject <UITextFieldDelegate>
{
    BOOL numbersOnly;
    int maxLength;
}

+ (void)vibrate;
+ (void)getSelectionInTextField:(id)arg1 withSelectedTextRange:(id)arg2 forStart:(int *)arg3 forEnd:(int *)arg4;
+ (id)positionInTextField:(id)arg1 after:(int)arg2;
+ (int)nonDigitsInTextField:(id)arg1 beforeOffset:(int)arg2;
+ (BOOL)containsNumbersOnly:(id)arg1;
+ (int)lengthOfString:(id)arg1 afterChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property(nonatomic) int maxLength; // @synthesize maxLength;
@property(nonatomic) BOOL numbersOnly; // @synthesize numbersOnly;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

