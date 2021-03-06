//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIPCrashReportHandlerProtocol.h"

@class NSArray, NSString;

@interface GIPGoogleKitFeedbackCrashReportHandler : NSObject <GIPCrashReportHandlerProtocol>
{
    NSString *_categoryTag;
    NSArray *_crashReportDatas;
    NSString *_obfuscatedGaiaId;
}

@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @synthesize obfuscatedGaiaId=_obfuscatedGaiaId;
- (void).cxx_destruct;
- (BOOL)noThanksButtonDidTap:(id)arg1;
- (BOOL)sendReportsButtonDidTap:(id)arg1;
- (void)handleCrashReportData:(id)arg1;
- (id)initWithCategoryTag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

