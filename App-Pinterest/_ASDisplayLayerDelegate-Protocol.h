//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject, UIImage, _ASDisplayLayer;

@protocol _ASDisplayLayerDelegate <NSObject>

@optional
+ (UIImage *)displayWithParameters:(id <NSObject>)arg1 isCancelled:(BOOL (^)(void))arg2;
+ (void)drawRect:(struct CGRect)arg1 withParameters:(id <NSObject>)arg2 isCancelled:(BOOL (^)(void))arg3 isRasterizing:(BOOL)arg4;
- (void)cancelDisplayAsyncLayer:(_ASDisplayLayer *)arg1;
- (void)displayAsyncLayer:(_ASDisplayLayer *)arg1 asynchronously:(BOOL)arg2;
- (void)didDisplayAsyncLayer:(_ASDisplayLayer *)arg1;
- (void)willDisplayAsyncLayer:(_ASDisplayLayer *)arg1;
- (NSObject *)drawParametersForAsyncLayer:(_ASDisplayLayer *)arg1;
@end

