//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@interface UIScrollView (TPKeyboardAvoidingAdditions)
- (void)TPKeyboardAvoiding_initializeView:(id)arg1;
- (float)TPKeyboardAvoiding_idealOffsetForView:(id)arg1 withViewingAreaHeight:(float)arg2;
- (struct UIEdgeInsets)TPKeyboardAvoiding_contentInsetForKeyboard;
- (struct CGSize)TPKeyboardAvoiding_calculatedContentSizeFromSubviewFrames;
- (void)TPKeyboardAvoiding_assignTextDelegateForViewsBeneathView:(id)arg1;
- (void)TPKeyboardAvoiding_findTextFieldAfterTextField:(id)arg1 beneathView:(id)arg2 minY:(float *)arg3 foundView:(id *)arg4;
- (id)TPKeyboardAvoiding_findFirstResponderBeneathView:(id)arg1;
- (void)TPKeyboardAvoiding_scrollToActiveTextField;
- (BOOL)TPKeyboardAvoiding_focusNextTextField;
- (void)TPKeyboardAvoiding_updateFromContentSizeChange;
- (void)TPKeyboardAvoiding_updateContentInset;
- (void)TPKeyboardAvoiding_keyboardWillHide:(id)arg1;
- (void)TPKeyboardAvoiding_keyboardWillShow:(id)arg1;
- (id)keyboardAvoidingState;
@end

