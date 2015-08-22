//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCachedImage.h"

@class NSData;

@interface FBCachedWebP : FBCachedImage
{
    NSData *_data;
    struct CGImage *_image;
}

+ (BOOL)_isWebPFormat:(id)arg1 withFileSize:(unsigned int *)arg2;
+ (BOOL)isWebPFormat:(id)arg1;
- (void).cxx_destruct;
- (struct CGImage *)image;
- (void)setImage:(struct CGImage *)arg1;
- (void)decodeIfNeeded;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end
