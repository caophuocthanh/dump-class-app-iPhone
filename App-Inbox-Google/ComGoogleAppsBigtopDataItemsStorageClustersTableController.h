//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlSqlTableController;

@interface ComGoogleAppsBigtopDataItemsStorageClustersTableController : NSObject
{
    ComGoogleAppsXplatSqlSqlTableController *innerController_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleProtobufExtensionRegistryLite_;
+ (id)__annotations;
- (void)dealloc;
- (id)getRowIdOrNullByServerPermIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getClusterEntryOrNullByServerPermIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)deleteClusterWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)updateOrInsertClusterWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopServicesClustersBigTopCluster:(id)arg2;
- (id)getNumClustersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getClusterOrNullByServerPermIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getAllClustersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)initWithComGoogleProtobufExtensionRegistryLite:(id)arg1;

@end

