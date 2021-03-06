//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerCommitedMentionsProvider.h"
#import "FBComposerCompositionStateChangedListener.h"
#import "FBComposerHashtagDecoratorDelegate.h"

@class FBComposerCompositionState, FBComposerHashtagDecorator, NSString;

@interface FBComposerHashtagController : NSObject <FBComposerHashtagDecoratorDelegate, FBComposerCommitedMentionsProvider, FBComposerCompositionStateChangedListener>
{
    FBComposerHashtagDecorator *_hashtagDecorator;
    FBComposerCompositionState *_compositionState;
    id <FBComposerHashtagListener> _listener;
}

@property(readonly, nonatomic) FBComposerHashtagDecorator *hashtagDecorator; // @synthesize hashtagDecorator=_hashtagDecorator;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hashtagDecoratorPublishableHashtagsDidChange:(id)arg1;
- (void)hashtagDecoratorHashtagsDidChange:(id)arg1;
- (id)commitedMentions;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (id)initWithListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

