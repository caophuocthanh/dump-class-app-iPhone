//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager_Waiter.h"

@class ComGoogleCumulusSyncClientIdbIdbObjectStore, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_$18 : ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager_Waiter
{
    ComGoogleCumulusSyncClientIdbIdbObjectStore *this$0_;
    NSString *val$operationId_;
    NSString *val$setting_;
    id <JCGCuCallback> val$callback_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientIdbIdbObjectStore:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withJCGCuCallback:(id)arg4;
- (void)onTransactionAvailableWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1;

@end

