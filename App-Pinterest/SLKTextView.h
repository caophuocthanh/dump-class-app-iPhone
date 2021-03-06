//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSArray, NSString, NSTimer, UIColor, UILabel;

@interface SLKTextView : UITextView
{
    double _lastDeletionTimeInterval;
    BOOL _didNotResignFirstResponder;
    BOOL _loupeVisible;
    BOOL _typingSuggestionEnabled;
    BOOL _undoManagerEnabled;
    BOOL _fastDeleting;
    BOOL _didFlashScrollIndicators;
    unsigned int _maxNumberOfLines;
    unsigned int _pastableMediaTypes;
    UILabel *_placeholderLabel;
    NSArray *_keyboardCommands;
    int _verticalMoveDirection;
    NSTimer *_deletionTimer;
    struct CGRect _verticalMoveStartCaretRect;
    struct CGRect _verticalMoveLastCaretRect;
}

+ (BOOL)requiresConstraintBasedLayout;
@property(retain, nonatomic) NSTimer *deletionTimer; // @synthesize deletionTimer=_deletionTimer;
@property(nonatomic) BOOL didFlashScrollIndicators; // @synthesize didFlashScrollIndicators=_didFlashScrollIndicators;
@property(nonatomic) struct CGRect verticalMoveLastCaretRect; // @synthesize verticalMoveLastCaretRect=_verticalMoveLastCaretRect;
@property(nonatomic) struct CGRect verticalMoveStartCaretRect; // @synthesize verticalMoveStartCaretRect=_verticalMoveStartCaretRect;
@property(nonatomic) int verticalMoveDirection; // @synthesize verticalMoveDirection=_verticalMoveDirection;
@property(retain, nonatomic) NSArray *keyboardCommands; // @synthesize keyboardCommands=_keyboardCommands;
@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(nonatomic, getter=isFastDeleting) BOOL fastDeleting; // @synthesize fastDeleting=_fastDeleting;
@property(nonatomic) BOOL undoManagerEnabled; // @synthesize undoManagerEnabled=_undoManagerEnabled;
@property(nonatomic, getter=isTypingSuggestionEnabled) BOOL typingSuggestionEnabled; // @synthesize typingSuggestionEnabled=_typingSuggestionEnabled;
@property(nonatomic, getter=isLoupeVisible) BOOL loupeVisible; // @synthesize loupeVisible=_loupeVisible;
@property(nonatomic) BOOL didNotResignFirstResponder; // @synthesize didNotResignFirstResponder=_didNotResignFirstResponder;
@property(nonatomic) unsigned int pastableMediaTypes; // @synthesize pastableMediaTypes=_pastableMediaTypes;
@property(nonatomic) unsigned int maxNumberOfLines; // @synthesize maxNumberOfLines=_maxNumberOfLines;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isNewVerticalMovementForPosition:(id)arg1 inDirection:(int)arg2;
- (id)closestPositionToPosition:(id)arg1 inDirection:(int)arg2;
- (void)moveCursorTodirection:(int)arg1;
- (void)didPressAnyArrowKey:(id)arg1;
- (void)didPressCommandZKeys:(id)arg1;
- (void)didPressLineBreakKeys:(id)arg1;
- (id)keyCommands;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didEndEditing:(id)arg1;
- (void)didChangeText:(id)arg1;
- (void)didBeginEditing:(id)arg1;
- (void)slk_redo:(id)arg1;
- (void)slk_undo:(id)arg1;
- (void)refreshInputViews;
- (void)refreshFirstResponder;
- (void)shouldRefreshFirstResponder:(id)arg1;
- (void)flashScrollIndicatorsIfNeeded;
- (void)paste:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)resignFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)keyboardInputShouldDelete:(id)arg1;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setFont:(id)arg1;
- (struct _NSRange)selectedRange;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)invalidateFastDeletion;
- (void)invalidateDeletionTimer;
@property(copy, nonatomic) UIColor *placeholderColor;
@property(copy, nonatomic) NSString *placeholder;
- (struct CGRect)placeholderRectThatFits:(struct CGRect)arg1;
- (BOOL)shouldHidePlaceholder;
@property(readonly, nonatomic) BOOL isExpanding;
- (id)supportedMediaTypes;
- (id)pasteboardContentType;
- (BOOL)isPasteboardItemSupported;
- (id)pastedItem;
@property(readonly, nonatomic) unsigned int numberOfLines;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)prepareForUndo:(id)arg1;
- (id)slk_wordAtRange:(struct _NSRange)arg1 rangeInText:(struct _NSRange *)arg2;
- (id)slk_wordAtCaretRange:(struct _NSRange *)arg1;
- (struct _NSRange)slk_insertText:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)slk_insertTextAtCaretRange:(id)arg1;
- (void)slk_insertNewLineBreak;
- (void)slk_scrollToBottomAnimated:(BOOL)arg1;
- (void)slk_scrollToCaretPositonAnimated:(BOOL)arg1;

@end

