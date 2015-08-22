//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface IGKeyboardManager : NSObject
{
    float _keyboardHeight;
    float _keyboardAnimationDuration;
    int _keyboardAnimationCurve;
}

+ (id)sharedKeyboardManager;
@property(nonatomic) int keyboardAnimationCurve; // @synthesize keyboardAnimationCurve=_keyboardAnimationCurve;
@property(nonatomic) float keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(nonatomic) float keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
- (void)keyboardWillShow:(id)arg1;
- (void)warmKeyboard;
@property(readonly, nonatomic) UIView *keyboard;
- (id)init;
- (void)dealloc;

@end

