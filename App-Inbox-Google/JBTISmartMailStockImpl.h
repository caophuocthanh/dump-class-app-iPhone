//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTISmartMailFixedActionsSmartMailComponent.h"

#import "JBTStock.h"

@class ComGooglePersonalizationAssistAnnotateApiFinanceAssistance, ComGooglePersonalizationAssistAnnotateApiViewUrlAction, JBTCCachedValue, NSString;

@interface JBTISmartMailStockImpl : JBTISmartMailFixedActionsSmartMailComponent <JBTStock>
{
    ComGooglePersonalizationAssistAnnotateApiFinanceAssistance *financeProto_;
    ComGooglePersonalizationAssistAnnotateApiViewUrlAction *googleFinanceAction_;
    JBTCCachedValue *cachedTime_;
    JBTCCachedValue *parsedChange_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_googleFinanceAction_;
+ (id)__annotations_getChangePercent;
+ (id)__annotations_getChange;
+ (id)__annotations_getLastPriceTime;
+ (id)__annotations_getLastPrice;
+ (id)__annotations_getCurrency;
+ (id)__annotations_getFullName;
+ (id)__annotations_initWithComGooglePersonalizationAssistAnnotateApiFinanceAssistance_withComGooglePersonalizationAssistAnnotateApiViewUrlAction_withComGoogleCumulusCommonUtilClock_withJBTISmartMailSmartMailCommandApplier_withJBTISmartMailSmartMailComponentContextImpl_withJBTOrganization__params;
- (void)dealloc;
- (id)getParsedChange;
- (BOOL)hasDecreased;
- (BOOL)hasIncreased;
- (BOOL)hasChange;
- (id)getExchange;
- (id)getChangePercent;
- (id)getChange;
- (id)getLastPriceTime;
- (id)getLastPrice;
- (id)getCurrency;
- (id)getFullName;
- (id)getSymbol;
- (id)getActions;
- (id)initWithComGooglePersonalizationAssistAnnotateApiFinanceAssistance:(id)arg1 withComGooglePersonalizationAssistAnnotateApiViewUrlAction:(id)arg2 withComGoogleCumulusCommonUtilClock:(id)arg3 withJBTISmartMailSmartMailCommandApplier:(id)arg4 withJBTISmartMailSmartMailComponentContextImpl:(id)arg5 withJBTOrganization:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

