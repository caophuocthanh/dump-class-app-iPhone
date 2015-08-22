//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class FBMThreadDescriptor, NSString;

@interface FBMLocalThreadDescriptor : NSObject <NSCopying>
{
    unsigned int _subtype;
    FBMThreadDescriptor *_existingThread_threadDescriptor;
    NSString *_pendingThread_offlineThreadID;
}

+ (id)pendingThreadWithOfflineThreadID:(id)arg1;
+ (id)existingThreadWithThreadDescriptor:(id)arg1;
- (void).cxx_destruct;
- (void)matchExistingThread:(CDUnknownBlockType)arg1 pendingThread:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
