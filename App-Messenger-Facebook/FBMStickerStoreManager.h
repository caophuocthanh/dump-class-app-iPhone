//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKProductsRequestDelegate.h"

@class FBMPaidStickerPackStore, FBMStickerPackPromoter, FBUserSession, NSMutableArray, NSMutableDictionary, NSString, SKProductsRequest;

@interface FBMStickerStoreManager : NSObject <SKProductsRequestDelegate>
{
    FBUserSession *_session;
    id <FBServiceTransactionMutating> _fetchRequest;
    BOOL _supportInAppPurchase;
    FBMPaidStickerPackStore *_paidPackStore;
    FBMStickerPackPromoter *_stickerPackPromoter;
    unsigned int _layoutIdiom;
    NSMutableArray *_availableStickerPacks;
    NSMutableArray *_featuredStickerPacks;
    NSMutableDictionary *_stickerPackMap;
    double _lastSyncTimestamp;
    unsigned int _fetchState;
    SKProductsRequest *_skRequest;
    double _lastestUpdateTimestamp;
}

+ (void)setDefaultSupportInAppPurchase:(BOOL)arg1;
+ (BOOL)defaultSupportInAppPurchase;
@property(retain, nonatomic) SKProductsRequest *skRequest; // @synthesize skRequest=_skRequest;
@property(nonatomic) double lastestUpdateTimestamp; // @synthesize lastestUpdateTimestamp=_lastestUpdateTimestamp;
@property(nonatomic) unsigned int fetchState; // @synthesize fetchState=_fetchState;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_syncWithAppStore;
- (void)_loadStickerPacks:(id)arg1;
- (void)_reloadStickerPacksWithResponse:(id)arg1;
- (void)_updateLastestUpdateTimestamp;
- (void)_clearStickerPacks;
- (void)_finishFetch;
- (void)_handleDownloadError:(id)arg1;
- (void)_handleDownloadResponse:(id)arg1;
- (void)_downloadPromotedAndAutoDownloadablePacks;
- (void)cancelFetch;
- (BOOL)fetch:(BOOL)arg1;
- (BOOL)needsFetch;
- (id)stickerPackWithFbId:(unsigned long long)arg1;
- (unsigned int)numberOfNewPacksPublishedSince:(double)arg1;
- (id)featuredStickerPacks;
- (id)availableStickerPacks;
- (BOOL)inAppPurchaseEnabled;
- (void)dealloc;
- (id)initWithSession:(id)arg1 supportInAppPurchase:(BOOL)arg2 stickerPackPromoter:(id)arg3 paidStickerPackStore:(id)arg4 layoutIdiom:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

