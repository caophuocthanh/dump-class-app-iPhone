//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheckResult_ResultEnum, ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_Event, ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_RangeQuery;

@protocol ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheckResultOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_Event *)getInconsistentEventsWithInt:(int)arg1;
- (id <JavaUtilList>)getInconsistentEventsList;
- (int)getInconsistentEventsCount;
- (ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheckResult_ResultEnum *)getResult;
- (BOOL)hasResult;
- (ComGoogleCalendarV2LibsProtoConsistencyProto_EventsConsistencyCheck_RangeQuery *)getRangeQuery;
- (BOOL)hasRangeQuery;
@end

