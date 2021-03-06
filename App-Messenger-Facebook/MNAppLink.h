//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString, NSURL;

@interface MNAppLink : FBValueObject <NSCopying>
{
    BOOL _appLinkSupported;
    BOOL _appInstalled;
    BOOL _siteIntegrityApproved;
    NSString *_title;
    NSURL *_href;
    NSURL *_url;
    int _appStoreId;
    NSURL *_appStoreUrl;
}

@property(readonly, copy, nonatomic) NSURL *appStoreUrl; // @synthesize appStoreUrl=_appStoreUrl;
@property(readonly, nonatomic) int appStoreId; // @synthesize appStoreId=_appStoreId;
@property(readonly, nonatomic) BOOL siteIntegrityApproved; // @synthesize siteIntegrityApproved=_siteIntegrityApproved;
@property(readonly, nonatomic) BOOL appInstalled; // @synthesize appInstalled=_appInstalled;
@property(readonly, nonatomic) BOOL appLinkSupported; // @synthesize appLinkSupported=_appLinkSupported;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSURL *href; // @synthesize href=_href;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 href:(id)arg2 url:(id)arg3 appLinkSupported:(BOOL)arg4 appInstalled:(BOOL)arg5 siteIntegrityApproved:(BOOL)arg6 appStoreId:(int)arg7 appStoreUrl:(id)arg8;

@end

