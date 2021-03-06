//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOTextContentView.h"

#import "UITextViewDelegate.h"

@class GIPFeedbackDescriptionTextViewObject, NSString, UILabel, UITextView;

@interface GIPFeedbackDescriptionTextView : GOOTextContentView <UITextViewDelegate>
{
    GIPFeedbackDescriptionTextViewObject *_object;
    UITextView *_textView;
    UILabel *_ghostText;
}

+ (float)heightForObject:(id)arg1 constrainedToWidth:(float)arg2;
- (void).cxx_destruct;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

