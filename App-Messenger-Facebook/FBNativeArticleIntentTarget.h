//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class NSString, NSURL;

@interface FBNativeArticleIntentTarget : FBIntentTarget
{
    NSURL *_canonicalURL;
    NSString *_graphQLID;
}

+ (id)nativeArticleTargetWithGraphQLID:(id)arg1 canonicalURL:(id)arg2;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
@property(readonly, copy, nonatomic) NSURL *canonicalURL; // @synthesize canonicalURL=_canonicalURL;
- (void).cxx_destruct;
- (id)fallbackURLs;
- (id)initWithGraphQLID:(id)arg1 canonicalURL:(id)arg2;

@end
