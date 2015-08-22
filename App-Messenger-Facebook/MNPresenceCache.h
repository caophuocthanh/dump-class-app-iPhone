//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNPresenceUpdating.h"

@class NSDictionary, NSString, NSTimer;

@interface MNPresenceCache : NSObject <MNPresenceUpdating, FBSessionClassProvidable>
{
    NSDictionary *_personIdToPresenceMap;
    NSTimer *_presenceResetTimer;
    id <MNPresenceCacheDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPresenceCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)onlineUserIds;
- (id)allTrackedPresenceValues;
- (id)presenceForPersonWithId:(id)arg1;
- (void)updatePresence:(id)arg1 shouldClearExisting:(BOOL)arg2;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
