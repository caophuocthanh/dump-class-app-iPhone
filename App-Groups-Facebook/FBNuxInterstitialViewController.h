//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBInterstitialViewController.h"

#import "FBInterstitialViewDelegate.h"
#import "FBNuxStepViewController.h"

@class FBNuxInterstitial, NSString, NSTimer, UIImageView, UIView;

@interface FBNuxInterstitialViewController : FBInterstitialViewController <FBInterstitialViewDelegate, FBNuxStepViewController>
{
    id <FBNUXViewControllerDelegate> _delegate;
    FBNuxInterstitial *_interstitial;
    NSTimer *_transitionTimer;
    UIImageView *_imageView;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(retain, nonatomic) FBNuxInterstitial *interstitial; // @synthesize interstitial=_interstitial;
@property(nonatomic) __weak id <FBNUXViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)setStepProgress:(unsigned int)arg1 ofTotal:(unsigned int)arg2;
- (void)transitionToSubStep:(id)arg1;
- (void)backOrSkipNow;
- (void)dismissInterstitialNow:(id)arg1;
- (void)interstitialView:(id)arg1 didSelectSecondaryButton:(id)arg2;
- (void)interstitialView:(id)arg1 didSelectPrimaryButton:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (void)_configureViewToInterstitial:(id)arg1;
- (id)_backOrSkipButtonNameForInterstitial:(id)arg1;
- (id)_buttonNameForInterstitial:(id)arg1;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopover;
- (id)initWithStep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

