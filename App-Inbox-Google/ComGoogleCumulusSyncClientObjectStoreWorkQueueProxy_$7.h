//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusApiTypeObjectLoader_LoadContext, ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy, NSString;

@interface ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy_$7 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusSyncClientObjectStoreWorkQueueProxy *this$0_;
    double requestStartTime_;
    ComGoogleCumulusApiTypeObjectLoader_LoadContext *val$loadContext_;
    id <JavaUtilCollection> val$references_;
    int val$priority_;
    id <ComGoogleCumulusApiTypeObjectLoader_LoadCallback> val$callback_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientObjectStoreWorkQueueProxy:(id)arg1 withComGoogleCumulusApiTypeObjectLoader_LoadContext:(id)arg2 withJavaUtilCollection:(id)arg3 withInt:(int)arg4 withComGoogleCumulusApiTypeObjectLoader_LoadCallback:(id)arg5;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

