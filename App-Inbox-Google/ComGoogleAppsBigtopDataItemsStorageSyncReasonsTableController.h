//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlSqlTableController;

@interface ComGoogleAppsBigtopDataItemsStorageSyncReasonsTableController : NSObject
{
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsXplatSqlSqlTableController *innerController_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithJavaUtilConcurrentExecutor_;
+ (id)__annotations;
- (void)dealloc;
- (id)deleteSyncReasonByRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)getServerVersionOrNullBySyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaLangLong:(id)arg2;
- (id)updateServerVersionBySyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (id)getAllSyncReasonsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getOrInsertSyncReasonRowIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsStorageSyncReason:(id)arg2;
- (id)initWithJavaUtilConcurrentExecutor:(id)arg1;

@end

