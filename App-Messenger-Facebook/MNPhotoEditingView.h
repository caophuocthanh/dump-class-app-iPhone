//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNLoadingView, MNPhotoEditingTabContainerView;

@interface MNPhotoEditingView : UIView
{
    struct CGRect _keyboardFrame;
    UIView *_editingControlsView;
    MNLoadingView *_loadingView;
    UIView *_loadingTransparentView;
    BOOL _isLoading;
    MNPhotoEditingTabContainerView *_tabBarContainerView;
    UIView *_mediaView;
}

@property(nonatomic) BOOL isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) MNPhotoEditingTabContainerView *tabBarContainerView; // @synthesize tabBarContainerView=_tabBarContainerView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2 options:(unsigned int)arg3;
- (void)_layoutPhotoEditingFeatures;
- (void)_layoutMediaView;
- (void)_layoutEditingControlsView;
- (void)_resizeTabBarContainerView;
- (void)_layoutTabBarContainerView;
- (void)addEditingControlsView:(id)arg1;
- (void)setTabBarContainerView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithMediaView:(id)arg1 tabBarContainerView:(id)arg2;

@end
