//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CardIOGPUFilter.h"

@interface CardIOGPUTransformFilter : CardIOGPUFilter
{
    float orthographicMatrix[16];
    unsigned int _transformMatrixUniform;
    unsigned int _orthographicMatrixUniform;
}

- (void)setPerspectiveMat:(float *)arg1;
- (id)initWithSize:(struct CGSize)arg1;

@end

