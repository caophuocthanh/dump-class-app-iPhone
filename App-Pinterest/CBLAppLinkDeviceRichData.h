//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSString, NSURL;

@interface CBLAppLinkDeviceRichData : CBLModelObject
{
    NSURL *_appURL;
    NSString *_appName;
    NSString *_appID;
}

+ (id)propertyTransformerClasses;
+ (id)propertyAliases;
@property(readonly, copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSURL *appURL; // @synthesize appURL=_appURL;
- (void).cxx_destruct;

@end

