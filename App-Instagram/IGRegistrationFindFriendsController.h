//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGContactsFriendsHelperDelegate.h"
#import "IGCoreTextLinkHandler.h"
#import "IGFindFriendsHelperDelegate.h"
#import "IGFindUsersViewDelegate.h"
#import "IGRegistrationStepObject.h"
#import "UITableViewDelegate.h"

@class IGContactsFriendsHelper, IGFindUsersViewDataSource, IGRegistrationFindFriendsStepView, IGRegistrationFriendsListView, IGRegistrationNavigationBar, NSString, UIView;

@interface IGRegistrationFindFriendsController : NSObject <UITableViewDelegate, IGCoreTextLinkHandler, IGFindUsersViewDelegate, IGContactsFriendsHelperDelegate, IGFindFriendsHelperDelegate, IGRegistrationStepObject>
{
    id <IGRegistrationFindFriendsControllerDelegate> _delegate;
    IGRegistrationFindFriendsStepView *_stepView;
    IGRegistrationNavigationBar *_navBar;
    UIView *_iconView;
    IGRegistrationFriendsListView *_findFriendsView;
    int _findFriendsMode;
    IGFindUsersViewDataSource *_findUsersViewDataSource;
    IGContactsFriendsHelper *_contactsHelper;
    int _followCount;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
}

@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) int followCount; // @synthesize followCount=_followCount;
@property(retain, nonatomic) IGContactsFriendsHelper *contactsHelper; // @synthesize contactsHelper=_contactsHelper;
@property(retain, nonatomic) IGFindUsersViewDataSource *findUsersViewDataSource; // @synthesize findUsersViewDataSource=_findUsersViewDataSource;
@property(nonatomic) int findFriendsMode; // @synthesize findFriendsMode=_findFriendsMode;
@property(retain, nonatomic) IGRegistrationFriendsListView *findFriendsView; // @synthesize findFriendsView=_findFriendsView;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) IGRegistrationNavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) IGRegistrationFindFriendsStepView *stepView; // @synthesize stepView=_stepView;
@property(nonatomic) __weak id <IGRegistrationFindFriendsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSourceCount:(int)arg1;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)findUsersView:(id)arg1 didUnFollowUser:(id)arg2 atIndex:(unsigned int)arg3;
- (void)findUsersView:(id)arg1 didFollowUser:(id)arg2 atIndex:(unsigned int)arg3;
- (void)findUsersView:(id)arg1 didFollowAllUsers:(id)arg2;
- (void)findUsersView:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersView:(id)arg1 didLoadUsers:(id)arg2;
- (void)onVkontakteAuthFailure;
- (void)onVkontakteAuthSuccess;
- (void)onVkontakteAuthSuccessDismissOAuth:(BOOL)arg1;
- (void)fetchVKFriends;
- (void)findFriendsHelper:(id)arg1 didFailToAuthorizeWithMessage:(id)arg2;
- (void)findFriendsHelper:(id)arg1 didAuthorizeWithDataRequest:(id)arg2;
- (void)fetchContactsFriends;
- (void)onFacebookAuthFailure;
- (void)onFacebookAuthSuccess;
- (void)fetchFacebookFriends;
- (void)cancelUserFetch;
- (void)followAllButtonTapped:(id)arg1;
- (void)connect;
- (void)connectButtonTapped;
- (void)displayUserList;
- (id)titleText;
- (void)stepViewWillAppear;
- (id)initWithFindFriendsMode:(int)arg1 analyticsDelegate:(id)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

