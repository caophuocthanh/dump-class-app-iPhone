//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_Event_OriginEnum, ComGoogleCalendarV2LibsProtoTimeProto_DateOrDateTime, NSString;

@protocol ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_EventOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_Event_OriginEnum *)getOrigin;
- (BOOL)hasOrigin;
- (NSString *)getFingerprint;
- (BOOL)hasFingerprint;
- (long long)getModificationTimeMs;
- (BOOL)hasModificationTimeMs;
- (ComGoogleCalendarV2LibsProtoTimeProto_DateOrDateTime *)getStart;
- (BOOL)hasStart;
- (NSString *)getId;
- (BOOL)hasId;
@end

