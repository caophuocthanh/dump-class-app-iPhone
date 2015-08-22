//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPlainTableViewCell.h"

@class IGDirectThread, IGDirectThreadAvatarView, IGUser, UIImageView, UIView;

@interface IGSelectableUserCell : IGPlainTableViewCell
{
    BOOL _checked;
    BOOL _showSeparator;
    BOOL _showWhiteOverlay;
    BOOL _showEmptyCheckmark;
    IGUser *_user;
    IGDirectThread *_thread;
    IGDirectThreadAvatarView *_profilePictureView;
    UIImageView *_checkmarkView;
    UIView *_lineView;
    UIView *_whiteOverlay;
}

+ (struct UIEdgeInsets)separatorInsets;
@property(retain, nonatomic) UIView *whiteOverlay; // @synthesize whiteOverlay=_whiteOverlay;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) IGDirectThreadAvatarView *profilePictureView; // @synthesize profilePictureView=_profilePictureView;
@property(nonatomic) BOOL showEmptyCheckmark; // @synthesize showEmptyCheckmark=_showEmptyCheckmark;
@property(nonatomic) BOOL showWhiteOverlay; // @synthesize showWhiteOverlay=_showWhiteOverlay;
@property(nonatomic) BOOL showSeparator; // @synthesize showSeparator=_showSeparator;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(retain, nonatomic) IGDirectThread *thread; // @synthesize thread=_thread;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

