//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class CBLMultilineLabel, NSString, NSTimer;

@interface CBLNewUserJourneyEmailSignupTextFieldLabel : CBLTraitCollectionView
{
    id <CBLNewUserJourneyEmailSignupTextFieldLabelDelegate> _delegate;
    CBLMultilineLabel *_titleLabel;
    NSTimer *_timer;
    NSString *_originalTitle;
}

@property(copy, nonatomic) NSString *originalTitle; // @synthesize originalTitle=_originalTitle;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CBLMultilineLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CBLNewUserJourneyEmailSignupTextFieldLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)localLayoutAttributes;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)showTitle:(id)arg1;
- (void)showErrorTitle:(id)arg1 withEmphasis:(BOOL)arg2;
- (void)reset;
- (void)updateConstraints;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;

@end
