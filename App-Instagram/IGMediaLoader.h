//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface IGMediaLoader : NSObject
{
    NSMutableDictionary *_currentRequests;
    int _currentVideoRequests;
    NSMutableSet *_videoFetchURLsOnYield;
    BOOL _enableConcurrencyTuning;
}

+ (id)sharedMediaLoader;
@property BOOL enableConcurrencyTuning; // @synthesize enableConcurrencyTuning=_enableConcurrencyTuning;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forURL:(id)arg2;
- (void)doLoadVideoForURL:(id)arg1 priority:(int)arg2 length:(long long)arg3 observer:(id)arg4 configureRequest:(CDUnknownBlockType)arg5;
- (void)doLoadImageForURL:(id)arg1 priority:(int)arg2 observer:(id)arg3 configureRequest:(CDUnknownBlockType)arg4;
- (void)loadVideoForURL:(id)arg1 priority:(int)arg2 length:(long long)arg3 observer:(id)arg4 configureRequest:(CDUnknownBlockType)arg5;
- (void)loadImageForURL:(id)arg1 priority:(int)arg2 observer:(id)arg3 configureRequest:(CDUnknownBlockType)arg4;
- (void)loadImageForURL:(id)arg1 priority:(int)arg2 observer:(id)arg3;
- (void)setRequest:(id)arg1 forURL:(id)arg2;
- (void)cancelYieldForOnScreenVideoFetch:(id)arg1;
- (void)yieldForOnScreenVideoFetch:(id)arg1;
- (void)adjustConcurrencySettingIfNeeded;
- (int)currentOnScreenRequestsCount;
- (void)stopOffScreenRequests:(int)arg1;
- (id)requestForURL:(id)arg1;
- (id)init;

@end

