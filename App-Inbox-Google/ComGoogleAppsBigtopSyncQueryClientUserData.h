//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncQueryUserData.h"

@class ComGoogleAppsBigtopSyncQueryUserLabels, NSString;

@interface ComGoogleAppsBigtopSyncQueryClientUserData : NSObject <ComGoogleAppsBigtopSyncQueryUserData>
{
    ComGoogleAppsBigtopSyncQueryUserLabels *labels_;
    id <JavaUtilList> emails_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getMeAlias;
- (id)getEmails;
- (void)addEmailWithNSString:(id)arg1;
- (id)getLabels;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

