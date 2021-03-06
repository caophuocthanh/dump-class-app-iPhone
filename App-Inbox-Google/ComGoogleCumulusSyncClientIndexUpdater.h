//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonIndexTokenizer_IndexUpdate.h"

@class NSString;

@interface ComGoogleCumulusSyncClientIndexUpdater : NSObject <ComGoogleCumulusCommonIndexTokenizer_IndexUpdate>
{
    BOOL fullTokenizationRequired_;
    id <JavaUtilMap> fieldUpdaters_;
    id <ComGoogleCumulusCommonSubscriptions> subscriptionAccessor_;
    id <ComGoogleCumulusSyncClientIndexUpdater_IndexCompletionCallback> completionCallback_;
    BOOL shouldClearAllTokens_;
}

- (void)dealloc;
- (BOOL)getShouldClearAllTokens;
- (void)clearAllTokens;
- (void)setFullTokenizationRequired;
- (BOOL)getFullTokenizationRequired;
- (void)commitWithIntArray:(id)arg1;
- (id)getSubscriptionsAccessor;
- (id)updateFieldPartiallyWithNSString:(id)arg1;
- (id)clearAndUpdateFieldWithNSString:(id)arg1;
- (id)initWithBoolean:(BOOL)arg1 withComGoogleCumulusCommonSubscriptions:(id)arg2 withComGoogleCumulusSyncClientIndexUpdater_IndexCompletionCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

