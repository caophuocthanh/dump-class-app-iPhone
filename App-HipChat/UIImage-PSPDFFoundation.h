//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImage.h"

@class NSData;

@interface UIImage (PSPDFFoundation)
+ (id)pspdf_preloadedImageWithData:(id)arg1 scale:(float)arg2;
+ (id)pspdf_preloadedImageWithData:(id)arg1;
+ (id)pspdf_preloadedImageWithContentsOfFile:(id)arg1;
+ (void)load;
+ (id)pspdf_imageWithContentsOfResolutionDependentFile:(id)arg1;
@property(retain, nonatomic) NSData *pspdf_imageData;
- (struct CGSize)pspdf_sizeThatFits:(struct CGSize)arg1;
- (struct CGAffineTransform)pspdf_transformSize:(struct CGSize)arg1 orientation:(int)arg2;
- (id)pspdf_cropImageWithCropRect:(struct CGRect)arg1 aspectFitBounds:(struct CGSize)arg2 fillColor:(id)arg3;
- (id)pspdf_maskImageWithMask:(id)arg1;
- (id)pspdf_preloadedImage;
- (struct CGAffineTransform)pspdf_transformForOrientation:(struct CGSize)arg1;
- (id)resizedImage:(struct CGImage *)arg1 size:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3 drawTransposed:(BOOL)arg4 honorScaleFactor:(BOOL)arg5 interpolationQuality:(int)arg6;
- (id)pspdf_resizedImageWithContentMode:(int)arg1 bounds:(struct CGSize)arg2 honorScaleFactor:(BOOL)arg3 interpolationQuality:(int)arg4;
- (id)pspdf_resizedImage:(struct CGSize)arg1 honorScaleFactor:(BOOL)arg2 interpolationQuality:(int)arg3;
- (id)pspdf_thumbnailImage:(int)arg1 interpolationQuality:(int)arg2;
- (id)pspdf_croppedImage:(struct CGRect)arg1;
@end

