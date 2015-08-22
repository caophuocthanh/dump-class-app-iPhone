//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGSpringButton.h"

@class IGPendingRequestView, IGUnfollowHeaderView, IGUser, NSString;

@interface IGFollowButton : IGSpringButton
{
    BOOL _canShowFollowRequest;
    IGUser *_user;
    id <IGFollowButtonDelegate> _delegate;
    NSString *_contextString;
    IGUnfollowHeaderView *_unfollowHeaderView;
    IGPendingRequestView *_pendingRequestView;
    int _currentState;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
}

@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) IGPendingRequestView *pendingRequestView; // @synthesize pendingRequestView=_pendingRequestView;
@property(retain, nonatomic) IGUnfollowHeaderView *unfollowHeaderView; // @synthesize unfollowHeaderView=_unfollowHeaderView;
@property(copy, nonatomic) NSString *contextString; // @synthesize contextString=_contextString;
@property(nonatomic) __weak id <IGFollowButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL canShowFollowRequest; // @synthesize canShowFollowRequest=_canShowFollowRequest;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (float)findWidthOfFollowAndUnfollowButtons;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)onFriendStatusReceived;
- (void)toggleFollowStatus;
- (void)ignoreFollowRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)acceptFollowRequestWithCompletion:(CDUnknownBlockType)arg1;
- (int)getButtonState;
- (void)updateState;
- (BOOL)shouldShowTitle;
- (BOOL)shouldShowPendingRequest;
- (id)titleForButtonState:(int)arg1;
- (id)titleColorForButtonState:(int)arg1;
- (id)iconImageForButtonState:(int)arg1;
- (id)accessoryImageForButtonState:(int)arg1;
- (id)backgroundImageForButtonState:(int)arg1;
- (int)buttonStateForFollowStatus:(int)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDisplayType:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 analyticsDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

