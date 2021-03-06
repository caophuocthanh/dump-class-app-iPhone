//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGQuadtreeEditManager.h"

@class IGQuadtree, NSMutableDictionary, NSString, NSTimer;

@interface IGPhotoMapEditManager : NSObject <IGQuadtreeEditManager>
{
    NSMutableDictionary *_committedRemovedMedia;
    NSMutableDictionary *_removedMediaInEditMode;
    BOOL _isInEditMode;
    IGQuadtree *_quadtree;
    BOOL _isInReviewMode;
    BOOL _removalRequestSuccessful;
    NSString *_ticketId;
    NSTimer *_timeoutTimer;
    NSTimer *_ticketCheckTimer;
    double _timeOfRequestStart;
    double _timeOfLastTicketRequest;
    id <IGPhotoMapEditManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGPhotoMapEditManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)commitEditsAfterSuccessfulSubmission;
- (void)commitEdits;
- (void)submitEdits:(id)arg1 isInReviewMode:(BOOL)arg2 promptForConfirmation:(BOOL)arg3;
- (void)onTimeoutTimerFired:(id)arg1;
- (void)onTicketCheckTimerFired:(id)arg1;
- (void)ticketCheckRequestFinished:(id)arg1;
- (void)notifyDelegateThatDeleteRequestFinishedAfterDelay;
- (void)notifyDelegateThatDeleteRequestFinished;
- (void)notifyDelegateThatDeleteRequestFailed:(id)arg1;
- (void)deleteRequestFailed:(BOOL)arg1;
- (void)cancelEdits;
- (int)numPendingEdits;
- (int)countNumberOfPointsWithRemovedMedia:(id)arg1;
- (int)numberOfRemovedPointsInArray:(id)arg1;
- (BOOL)isAnyOfThesePointsRemoved:(id)arg1;
- (BOOL)isRemovedMedia:(id)arg1;
- (void)unremovePoint:(id)arg1;
- (void)removePoint:(id)arg1;
- (BOOL)isRemovedPoint:(id)arg1;
- (BOOL)toggleMediaRemovedState:(id)arg1;
- (void)unremoveAllPointsInArray:(id)arg1;
- (void)removeAllPointsInArray:(id)arg1;
- (void)unremoveMedia:(id)arg1;
- (void)removeMedia:(id)arg1;
- (void)markMedia:(id)arg1 asRemoved:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

