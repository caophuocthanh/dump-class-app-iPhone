//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSURL;

@interface BFAppLink : NSObject
{
    BOOL _isBackToReferrer;
    NSURL *_sourceURL;
    NSArray *_targets;
    NSURL *_webURL;
}

+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3;
+ (id)appLinkWithSourceURL:(id)arg1 targets:(id)arg2 webURL:(id)arg3 isBackToReferrer:(BOOL)arg4;
@property(nonatomic) BOOL isBackToReferrer; // @synthesize isBackToReferrer=_isBackToReferrer;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(copy, nonatomic) NSArray *targets; // @synthesize targets=_targets;
@property(retain, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;
- (id)initWithIsBackToReferrer:(BOOL)arg1;

@end

