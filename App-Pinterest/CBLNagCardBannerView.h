//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLNagCardView.h"

@class CBLExperience, CBLNagExperienceData, UIButton, UILabel, UIView;

@interface CBLNagCardBannerView : CBLNagCardView
{
    BOOL _enableDismiss;
    BOOL _isLargeDevice;
    CBLExperience *_experience;
    CBLNagExperienceData *_experienceData;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UIButton *_centerButton;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

+ (float)totalHeightForNagWithExperience:(id)arg1 withConstraintWidth:(float)arg2;
@property(nonatomic) BOOL isLargeDevice; // @synthesize isLargeDevice=_isLargeDevice;
@property(nonatomic) BOOL enableDismiss; // @synthesize enableDismiss=_enableDismiss;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIButton *centerButton; // @synthesize centerButton=_centerButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)experienceData;
- (id)experience;
- (void).cxx_destruct;
- (void)rightButtonPressed:(id)arg1;
- (void)leftButtonPressed:(id)arg1;
- (void)centerButtonPressed:(id)arg1;
- (void)setExperience:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
