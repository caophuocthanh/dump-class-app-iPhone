//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface MNInAppNotificationMessageView : UIView
{
    UIView *_separatorView;
    UIImageView *_handleView;
    UIView *_imageMaskView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    id <MNInAppNotificationViewDataSource> _dataSource;
    UIView *_imageView;
}

@property(retain, nonatomic) UIView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <MNInAppNotificationViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)reloadData;
- (void)_layoutLabels;
- (void)_layoutHandleView;
- (void)_layoutImageView;
- (void)_layoutSeparatorView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

