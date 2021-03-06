//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFGalleryVideoItem.h"

#import "PSPDFRemoteContentObject.h"

@class NSDictionary, NSError, NSString, PSPDFVimeoURLParameters;

@interface PSPDFGalleryVimeoVideoItem : PSPDFGalleryVideoItem <PSPDFRemoteContentObject>
{
    BOOL _loadingRemoteContent;
    float _remoteContentProgress;
    NSError *_remoteContentError;
    NSDictionary *_remoteContent;
    PSPDFVimeoURLParameters *_URLParams;
}

@property(retain, nonatomic) PSPDFVimeoURLParameters *URLParams; // @synthesize URLParams=_URLParams;
@property(retain, nonatomic) id remoteContent; // @synthesize remoteContent=_remoteContent;
@property(retain, nonatomic) NSError *remoteContentError; // @synthesize remoteContentError=_remoteContentError;
@property(nonatomic) float remoteContentProgress; // @synthesize remoteContentProgress=_remoteContentProgress;
@property(nonatomic, getter=isLoadingRemoteContent) BOOL loadingRemoteContent; // @synthesize loadingRemoteContent=_loadingRemoteContent;
- (void).cxx_destruct;
- (void)parseRemoteContent;
- (void)updateContentState;
- (CDUnknownBlockType)remoteContentTransformerBlock;
- (BOOL)shouldRetryLoadingRemoteContentOnConnectionFailure;
- (BOOL)shouldCacheRemoteContent;
- (id)URLRequestForRemoteContent;
- (BOOL)hasRemoteContent;
- (id)error;
- (float)progress;
- (id)fallbackURL;
- (id)initInternallyWithDictionary:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

