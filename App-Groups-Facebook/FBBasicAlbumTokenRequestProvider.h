//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLConnectionSyncStoreRequestProvider.h"

@class NSString;

@interface FBBasicAlbumTokenRequestProvider : NSObject <FBGraphQLConnectionSyncStoreRequestProvider>
{
    NSString *_userGraphQLID;
    NSString *_accessTokenOverride;
}

- (void).cxx_destruct;
- (const struct FBGraphQLFieldSet *)edgeFieldSet;
- (id)connectionPageForResponse:(id)arg1;
- (id)connectionSyncStore:(id)arg1 findRequest:(id)arg2;
- (id)connectionSyncStore:(id)arg1 previousRequestBefore:(id)arg2;
- (id)connectionSyncStore:(id)arg1 nextRequestAfter:(id)arg2;
- (id)requestProviderID;
- (id)init;
- (id)initWithUserGraphQLID:(id)arg1 accessTokenOverride:(id)arg2;
- (id)initWithUserGraphQLID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

