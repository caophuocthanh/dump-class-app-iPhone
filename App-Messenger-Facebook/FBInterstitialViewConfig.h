//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBFIGConfig.h"

@class NSString, UIColor, UIFont, UIView;

@interface FBInterstitialViewConfig : FBValueObject <FBFIGConfig>
{
    BOOL _subtitleAdjustsFontSizeToFitWidth;
    BOOL _hasDismissButton;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    unsigned int _titleMaxNumberOfLines;
    NSString *_subtitle;
    UIFont *_subtitleFont;
    UIColor *_subtitleColor;
    unsigned int _subtitleMaxNumberOfLines;
    UIView *_contentView;
    NSString *_primaryButtonTitle;
    unsigned int _primaryButtonStyle;
    unsigned int _primaryButtonSize;
    UIColor *_primaryButtonColor;
    UIColor *_primaryButtonBackgroundColor;
    NSString *_secondaryButtonTitle;
    unsigned int _secondaryButtonStyle;
    unsigned int _secondaryButtonSize;
    UIColor *_secondaryButtonColor;
    UIColor *_secondaryButtonBackgroundColor;
    UIColor *_backgroundColor;
    struct UIEdgeInsets _contentViewEdgeInsets;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)newWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned int)arg4 subtitle:(id)arg5 subtitleFont:(id)arg6 subtitleColor:(id)arg7 subtitleMaxNumberOfLines:(unsigned int)arg8 subtitleAdjustsFontSizeToFitWidth:(BOOL)arg9 contentView:(id)arg10 contentViewEdgeInsets:(struct UIEdgeInsets)arg11 primaryButtonTitle:(id)arg12 primaryButtonStyle:(unsigned int)arg13 primaryButtonSize:(unsigned int)arg14 primaryButtonColor:(id)arg15 primaryButtonBackgroundColor:(id)arg16 secondaryButtonTitle:(id)arg17 secondaryButtonStyle:(unsigned int)arg18 secondaryButtonSize:(unsigned int)arg19 secondaryButtonColor:(id)arg20 secondaryButtonBackgroundColor:(id)arg21 hasDismissButton:(BOOL)arg22 edgeInsets:(struct UIEdgeInsets)arg23 backgroundColor:(id)arg24;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(readonly, nonatomic) BOOL hasDismissButton; // @synthesize hasDismissButton=_hasDismissButton;
@property(readonly, copy, nonatomic) UIColor *secondaryButtonBackgroundColor; // @synthesize secondaryButtonBackgroundColor=_secondaryButtonBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *secondaryButtonColor; // @synthesize secondaryButtonColor=_secondaryButtonColor;
@property(readonly, nonatomic) unsigned int secondaryButtonSize; // @synthesize secondaryButtonSize=_secondaryButtonSize;
@property(readonly, nonatomic) unsigned int secondaryButtonStyle; // @synthesize secondaryButtonStyle=_secondaryButtonStyle;
@property(readonly, copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(readonly, copy, nonatomic) UIColor *primaryButtonBackgroundColor; // @synthesize primaryButtonBackgroundColor=_primaryButtonBackgroundColor;
@property(readonly, copy, nonatomic) UIColor *primaryButtonColor; // @synthesize primaryButtonColor=_primaryButtonColor;
@property(readonly, nonatomic) unsigned int primaryButtonSize; // @synthesize primaryButtonSize=_primaryButtonSize;
@property(readonly, nonatomic) unsigned int primaryButtonStyle; // @synthesize primaryButtonStyle=_primaryButtonStyle;
@property(readonly, copy, nonatomic) NSString *primaryButtonTitle; // @synthesize primaryButtonTitle=_primaryButtonTitle;
@property(readonly, nonatomic) struct UIEdgeInsets contentViewEdgeInsets; // @synthesize contentViewEdgeInsets=_contentViewEdgeInsets;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) BOOL subtitleAdjustsFontSizeToFitWidth; // @synthesize subtitleAdjustsFontSizeToFitWidth=_subtitleAdjustsFontSizeToFitWidth;
@property(readonly, nonatomic) unsigned int subtitleMaxNumberOfLines; // @synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines;
@property(readonly, copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) unsigned int titleMaxNumberOfLines; // @synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned int)arg4 subtitle:(id)arg5 subtitleFont:(id)arg6 subtitleColor:(id)arg7 subtitleMaxNumberOfLines:(unsigned int)arg8 subtitleAdjustsFontSizeToFitWidth:(BOOL)arg9 contentView:(id)arg10 contentViewEdgeInsets:(struct UIEdgeInsets)arg11 primaryButtonTitle:(id)arg12 primaryButtonStyle:(unsigned int)arg13 primaryButtonSize:(unsigned int)arg14 primaryButtonColor:(id)arg15 primaryButtonBackgroundColor:(id)arg16 secondaryButtonTitle:(id)arg17 secondaryButtonStyle:(unsigned int)arg18 secondaryButtonSize:(unsigned int)arg19 secondaryButtonColor:(id)arg20 secondaryButtonBackgroundColor:(id)arg21 hasDismissButton:(BOOL)arg22 edgeInsets:(struct UIEdgeInsets)arg23 backgroundColor:(id)arg24;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
