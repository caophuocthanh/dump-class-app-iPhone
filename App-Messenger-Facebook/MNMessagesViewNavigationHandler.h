//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNMessagesViewControllerDelegate.h"

@class NSString;

@interface MNMessagesViewNavigationHandler : NSObject <FBSessionClassProvidable, MNMessagesViewControllerDelegate>
{
    id <FBProvider> _navigationCoordinatorProvider;
    id <FBProvider> _inboxTabViewControllerProvider;
    id <FBProvider> _messagesViewPresenterProvider;
    id <FBProvider> _addMembersViewControllerProvider;
    id <FBProvider> _blockUserViewControllerProvider;
}

- (void).cxx_destruct;
- (void)messagesViewControllerDidSelectUnblockUser:(id)arg1;
- (void)messagesViewController:(id)arg1 didSelectToViewWebViewController:(id)arg2;
- (void)messagesViewControllerDidSelectLeaveGroup:(id)arg1;
- (void)messagesViewControllerDidSelectPeoplePicker:(id)arg1;
- (void)_dismissMessagesViewController:(id)arg1;
- (void)messagesViewControllerDidDeleteThread:(id)arg1;
- (void)messagesViewControllerDidPressBack:(id)arg1;
- (BOOL)messagesViewControllerIsPushedFromInbox:(id)arg1;
- (BOOL)messagesViewControllerCanShowMiniBackButton:(id)arg1;
- (id)_messagesViewPresenter;
- (id)_navigationCoordinator;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
