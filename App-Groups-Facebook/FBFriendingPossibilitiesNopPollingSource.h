//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPolling.h"

@class NSDate, NSString;

@interface FBFriendingPossibilitiesNopPollingSource : NSObject <FBPolling>
{
    BOOL _enabled;
    id <FBPollingDelegate> _delegate;
    NSDate *_fireDate;
    NSDate *_lastPollDate;
    NSString *_name;
    double _refreshInterval;
}

@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSDate *lastPollDate; // @synthesize lastPollDate=_lastPollDate;
@property(readonly, nonatomic) __weak NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <FBPollingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

