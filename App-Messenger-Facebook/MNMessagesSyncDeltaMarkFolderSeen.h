//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface MNMessagesSyncDeltaMarkFolderSeen : NSObject <TBase, NSCoding>
{
    NSMutableArray *__folders;
    long long __timestamp;
    BOOL __folders_isset;
    BOOL __timestamp_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetTimestamp;
- (BOOL)timestampIsSet;
@property(nonatomic, getter=timestamp, setter=setTimestamp:) long long timestamp;
- (void)unsetFolders;
- (BOOL)foldersIsSet;
@property(retain, nonatomic, getter=folders, setter=setFolders:) NSMutableArray *folders;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolders:(id)arg1 timestamp:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

