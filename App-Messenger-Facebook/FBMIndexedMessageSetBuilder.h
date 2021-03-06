//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FBMIndexedMessageSetBuilder : NSObject
{
    NSMutableDictionary *_messageIdToMessageMap;
    NSMutableDictionary *_messageOfflineIdToMessageMap;
}

- (void).cxx_destruct;
- (id)_existingMessageForOfflineId:(id)arg1;
- (id)_existingMessageForMessageId:(id)arg1;
- (id)existingMessageForDescriptor:(id)arg1;
- (void)_clearReferencesForMessage:(id)arg1;
- (id)_normalizeOrderForMessages:(id)arg1;
- (void)removeMessageByDescriptor:(id)arg1;
- (void)addMessagesFromSet:(id)arg1;
- (void)addMessages:(id)arg1;
- (void)addMessage:(id)arg1;
- (id)build;
- (id)initWithMessages:(id)arg1;
- (id)init;

@end

