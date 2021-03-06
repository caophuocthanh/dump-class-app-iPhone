//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CBLCheckoutViewControllerSubview.h"

@class CBLCheckoutViewController, CBLPin, NSString, UIButton, UIImageView, UILabel;

@interface CBLConfirmationView : UIView <CBLCheckoutViewControllerSubview>
{
    CBLCheckoutViewController *checkoutViewController;
    id <CBLConfirmationViewDelegate> _delegate;
    UIImageView *_merchantImageView;
    UILabel *_allSetLabel;
    UILabel *_orderLabel;
    UILabel *_confirmationLabel;
    UIButton *_doneButton;
    UIImageView *_footerImageView;
    CBLPin *_pin;
}

@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) UIImageView *footerImageView; // @synthesize footerImageView=_footerImageView;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UILabel *confirmationLabel; // @synthesize confirmationLabel=_confirmationLabel;
@property(retain, nonatomic) UILabel *orderLabel; // @synthesize orderLabel=_orderLabel;
@property(retain, nonatomic) UILabel *allSetLabel; // @synthesize allSetLabel=_allSetLabel;
@property(retain, nonatomic) UIImageView *merchantImageView; // @synthesize merchantImageView=_merchantImageView;
@property(nonatomic) __weak id <CBLConfirmationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak CBLCheckoutViewController *checkoutViewController; // @synthesize checkoutViewController;
- (void).cxx_destruct;
- (id)confirmationLabelTextAttributes;
- (id)orderLabelTextAttributes;
- (id)allSetLabelTextAttributes;
- (void)doneTapped;
- (float)heightInCheckoutViewController;
- (BOOL)showCheckoutHeader;
- (id)nextButtonText;
- (id)titleText;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 pin:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

