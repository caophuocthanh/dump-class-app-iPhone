//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexMetaData : NSObject
{
    id <ComGoogleCumulusCommonIndexIdbAdapter> idbAdapter_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Key> key_;
    BOOL isDirty_;
}

- (void)dealloc;
- (void)markDirtyWithBoolean:(BOOL)arg1;
- (void)persistIfDirtyWithComGoogleCumulusCommonIndexIdbAdapter_ObjectStore:(id)arg1;
- (void)initialize__WithComGoogleCumulusCommonIndexIdbAdapter_ObjectStore:(id)arg1 withJavaLangRunnable:(id)arg2;
- (id)initWithComGoogleCumulusCommonIndexIdbAdapter:(id)arg1 withDouble:(double)arg2;

@end

