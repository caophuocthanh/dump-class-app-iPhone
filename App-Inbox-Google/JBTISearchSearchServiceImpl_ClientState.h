//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopServicesSearchBigTopClientSearchRequest, NSString;

@interface JBTISearchSearchServiceImpl_ClientState : NSObject
{
    int currentVersion_;
    int highestVersionReturnedToClient_;
    ComGoogleAppsBigtopServicesSearchBigTopClientSearchRequest *latestClientSearchRequest_;
    NSString *latestResponseHashValue_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)init;

@end

