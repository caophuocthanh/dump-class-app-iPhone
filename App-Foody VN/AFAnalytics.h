//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AFAnalytics : NSObject
{
}

+ (id)bucketStringForImageSize:(struct CGSize)arg1;
+ (BOOL)attachedAnalyticsLibraryExists;
+ (void)reportEvent:(id)arg1;
+ (void)reportEvent:(id)arg1 attributes:(id)arg2;
+ (void)reportEvent:(id)arg1 attributes:(id)arg2 includeSessionAttributes:(BOOL)arg3;
+ (void)finalizeCurrentSession;
+ (void)resumeSessionWithAPIKey:(id)arg1;
+ (void)addSessionAttributes:(id)arg1;
+ (void)addSessionAttribute:(id)arg1 forKey:(id)arg2;
+ (id)apiKey;
+ (void)setAPIKey:(id)arg1;
+ (void)setUsesPCNStagingEnvironment:(BOOL)arg1;
+ (id)sessionAttributes;
+ (id)standardAttributes;
+ (id)reportedVersionNumber;
+ (void)setReportedVersionNumber:(id)arg1;
+ (void)beginPurchaseUploadTaskWithRequest:(id)arg1 data:(id)arg2 backupPath:(id)arg3;
+ (void)retryFailedPurchaseUploads;
+ (void)postPurchaseDictionary:(id)arg1 toEndpointWithPathComponent:(id)arg2;
+ (id)purchaseRequestWithLength:(unsigned int)arg1 toURL:(id)arg2;
+ (id)commonPurchaseDictionaryWithProductID:(id)arg1;
+ (void)reportFreePurchaseWithProductID:(id)arg1;
+ (void)reportPaidPurchaseWithProductID:(id)arg1 receiptData:(id)arg2 andPrice:(id)arg3;
+ (void)setLocalyticsBucketKey:(id)arg1;

@end
