//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTypedNSArrayOfFBActivityPreviewTemplateToken, NSString;

@interface FBActivityPreviewTemplateBuilder : NSObject
{
    FBTypedNSArrayOfFBActivityPreviewTemplateToken *_templateTokens;
    NSString *_templateString;
}

+ (id)activityPreviewTemplateFromExistingActivityPreviewTemplate:(id)arg1;
+ (id)activityPreviewTemplate;
- (void).cxx_destruct;
- (id)withTemplateString:(id)arg1;
- (id)withTemplateTokens:(id)arg1;
- (id)build;

@end
