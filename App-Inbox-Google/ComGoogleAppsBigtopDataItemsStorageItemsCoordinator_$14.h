//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsStorageItemMessage, ComGoogleAppsBigtopDataItemsStorageItemsCoordinator, ComGoogleAppsXplatSqlSqlTransaction, JavaLangLong, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemsCoordinator_$14 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsStorageItemsCoordinator *this$0_;
    ComGoogleAppsBigtopDataItemsStorageItemMessage *val$itemMessageToInsert_;
    JavaLangLong *val$existingMessageRowId_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_applyWithComGoogleAppsBigtopDataItemsStorageItemMessage__params;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsStorageItemsCoordinator:(id)arg1 withComGoogleAppsBigtopDataItemsStorageItemMessage:(id)arg2 withJavaLangLong:(id)arg3 withComGoogleAppsXplatSqlSqlTransaction:(id)arg4;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

