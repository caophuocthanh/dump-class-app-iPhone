//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLRemoteModelObject.h"

@class CBLBillingDetails, CBLMerchant, CBLPaymentMethod, CBLPin, CBLShippingDetails, CBLShippingMethod, NSArray, NSDictionary, NSString, NSURL;

@interface CBLCart : CBLRemoteModelObject
{
    int _preferredVaultType;
    CBLPaymentMethod *_paymentMethod;
    CBLShippingDetails *_shippingDetails;
    CBLShippingDetails *_externalShippingDetails;
    CBLMerchant *_merchant;
    CBLBillingDetails *_billingDetails;
    NSURL *_policyLink;
    NSString *_country;
    NSString *_currency;
    NSString *_updateTime;
    NSString *_submittedTime;
    NSString *_orderIdentifier;
    NSString *_basePrice;
    NSString *_displayBasePrice;
    NSString *_tax;
    NSString *_displayTax;
    NSString *_displayStatus;
    NSString *_totalPrice;
    NSString *_displayTotalPrice;
    NSDictionary *_cartItems;
    CBLPin *_productPin;
    NSArray *_productPins;
    NSArray *_shippingMethods;
    CBLShippingMethod *_selectedShippingMethod;
    int _walletType;
    CBLPin *_contextPin;
}

+ (void)createCartWithPin:(id)arg1 variant:(id)arg2 quantity:(int)arg3 walletType:(int)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
+ (void)getWalletTypeForPin:(id)arg1 variant:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)propertyTransformerClasses;
+ (id)propertyArrayElementClasses;
+ (id)additionalFieldsString;
+ (id)additionalDetailFields;
+ (id)remoteEntityName;
+ (id)client;
+ (id)propertyAliases;
@property(retain, nonatomic) CBLPin *contextPin; // @synthesize contextPin=_contextPin;
@property(readonly, nonatomic) int walletType; // @synthesize walletType=_walletType;
@property(retain, nonatomic) CBLShippingMethod *selectedShippingMethod; // @synthesize selectedShippingMethod=_selectedShippingMethod;
@property(retain, nonatomic) NSArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property(retain, nonatomic) NSArray *productPins; // @synthesize productPins=_productPins;
@property(retain, nonatomic) CBLPin *productPin; // @synthesize productPin=_productPin;
@property(readonly, nonatomic) NSDictionary *cartItems; // @synthesize cartItems=_cartItems;
@property(copy, nonatomic) NSString *displayTotalPrice; // @synthesize displayTotalPrice=_displayTotalPrice;
@property(readonly, copy, nonatomic) NSString *totalPrice; // @synthesize totalPrice=_totalPrice;
@property(readonly, copy, nonatomic) NSString *displayStatus; // @synthesize displayStatus=_displayStatus;
@property(copy, nonatomic) NSString *displayTax; // @synthesize displayTax=_displayTax;
@property(readonly, copy, nonatomic) NSString *tax; // @synthesize tax=_tax;
@property(readonly, copy, nonatomic) NSString *displayBasePrice; // @synthesize displayBasePrice=_displayBasePrice;
@property(readonly, copy, nonatomic) NSString *basePrice; // @synthesize basePrice=_basePrice;
@property(readonly, copy, nonatomic) NSString *orderIdentifier; // @synthesize orderIdentifier=_orderIdentifier;
@property(readonly, copy, nonatomic) NSString *submittedTime; // @synthesize submittedTime=_submittedTime;
@property(readonly, copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;
@property(readonly, copy, nonatomic) NSString *currency; // @synthesize currency=_currency;
@property(readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(readonly, nonatomic) NSURL *policyLink; // @synthesize policyLink=_policyLink;
@property(retain, nonatomic) CBLBillingDetails *billingDetails; // @synthesize billingDetails=_billingDetails;
@property(retain, nonatomic) CBLMerchant *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) CBLShippingDetails *externalShippingDetails; // @synthesize externalShippingDetails=_externalShippingDetails;
@property(retain, nonatomic) CBLShippingDetails *shippingDetails; // @synthesize shippingDetails=_shippingDetails;
@property(retain, nonatomic) CBLPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
@property(nonatomic) int preferredVaultType; // @synthesize preferredVaultType=_preferredVaultType;
- (void).cxx_destruct;
- (void)setVisible:(BOOL)arg1 withSuccess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (BOOL)isEmpty;
- (id)addressStringFromABRecord:(void *)arg1;
- (id)emailStringFromABRecord:(void *)arg1;
- (id)phoneStringFromABRecord:(void *)arg1;
- (id)lastNameStringFromABRecord:(void *)arg1;
- (id)firstNameStringFromABRecord:(void *)arg1;
- (id)abRecordDetailsJSONStringFromABRecord:(void *)arg1 addCardTitle:(BOOL)arg2;
- (id)abRecordDetailsJSONStringFromABRecord:(void *)arg1;
- (void)completeOrderWithToken:(id)arg1 vaultType:(int)arg2 fullShippingDetails:(void *)arg3 billingDetails:(void *)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)completeOrderWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)getCartTotalWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)updatePaymentMethod:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateShippingMethodWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateShippingMethod:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateShippingDetails:(void *)arg1 successs:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateShippingDetails:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateCartItemQuantity:(int)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)replaceCartItemWithItemWithIdentifier:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)currentCartItem;

@end

