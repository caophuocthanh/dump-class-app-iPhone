//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBMemCreditCard, UIButton, UILabel;

@interface MNPaymentsPeerToPeerPaymentMethodView : UIView
{
    UIButton *_changeButton;
    UILabel *_cardLabel;
    FBMemCreditCard *_card;
    id <MNPaymentsPeerToPeerPaymentMethodViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNPaymentsPeerToPeerPaymentMethodViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBMemCreditCard *card; // @synthesize card=_card;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_onChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

