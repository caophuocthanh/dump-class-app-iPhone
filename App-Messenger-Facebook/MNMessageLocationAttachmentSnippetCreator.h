//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNAttachmentStyleSnippetCreator.h"

@class NSString;

@interface MNMessageLocationAttachmentSnippetCreator : NSObject <MNAttachmentStyleSnippetCreator, FBSessionClassProvidable>
{
}

- (id)snippetForDemoModeWithSenderName:(id)arg1 isSentBySelf:(BOOL)arg2;
- (id)snippetForOutgoingAttachment:(id)arg1;
- (id)snippetForAttachment:(id)arg1 senderName:(id)arg2 isSentBySelf:(BOOL)arg3;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

