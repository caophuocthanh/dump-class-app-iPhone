//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "FBClassProvidable.h"

@class FBContactsFetchContext, NSString;

@interface FBFQLFullSyncOperation : NSOperation <FBClassProvidable>
{
    id <FBFullSyncOperationDelegate> _delegate;
    FBContactsFetchContext *_previousContext;
    id <FBFacebookRequestSender> _requestSender;
}

@property(retain, nonatomic) id <FBFacebookRequestSender> requestSender; // @synthesize requestSender=_requestSender;
@property(retain, nonatomic) FBContactsFetchContext *previousContext; // @synthesize previousContext=_previousContext;
@property(nonatomic) id <FBFullSyncOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)syncEventsForResponse:(id)arg1;
- (void)main;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithFacebookRequestSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
