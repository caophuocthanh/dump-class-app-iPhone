//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopServicesGmailSerialExecutor_SerialRunnable.h"

@class ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper, ComGoogleCumulusQueryQueryProto_Query;

@interface ComGoogleAppsBigtopServicesGmailSingleClusterBackfill : ComGoogleAppsBigtopServicesGmailSerialExecutor_SerialRunnable
{
    ComGoogleAppsBigtopServicesGmailClusterThrottlingHelper *clusterThrottlingHelper_;
    id <ComGoogleCumulusApiTypeObjectIndex> index_;
    ComGoogleCumulusQueryQueryProto_Query *query_;
    id <ComGoogleCumulusCommonIndexIndexIterable> rootIterable_;
    id <ComGoogleCumulusApiPluginMultiPassQueryRunner> multiPassQueryRunner_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)createBackfillRunnableWithComGoogleAppsBigtopServicesGmailLocalQueryResultBuilder:(id)arg1 withComGoogleCumulusApiPluginQueryProcessorResult_Builder:(id)arg2 withComGoogleCumulusApiPluginMultiPassQueryRunner_Accumulator:(id)arg3 withInt:(int)arg4 withComGoogleAppsBigtopServicesGmailClusterCache:(id)arg5;
- (void)runWithComGoogleAppsBigtopServicesGmailSerialExecutor_RunnableContext:(id)arg1;
- (id)initWithComGoogleAppsBigtopServicesGmailClusterThrottlingHelper:(id)arg1 withComGoogleCumulusApiTypeObjectIndex:(id)arg2 withComGoogleCumulusQueryQueryProto_Query:(id)arg3 withComGoogleCumulusCommonIndexIndexIterable:(id)arg4 withComGoogleCumulusApiPluginMultiPassQueryRunner:(id)arg5;

@end

