//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiTypeObjectLoader_LoadCallback.h"

@class IOSIntArray, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_$51 : NSObject <ComGoogleCumulusApiTypeObjectLoader_LoadCallback>
{
    id <ComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback> val$callback_;
    IOSIntArray *val$docId_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback:(id)arg1 withIntArray:(id)arg2;
- (void)onErrorWithJavaLangException:(id)arg1;
- (void)onSuccessWithNSString:(id)arg1 withComGoogleCumulusApiTypeObjectReader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

