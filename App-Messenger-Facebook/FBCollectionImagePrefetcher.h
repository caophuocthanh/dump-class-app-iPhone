//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBImagePrefetchController, FBNumericalScenePathContext, NSMutableSet, NSString;

@interface FBCollectionImagePrefetcher : NSObject
{
    FBImagePrefetchController *_prefetchController;
    FBNumericalScenePathContext *_scenePathContext;
    BOOL _prefetchOnCellular;
    id <FBCollectionImagePrefetcherDelegate> _delegate;
    unsigned int _prefetchCount;
    NSString *_analyticsModule;
    NSMutableSet *_specifierMap;
}

@property(readonly, copy, nonatomic) NSMutableSet *specifierMap; // @synthesize specifierMap=_specifierMap;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) unsigned int prefetchCount; // @synthesize prefetchCount=_prefetchCount;
@property(readonly, nonatomic) __weak id <FBCollectionImagePrefetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_imageSpecifierForCollectionSpecfier:(id)arg1 andIndex:(unsigned int)arg2;
- (void)prefetchForIndex:(unsigned int)arg1 prefetchCount:(int)arg2;
- (void)prefetchForIndex:(unsigned int)arg1;
- (id)initWithDelegate:(id)arg1 prefetchCount:(unsigned int)arg2 imagePrefetchController:(id)arg3 scenePathContext:(id)arg4 analyticsModule:(id)arg5 prefetchOnCellular:(BOOL)arg6;
- (id)init;

@end

