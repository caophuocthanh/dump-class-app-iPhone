//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2LogSpanIdCreator;

@interface ComGoogleCumulusCommonMetric2SpanRecordStore : NSObject
{
    id <JavaUtilMap> records_;
    id <JavaUtilMap> roots_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
    int storeVersion_;
    ComGoogleCumulusCommonMetric2LogSpanIdCreator *logSpanIdCreator_;
}

- (void)dealloc;
- (void)disposeOfAllRecords;
- (int)getVersion;
- (int)incVersion;
- (BOOL)isEmpty;
- (int)size;
- (id)removeRootsOlderThanOrEqualToWithDouble:(double)arg1;
- (id)removeAllRoots;
- (id)getAllRootsUpdatedSinceVersionWithInt:(int)arg1;
- (id)getAllRoots;
- (id)getAll;
- (void)connectParentAndChildWithComGoogleCumulusCommonMetric2SpanRecord:(id)arg1 withComGoogleCumulusCommonMetric2SpanRecord:(id)arg2;
- (void)removeRecursiveInternalWithComGoogleCumulusCommonMetric2SpanRecord:(id)arg1;
- (void)removeRecursiveWithComGoogleCumulusCommonMetric2SpanRecord:(id)arg1;
- (void)removeWithComGoogleCumulusCommonMetric2SpanRecord:(id)arg1;
- (void)removeFromRootsWithComGoogleCumulusCommonMetric2SpanRecord:(id)arg1;
- (id)createWithNSString:(id)arg1;
- (id)getOrCreateWithNSString:(id)arg1;
- (BOOL)containsWithNSString:(id)arg1;
- (id)getWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusCommonUtilClock:(id)arg1;

@end

