//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBWebRTCVOIPVideoControlParamsExperimentContext : FBExperimentContext
{
    int _lv_p_a_interval_m30;
    int _rv_p_a_interval_m30;
    float _lv_p_a_loss_m30;
    float _rv_p_a_loss_m30;
    int _lv_r_test_ms_m30;
    int _rv_r_test_ms_m30;
    int _lv_r_a_interval_m30;
    int _rv_r_a_interval_m30;
    float _lv_r_loss_m30;
    float _rv_r_loss_m30;
    int _lv_r_a_bwe_m30;
    int _rv_r_a_bwe_m30;
    int _rv_p_grace_m30;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int rv_p_grace_m30; // @synthesize rv_p_grace_m30=_rv_p_grace_m30;
@property(readonly, nonatomic) int rv_r_a_bwe_m30; // @synthesize rv_r_a_bwe_m30=_rv_r_a_bwe_m30;
@property(readonly, nonatomic) int lv_r_a_bwe_m30; // @synthesize lv_r_a_bwe_m30=_lv_r_a_bwe_m30;
@property(readonly, nonatomic) float rv_r_loss_m30; // @synthesize rv_r_loss_m30=_rv_r_loss_m30;
@property(readonly, nonatomic) float lv_r_loss_m30; // @synthesize lv_r_loss_m30=_lv_r_loss_m30;
@property(readonly, nonatomic) int rv_r_a_interval_m30; // @synthesize rv_r_a_interval_m30=_rv_r_a_interval_m30;
@property(readonly, nonatomic) int lv_r_a_interval_m30; // @synthesize lv_r_a_interval_m30=_lv_r_a_interval_m30;
@property(readonly, nonatomic) int rv_r_test_ms_m30; // @synthesize rv_r_test_ms_m30=_rv_r_test_ms_m30;
@property(readonly, nonatomic) int lv_r_test_ms_m30; // @synthesize lv_r_test_ms_m30=_lv_r_test_ms_m30;
@property(readonly, nonatomic) float rv_p_a_loss_m30; // @synthesize rv_p_a_loss_m30=_rv_p_a_loss_m30;
@property(readonly, nonatomic) float lv_p_a_loss_m30; // @synthesize lv_p_a_loss_m30=_lv_p_a_loss_m30;
@property(readonly, nonatomic) int rv_p_a_interval_m30; // @synthesize rv_p_a_interval_m30=_rv_p_a_interval_m30;
@property(readonly, nonatomic) int lv_p_a_interval_m30; // @synthesize lv_p_a_interval_m30=_lv_p_a_interval_m30;

@end

