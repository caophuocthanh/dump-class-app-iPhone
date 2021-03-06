//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class CBLMobileAppRichSummary, NSArray, NSString, NSURL;

@interface CBLRichSummary : CBLModelObject
{
    NSString *_siteName;
    NSString *_typeName;
    NSString *_displayName;
    NSURL *_faviconLink;
    NSURL *_touchIconLink;
    NSArray *_actions;
    CBLMobileAppRichSummary *_mobileAppSummary;
}

+ (id)supportedRichPinTypes;
+ (id)propertyTransformerClasses;
+ (id)propertyAliases;
@property(readonly, nonatomic) CBLMobileAppRichSummary *mobileAppSummary; // @synthesize mobileAppSummary=_mobileAppSummary;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSURL *touchIconLink; // @synthesize touchIconLink=_touchIconLink;
@property(readonly, copy, nonatomic) NSURL *faviconLink; // @synthesize faviconLink=_faviconLink;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly, copy, nonatomic) NSString *siteName; // @synthesize siteName=_siteName;
- (void).cxx_destruct;

@end

