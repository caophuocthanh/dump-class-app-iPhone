//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPublishingBackgroundTaskScheduler.h"

@class FBBackgroundTaskHandler, NSMutableDictionary, NSString;

@interface FBPublishingApplicationBackgroundTaskScheduler : NSObject <FBPublishingBackgroundTaskScheduler>
{
    FBBackgroundTaskHandler *_backgroundTaskHandler;
    NSMutableDictionary *_backgroundTaskIdentifiersByIdentifier;
}

- (void).cxx_destruct;
- (void)endBackgroundTaskWithIdentifier:(id)arg1;
- (void)startBackgroundTaskWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

