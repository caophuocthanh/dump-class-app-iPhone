//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexIdbAdapter_Listener.h"

@class NSString;

@interface ComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_TxListener : NSObject <ComGoogleCumulusCommonIndexIdbAdapter_Listener>
{
    id <JavaUtilMap> txCallbacks_;
    id <JavaUtilList> transactions_;
    long long cPtr_;
}

- (void)dealloc;
- (void)handleEventWithComGoogleCumulusCommonIndexIdbAdapter_EventTypeEnum:(id)arg1;
- (void)addTransactionWithComGoogleCumulusCommonIndexAbstractTxScopingIdbAdapter_Transaction:(id)arg1;
- (id)initWithLong:(long long)arg1 withJavaUtilMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

