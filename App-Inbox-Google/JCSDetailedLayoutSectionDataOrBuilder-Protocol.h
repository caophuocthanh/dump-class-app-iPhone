//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class JCSAction, JCSBadge, JCSDetailedLayoutSectionData_SpacingEnum, JCSFormattedText, JCSStatusStateEnum, JCSTime;

@protocol JCSDetailedLayoutSectionDataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSAction *)getAction;
- (BOOL)hasAction;
- (JCSBadge *)getBadge;
- (BOOL)hasBadge;
- (JCSTime *)getStatusExpirationTime;
- (BOOL)hasStatusExpirationTime;
- (JCSTime *)getStatusStartTime;
- (BOOL)hasStatusStartTime;
- (JCSStatusStateEnum *)getStatus;
- (BOOL)hasStatus;
- (JCSDetailedLayoutSectionData_SpacingEnum *)getSpacing;
- (BOOL)hasSpacing;
- (JCSFormattedText *)getValue;
- (BOOL)hasValue;
- (JCSFormattedText *)getTitle;
- (BOOL)hasTitle;
@end

