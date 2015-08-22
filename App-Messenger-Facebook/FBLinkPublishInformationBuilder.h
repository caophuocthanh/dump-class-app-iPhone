//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBLinkPublishInformationBuilder : NSObject
{
    NSString *_caption;
    NSString *_imageUrl;
    NSString *_linkDescription;
    NSString *_name;
    NSString *_url;
    BOOL _allowLinkScraperToDefineSharedLinkImage;
}

+ (id)linkPublishInformationFromExistingLinkPublishInformation:(id)arg1;
+ (id)linkPublishInformation;
- (void).cxx_destruct;
- (id)withAllowLinkScraperToDefineSharedLinkImage:(BOOL)arg1;
- (id)withUrl:(id)arg1;
- (id)withName:(id)arg1;
- (id)withLinkDescription:(id)arg1;
- (id)withImageUrl:(id)arg1;
- (id)withCaption:(id)arg1;
- (id)build;

@end
