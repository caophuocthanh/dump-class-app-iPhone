//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataNetworkNetworkProto_GetStateRequest, ComGoogleAppsBigtopDataNetworkNetworkProto_ToggleNetworkRequest, ComGoogleAppsXplatRpcRpcServerContext;

@protocol ComGoogleAppsBigtopDataNetworkMissingNetworkProto_NetworkService_ServerInterface <NSObject, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)toggleNetworkWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataNetworkNetworkProto_ToggleNetworkRequest:(ComGoogleAppsBigtopDataNetworkNetworkProto_ToggleNetworkRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getStateWithComGoogleAppsXplatRpcRpcServerContext:(ComGoogleAppsXplatRpcRpcServerContext *)arg1 withComGoogleAppsBigtopDataNetworkNetworkProto_GetStateRequest:(ComGoogleAppsBigtopDataNetworkNetworkProto_GetStateRequest *)arg2;
@end

