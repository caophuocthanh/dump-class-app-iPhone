//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNExternalForwardDataFetcher.h"

@class FBMessageOutgoingAttribution, MNExternalForwardDataFetcherListenerAnnouncer, NSString, NSURL;

@interface MNPlatformPasteboardDataFetcher : NSObject <MNExternalForwardDataFetcher>
{
    unsigned int _platformAttachmentType;
    NSURL *_url;
    FBMessageOutgoingAttribution *_messageOutgoingAttribution;
    unsigned int _maxAnimatedGIFFileSize;
    NSURL *_temporaryMediaStorageURL;
    MNExternalForwardDataFetcherListenerAnnouncer *_announcer;
}

- (void).cxx_destruct;
- (void)_processMediaData:(id)arg1;
- (void)fetchData;
- (int)contentType;
- (unsigned int)numberOfAttachments;
- (void)addListener:(id)arg1;
- (id)initWithURL:(id)arg1 messageOutgoingAttribution:(id)arg2 maxAnimatedGIFFileSize:(unsigned int)arg3 temporaryMediaStorageURL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

