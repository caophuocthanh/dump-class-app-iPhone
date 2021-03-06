//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class NSMutableArray, NSNumber, RCTEventDispatcher, UIColor;

@interface RCTTextField : UITextField
{
    RCTEventDispatcher *_eventDispatcher;
    NSMutableArray *_reactSubviews;
    BOOL _jsRequestingFirstResponder;
    int _nativeEventCount;
    BOOL _caretHidden;
    BOOL _selectTextOnFocus;
    UIColor *_placeholderTextColor;
    int _mostRecentEventCount;
    NSNumber *_maxLength;
    struct UIEdgeInsets _contentInset;
}

@property(retain, nonatomic) NSNumber *maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) int mostRecentEventCount; // @synthesize mostRecentEventCount=_mostRecentEventCount;
@property(retain, nonatomic) UIColor *placeholderTextColor; // @synthesize placeholderTextColor=_placeholderTextColor;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) BOOL selectTextOnFocus; // @synthesize selectTextOnFocus=_selectTextOnFocus;
@property(nonatomic) BOOL caretHidden; // @synthesize caretHidden=_caretHidden;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textFieldBeginEditing;
- (void)textFieldSubmitEditing;
- (void)textFieldEndEditing;
- (void)textFieldDidChange;
@property(nonatomic) BOOL autoCorrect;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(int)arg2;
- (void)removeReactSubview:(id)arg1;
- (id)reactSubviews;
- (void)setPlaceholder:(id)arg1;
- (void)setText:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithEventDispatcher:(id)arg1;

@end

