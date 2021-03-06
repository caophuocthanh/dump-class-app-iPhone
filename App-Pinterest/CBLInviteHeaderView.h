//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIImageView, UILabel, UISwitch;

@interface CBLInviteHeaderView : UIView
{
    UILabel *_contactsLabel;
    UISwitch *_inviteAllSwitch;
    id <CBLInviteHeaderViewDelegate> _delegate;
    UIImageView *_inviteImageView;
    UILabel *_inviteAllLabel;
    CALayer *_bottomBorder;
}

@property(retain, nonatomic) CALayer *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain, nonatomic) UILabel *inviteAllLabel; // @synthesize inviteAllLabel=_inviteAllLabel;
@property(retain, nonatomic) UIImageView *inviteImageView; // @synthesize inviteImageView=_inviteImageView;
@property(nonatomic) __weak id <CBLInviteHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *inviteAllSwitch; // @synthesize inviteAllSwitch=_inviteAllSwitch;
@property(retain, nonatomic) UILabel *contactsLabel; // @synthesize contactsLabel=_contactsLabel;
- (void).cxx_destruct;
- (void)inviteAllToggled:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

