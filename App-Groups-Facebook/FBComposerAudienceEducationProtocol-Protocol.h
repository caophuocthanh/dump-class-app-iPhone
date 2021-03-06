//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerAudienceEducationData, FBComposerPrivacySetting, FBPopoverController, NSString, UIView;

@protocol FBComposerAudienceEducationProtocol <NSObject>
@property(readonly, nonatomic) unsigned int platform;
@property(nonatomic) __weak id <FBComposerAudienceEducationProtocolDelegate> delegate;
- (void)sendAudienceEducationRequestForEvent:(unsigned int)arg1;
- (void)didInsertAudienceEducationToView;
- (unsigned int)tooltipType;
- (NSString *)tooltipIdentifier;
- (BOOL)shouldShowTooltip;
- (FBComposerAudienceEducationData *)audienceEducationData;
- (BOOL)showEducationForPrivacySetting:(FBComposerPrivacySetting *)arg1;
- (unsigned int)audienceEducationViewType;
- (unsigned int)audienceEducationType;

@optional
- (void)didMakePostAfterAudienceEducationTUX;
- (void)didSelectPrivacySettingFromAudiencePicker:(FBComposerPrivacySetting *)arg1;
- (FBPopoverController *)presentablePopoverControllerWithFrame:(struct CGRect)arg1;
- (UIView *)viewForInterstitialWithFrame:(struct CGRect)arg1;
@end

