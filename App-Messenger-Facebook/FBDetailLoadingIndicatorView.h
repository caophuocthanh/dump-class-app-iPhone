//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface FBDetailLoadingIndicatorView : UIView
{
    UILabel *_textLabel;
    UIImageView *_backgroundImageView;
    UIActivityIndicatorView *_spinnerView;
}

- (void).cxx_destruct;
- (void)hideLoadingIndicator:(BOOL)arg1;
- (void)showLoadingIndicator;
- (void)setHidden:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
