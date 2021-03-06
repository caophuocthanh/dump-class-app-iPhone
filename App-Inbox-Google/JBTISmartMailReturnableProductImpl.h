//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailFixedActionsSmartMailComponent.h"

#import "JBTReturnableProduct.h"

@class ComGooglePersonalizationAssistAnnotateApiReturnProductAssistance, JBTCCachedValue, NSString;

@interface JBTISmartMailReturnableProductImpl : JBTISmartMailFixedActionsSmartMailComponent <JBTReturnableProduct>
{
    ComGooglePersonalizationAssistAnnotateApiReturnProductAssistance *assistanceProto_;
    id <JavaUtilList> urlActionProtos_;
    id <JBTTimeHelper> timeHelper_;
    JBTCCachedValue *imageCachedValue_;
    JBTCCachedValue *summaryLayout_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getReviewAction;
+ (id)__annotations_getProductName;
+ (id)__annotations_getImage;
+ (id)__annotations_canReturn;
+ (id)__annotations_initWithComGooglePersonalizationAssistAnnotateApiReturnProductAssistance_withJavaUtilList_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTTimeHelper_withJBTISmartMailSmartMailComponentContextImpl_withJBTOrganization__params;
- (void)dealloc;
- (id)getStockImageType;
- (id)createSummaryLayout;
- (id)getReturnInfoString;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getReviewAction;
- (id)getProductName;
- (id)getImage;
- (int)getReturnDaysLeft;
- (BOOL)hasReturnDaysLeft;
- (id)getName;
- (id)getOffers;
- (id)getActions;
- (BOOL)isDigital;
- (BOOL)alwaysReturnable;
- (BOOL)canReturn;
- (id)initWithComGooglePersonalizationAssistAnnotateApiReturnProductAssistance:(id)arg1 withJavaUtilList:(id)arg2 withComGoogleCumulusCommonUtilClock:(id)arg3 withJBTISmartMailSmartMailCommandApplier:(id)arg4 withJBTTimeHelper:(id)arg5 withJBTISmartMailSmartMailComponentContextImpl:(id)arg6 withJBTOrganization:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

