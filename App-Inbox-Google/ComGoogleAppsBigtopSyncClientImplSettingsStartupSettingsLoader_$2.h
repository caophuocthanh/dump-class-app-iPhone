//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonSapiCallback.h"

@class ComGoogleAppsBigtopSyncClientImplSettingsStartupSettingsLoader, NSString;

@interface ComGoogleAppsBigtopSyncClientImplSettingsStartupSettingsLoader_$2 : NSObject <JBTICommonSapiCallback>
{
    ComGoogleAppsBigtopSyncClientImplSettingsStartupSettingsLoader *this$0_;
    id <JBTICommonSapiCallback> val$callback_;
    id <JBTICommonSapiSpan> val$loadSpan_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopSyncClientImplSettingsStartupSettingsLoader:(id)arg1 withJBTICommonSapiCallback:(id)arg2 withJBTICommonSapiSpan:(id)arg3;
- (void)onErrorWithJBTError:(id)arg1;
- (void)onSuccessWithId:(id)arg1 withJBTSpan:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

