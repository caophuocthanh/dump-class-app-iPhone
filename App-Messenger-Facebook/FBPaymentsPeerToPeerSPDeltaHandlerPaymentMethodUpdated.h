//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPaymentsPeerToPeerSPDeltaHandler.h"

@class NSString;

@interface FBPaymentsPeerToPeerSPDeltaHandlerPaymentMethodUpdated : NSObject <FBPaymentsPeerToPeerSPDeltaHandler>
{
    id <FBPaymentsPeerToPeerPaymentMethodsDataMutator> _paymentMethodsDataMutator;
}

- (void).cxx_destruct;
- (int)_processDelta:(id)arg1;
- (int)handleDelta:(id)arg1 withDeltaHandlerMap:(id)arg2;
@property(readonly, nonatomic) int type;
- (id)initWithPaymentMethodsDataMutator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
