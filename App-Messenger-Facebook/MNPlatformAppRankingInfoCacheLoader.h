//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNServiceControllable.h"

@class MNPlatformAppRankingInfoCache, NSString;

@interface MNPlatformAppRankingInfoCacheLoader : NSObject <MNServiceControllable, FBClassProvidable>
{
    MNPlatformAppRankingInfoCache *_platformAppRankingInfoCache;
}

- (void).cxx_destruct;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPlatformAppRankingInfoCache:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

