//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatRpcAbstractRpcClient_ServerInvocation.h"

@class ComGoogleAppsBigtopDataContactsContactServiceClient, ComGoogleAppsBigtopDataContactsContactsProto_GetContactsByEmailRequest;

@interface ComGoogleAppsBigtopDataContactsContactServiceClient_$1 : ComGoogleAppsXplatRpcAbstractRpcClient_ServerInvocation
{
    ComGoogleAppsBigtopDataContactsContactServiceClient *this$0_;
    ComGoogleAppsBigtopDataContactsContactsProto_GetContactsByEmailRequest *val$request_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataContactsContactServiceClient:(id)arg1 withComGoogleAppsBigtopDataContactsContactsProto_GetContactsByEmailRequest:(id)arg2 withNSString:(id)arg3;
- (id)invokeWithComGoogleAppsXplatRpcRpcServerContext:(id)arg1;

@end

