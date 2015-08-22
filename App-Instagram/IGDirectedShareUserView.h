//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGDynamics1D, IGProfilePictureImageView, UIImageView;

@interface IGDirectedShareUserView : UIView
{
    IGProfilePictureImageView *_imageView;
    UIImageView *_seenStateImageView;
    IGDynamics1D *_transformAnimator;
}

@property(nonatomic) __weak IGDynamics1D *transformAnimator; // @synthesize transformAnimator=_transformAnimator;
@property(retain, nonatomic) UIImageView *seenStateImageView; // @synthesize seenStateImageView=_seenStateImageView;
@property(retain, nonatomic) IGProfilePictureImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setSeenStateImageViewVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSeenState:(int)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
