//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class NSString;

@protocol ComGoogleCumulusSyncClientIdbIdbObjectOperation_Handler <NSObject, JavaObject>
- (void)onWriteIssuedWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id <ComGoogleCumulusCommonIndexIdbAdapter_Transaction>)arg1;
- (void)decPendingWrites;
- (void)onReadIssued;
- (void)onCompleteWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
@end

