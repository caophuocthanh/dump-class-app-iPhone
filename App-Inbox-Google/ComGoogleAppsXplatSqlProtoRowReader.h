//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlRowReader.h"

@class ComGoogleProtobufExtensionRegistryLite;

@interface ComGoogleAppsXplatSqlProtoRowReader : ComGoogleAppsXplatSqlRowReader
{
    ComGoogleProtobufExtensionRegistryLite *extensionRegistry_;
    id <ComGoogleProtobufMessageLite> defaultInstance_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_readRowWithComGoogleAppsXplatSqlSqlResultSet_;
- (void)dealloc;
- (id)readRowWithComGoogleAppsXplatSqlSqlResultSet:(id)arg1;
- (id)initWithComGoogleProtobufExtensionRegistryLite:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2 withComGoogleAppsXplatSqlSqlExp:(id)arg3;

@end

