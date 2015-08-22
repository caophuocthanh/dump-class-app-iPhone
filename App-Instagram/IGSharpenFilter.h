//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGGaussianBlurFilter, IGSurface;

@interface IGSharpenFilter : IGImageFilter
{
    IGSurface *_blurredImage;
    IGGaussianBlurFilter *_blurFilter;
}

@property(retain, nonatomic) IGGaussianBlurFilter *blurFilter; // @synthesize blurFilter=_blurFilter;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (void)render:(id)arg1 to:(id)arg2;
- (id)strengthShaderCode;
- (id)fragmentShader;
- (id)samplers;
- (void)setTextureTransform:(union _GLKMatrix4)arg1;
- (void)setContentTransform:(union _GLKMatrix4)arg1;
@property(nonatomic) unsigned int kernelSize;
@property(nonatomic) float sigma;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

