//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlBinaryOperatorSqlExp.h"

@class ComGoogleAppsXplatSqlComparisonSqlExp_ComparisonTypeEnum;

@interface ComGoogleAppsXplatSqlComparisonSqlExp : ComGoogleAppsXplatSqlBinaryOperatorSqlExp
{
    ComGoogleAppsXplatSqlComparisonSqlExp_ComparisonTypeEnum *comparisonType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getComparisonType;
- (id)acceptWithComGoogleAppsXplatSqlSqlExpVisitor:(id)arg1;
- (void)checkLovefieldPreconditionsWithComGoogleAppsXplatSqlSqlExp:(id)arg1 withComGoogleAppsXplatSqlSqlExp:(id)arg2;
- (id)initWithComGoogleAppsXplatSqlSqlExp:(id)arg1 withComGoogleAppsXplatSqlSqlExp:(id)arg2 withComGoogleAppsXplatSqlComparisonSqlExp_ComparisonTypeEnum:(id)arg3;

@end

