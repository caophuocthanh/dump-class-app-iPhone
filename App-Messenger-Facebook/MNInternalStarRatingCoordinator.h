//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNNavigationListener.h"
#import "MNServiceControllable.h"

@class MNNavigationCoordinator, NSString;

@interface MNInternalStarRatingCoordinator : NSObject <MNNavigationListener, MNServiceControllable>
{
    MNNavigationCoordinator *_navigationCoordinator;
}

- (void).cxx_destruct;
- (void)willNavigateFromViewController:(id)arg1 toViewController:(id)arg2 navigationController:(id)arg3 isSelectedNavigationController:(BOOL)arg4;
- (void)didNavigateFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithNavigationCoordinator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
