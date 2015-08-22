//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBMThreadKey, MNIncrementalPersistenceJobDescriptionMessageIdentifier;

@interface MNIncrementalPersistenceJobDescription : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMThreadKey *_updateThread_threadKey;
    FBMThreadKey *_deleteThread_threadKey;
    MNIncrementalPersistenceJobDescriptionMessageIdentifier *_insertMessage_identifier;
    MNIncrementalPersistenceJobDescriptionMessageIdentifier *_deleteMessage_identifier;
}

+ (id)updateThreadWithThreadKey:(id)arg1;
+ (id)updateInboxThreads;
+ (id)insertMessageWithIdentifier:(id)arg1;
+ (id)deleteThreadWithThreadKey:(id)arg1;
+ (id)deleteMessageWithIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)matchUpdateThread:(CDUnknownBlockType)arg1 deleteThread:(CDUnknownBlockType)arg2 insertMessage:(CDUnknownBlockType)arg3 deleteMessage:(CDUnknownBlockType)arg4 updateInboxThreads:(CDUnknownBlockType)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
