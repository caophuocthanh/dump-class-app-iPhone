//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonClientRetryPolicy.h"

@class NSString;

@interface ComGoogleCumulusCommonClientNullRetryPolicy : NSObject <ComGoogleCumulusCommonClientRetryPolicy>
{
}

+ (void)initialize;
- (id)init;
- (void)clearAllState;
- (void)setCustomMaxRetryWithNSString:(id)arg1 withInt:(int)arg2;
- (int)getRetryPolicyPriority;
- (int)getFailedCountWithNSString:(id)arg1;
- (int)getMaxRetries;
- (void)markFailedWithNSString:(id)arg1;
- (void)markFinishedWithNSString:(id)arg1;
- (id)getRetryActionWithNSString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

