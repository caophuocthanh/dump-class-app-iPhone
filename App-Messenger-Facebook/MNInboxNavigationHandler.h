//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNInboxViewControllerDelegate.h"

@class MNNavigationController, MNNavigationListenerAnnouncer, MNPendingRequestsThreadListNavigationHandler, MNTincanThreadIndicator, NSString;

@interface MNInboxNavigationHandler : NSObject <FBSessionClassProvidable, MNInboxViewControllerDelegate>
{
    id <FBProvider> _navigationCoordinatorProvider;
    id <FBProvider> _threadNavigationCoordinatorProvider;
    id <FBProvider> _otherThreadListViewControllerProvider;
    MNPendingRequestsThreadListNavigationHandler *_pendingRequestsThreadListNavigationHandler;
    MNNavigationController *_pendingRequestsFolderNavigationController;
    MNNavigationListenerAnnouncer *_navigationAnnouncer;
    MNTincanThreadIndicator *_tincanThreadIndicator;
}

- (void).cxx_destruct;
- (void)_navigationToThreadWithLocalDescriptor:(id)arg1 loggingEventDescriptor:(id)arg2 isSearchThread:(BOOL)arg3 scrollToFailure:(BOOL)arg4;
- (void)inboxViewController:(id)arg1 didStartTincanConversationWithContact:(id)arg2;
- (void)threadListViewControllerDidDisappear:(id)arg1;
- (void)threadListViewControllerWillDisappear:(id)arg1;
- (void)threadListViewControllerDidAppear:(id)arg1;
- (void)threadListViewControllerWillAppear:(id)arg1;
- (void)inboxViewControllerDidSelectPendingRequestsFolderThreads:(id)arg1;
- (void)inboxViewControllerDidPressComposeWithSearch:(id)arg1;
- (void)inboxViewControllerDidPressCompose:(id)arg1;
- (void)inboxViewController:(id)arg1 didSelectFailedStatusIndicatorForThreadWithLocalThreadKey:(id)arg2;
- (void)inboxViewController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2;
- (void)inboxViewController:(id)arg1 didSelectThreadWithLocalThreadKey:(id)arg2;
- (id)presentedPendingRequestsFolderNavigationController;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
