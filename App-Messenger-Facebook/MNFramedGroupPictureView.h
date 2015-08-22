//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage, UIImageView, UITapGestureRecognizer;

@interface MNFramedGroupPictureView : UIView
{
    UIImageView *_groupImageView;
    UIImageView *_groupImageOverlayView;
    UIImageView *_authorProfileImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <MNFramedGroupPictureViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNFramedGroupPictureViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *authorProfileImage;
@property(retain, nonatomic) UIImage *groupImage;
- (void)_didPerformTap:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
