//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBImageDownloaderConfiguration.h"

@class FBUserSession, NSString;

@interface FBSessionImageDownloaderConfiguration : NSObject <FBImageDownloaderConfiguration>
{
    FBUserSession *_session;
    BOOL _cdnCacheStatusQuery;
}

- (void).cxx_destruct;
- (BOOL)enabledCdnCacheStatusQuery;
- (id)actorFBIDForDownloadRequest;
- (BOOL)isViewerEmployee;
- (id)initWithSession:(id)arg1 cdnCacheStatusQuery:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

