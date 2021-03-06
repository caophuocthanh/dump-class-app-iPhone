//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface MNProfilePictureSelectionView : UIView
{
    UIImageView *_selfieStickerImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_galleryButton;
    UIButton *_imageCaptureButton;
    UIButton *_notNowButton;
    UIView *_flexibleMarginsView;
    id <MNProfilePictureSelectionViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNProfilePictureSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_notNowPressed;
- (void)_galleryButtonPressed;
- (void)_takePhotoPressed;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

