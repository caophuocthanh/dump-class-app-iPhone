//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter;

@interface ComGoogleAppsBigtopDataItemsChangesApplierChangeApplier : NSObject
{
    id <JavaUtilSet> threadAppliers_;
    id <JavaUtilSet> clusterAppliers_;
    ComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter *singleItemChangeConverter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaUtilSet_withJavaUtilSet_withComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (id)applyLocalChangeWithComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ClusterChange:(id)arg2;
- (id)applyRemoteChangeWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withComGoogleAppsBigtopDataItemsItemsSyncProtos_SingleItemChangeFromServer:(id)arg2;
- (id)applyLocalChangeWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1 withComGoogleAppsBigtopDataItemsItemsSyncProtos_SingleItemChangeToServer:(id)arg2;
- (id)initWithJavaUtilSet:(id)arg1 withJavaUtilSet:(id)arg2 withComGoogleAppsBigtopDataItemsChangesApplierSingleItemChangeConverter:(id)arg3;

@end

