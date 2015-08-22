//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class MNUserSettings, NSObject<OS_dispatch_queue>, NSString;

@interface MNPlatformAppRankingInfoCacheDiskHandler : NSObject <FBSessionClassProvidable>
{
    NSObject<OS_dispatch_queue> *_serializationQueue;
    MNUserSettings *_userSettings;
}

- (void).cxx_destruct;
- (void)asyncWriteRankingInfoDictToUserSettings:(id)arg1;
- (id)loadRankingInfoDictFromUserSettings;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
