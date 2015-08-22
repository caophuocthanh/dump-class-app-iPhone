//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLAnimatedImage, NSArray, NSString, NSURL, NSUUID, UIImage;

@protocol PINRemoteImageCategory <NSObject>
@property(nonatomic) BOOL pin_updateWithProgress;
- (BOOL)pin_ignoreGIFs;
- (void)pin_clearImages;
- (void)pin_updateUIWithImage:(UIImage *)arg1 animatedImage:(FLAnimatedImage *)arg2;
- (void)pin_setPlaceholderWithImage:(UIImage *)arg1;
- (void)pin_setDownloadImageOperationUUID:(NSUUID *)arg1;
- (NSUUID *)pin_downloadImageOperationUUID;
- (void)pin_cancelImageDownload;
- (void)pin_setImageFromURLs:(NSArray *)arg1 placeholderImage:(UIImage *)arg2 completion:(void (^)(PINRemoteImageManagerResult *))arg3;
- (void)pin_setImageFromURLs:(NSArray *)arg1 placeholderImage:(UIImage *)arg2;
- (void)pin_setImageFromURLs:(NSArray *)arg1;
- (void)pin_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 processorKey:(NSString *)arg3 processor:(UIImage * (^)(PINRemoteImageManagerResult *, unsigned int *))arg4 completion:(void (^)(PINRemoteImageManagerResult *))arg5;
- (void)pin_setImageFromURL:(NSURL *)arg1 processorKey:(NSString *)arg2 processor:(UIImage * (^)(PINRemoteImageManagerResult *, unsigned int *))arg3 completion:(void (^)(PINRemoteImageManagerResult *))arg4;
- (void)pin_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 processorKey:(NSString *)arg3 processor:(UIImage * (^)(PINRemoteImageManagerResult *, unsigned int *))arg4;
- (void)pin_setImageFromURL:(NSURL *)arg1 processorKey:(NSString *)arg2 processor:(UIImage * (^)(PINRemoteImageManagerResult *, unsigned int *))arg3;
- (void)pin_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2 completion:(void (^)(PINRemoteImageManagerResult *))arg3;
- (void)pin_setImageFromURL:(NSURL *)arg1 completion:(void (^)(PINRemoteImageManagerResult *))arg2;
- (void)pin_setImageFromURL:(NSURL *)arg1 placeholderImage:(UIImage *)arg2;
- (void)pin_setImageFromURL:(NSURL *)arg1;
@end
