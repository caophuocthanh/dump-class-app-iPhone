//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSimpleButton, IGUser, UILabel;

@interface IGFriendRequestHeaderView : UIView
{
    BOOL _incomingRequestPending;
    IGUser *_user;
    id <IGFriendRequestHeaderViewDelegate> _delegate;
    IGSimpleButton *_approveButton;
    IGSimpleButton *_ignoreButton;
    UILabel *_followLabel;
}

@property(retain, nonatomic) UILabel *followLabel; // @synthesize followLabel=_followLabel;
@property(retain, nonatomic) IGSimpleButton *ignoreButton; // @synthesize ignoreButton=_ignoreButton;
@property(retain, nonatomic) IGSimpleButton *approveButton; // @synthesize approveButton=_approveButton;
@property(nonatomic) __weak id <IGFriendRequestHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (void)onIgnoreButtonTapped:(id)arg1;
- (void)onApproveButtonTapped:(id)arg1;
- (void)updateFollowStatus:(id)arg1;
- (void)layOut;
- (id)init;
- (void)dealloc;

@end

