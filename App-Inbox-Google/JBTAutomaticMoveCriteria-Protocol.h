//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol JBTAutomaticMoveCriteria <NSObject, JavaObject>
- (id <JBTClusterConfig>)getAddedCluster;
- (BOOL)hasAddedCluster;
- (id <JBTClusterConfig>)getRemovedCluster;
- (BOOL)hasRemovedCluster;
- (NSString *)getMailingListId;
- (BOOL)hasMailingListId;
- (NSString *)getSenderEmail;
- (BOOL)hasSenderEmail;
- (BOOL)canAutomaticallyMove;
@end

