//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ApplyChangesRequest, ComGoogleAppsBigtopDataItemsItemsProto_ApplyUndoRequest, ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest, ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetItemMessageListRequest, ComGoogleAppsBigtopDataItemsItemsProto_GetSyncStatusRequest, ComGoogleAppsBigtopDataItemsItemsProto_ProcessLocalBulkOpWorkRequest, ComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_RunEvictionRequest, ComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_StartItemMessageListRequest, ComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest, ComGoogleAppsBigtopDataItemsItemsProto_SyncRequest, ComGoogleAppsXplatRpcRpcServerContext;

@protocol ComGoogleAppsBigtopDataItemsApiMissingItemsProto_ItemsService_ServerInterface <NSObject, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)processLocalBulkOpWorkWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ProcessLocalBulkOpWorkRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ProcessLocalBulkOpWorkRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)runEvictionWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_RunEvictionRequest:(ComGoogleAppsBigtopDataItemsItemsProto_RunEvictionRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getSyncStatusWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetSyncStatusRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetSyncStatusRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)syncWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_SyncRequest:(ComGoogleAppsBigtopDataItemsItemsProto_SyncRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)applyUndoWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ApplyUndoRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ApplyUndoRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)applyChangesWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ApplyChangesRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ApplyChangesRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getItemMessageListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetItemMessageListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetItemMessageListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)startItemMessageListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_StartItemMessageListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_StartItemMessageListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getClusterListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetClusterListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getItemListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_GetItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_GetItemListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)refreshItemListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_RefreshItemListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)changeItemListItemServerPermIdsWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListItemServerPermIdsRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)changeItemListSizeWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest:(ComGoogleAppsBigtopDataItemsItemsProto_ChangeItemListSizeRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)stopItemListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_StopItemListRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)startItemListWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest:(ComGoogleAppsBigtopDataItemsItemsProto_StartItemListRequest *)arg2;
@end

