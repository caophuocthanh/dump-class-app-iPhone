//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNPaymentsTransferReceiptViewModelCreator.h"

@class FBPaymentsPeerToPeerTransferStatusModelContainer, FBUserSession, NSString;

@interface MNPaymentsPeerToPeerTransferReceiptViewModelCreator : NSObject <MNPaymentsTransferReceiptViewModelCreator>
{
    FBUserSession *_session;
    FBPaymentsPeerToPeerTransferStatusModelContainer *_transferStatusModelContainer;
    id <FBPaymentsPeerToPeerPaymentMethodsCoordinator> _paymentMethodsCoordinator;
}

- (void).cxx_destruct;
- (id)receiptExtraInfoViewModelForPayment:(id)arg1 withPaymentMethod:(id)arg2;
- (id)receiptHeaderViewModelForPayment:(id)arg1 withSender:(id)arg2 withReceiver:(id)arg3;
- (id)initWithSession:(id)arg1 transferStatusModelContainer:(id)arg2 paymentMethodCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
