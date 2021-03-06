//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGStabilizationFilter.h"

@class IGSurface;

@interface IGStabilizationYUVFilter : IGStabilizationFilter
{
    BOOL _didSetYUVMatrix;
    IGSurface *_lumaSurface;
    IGSurface *_chromaSurface;
}

@property(retain, nonatomic) IGSurface *chromaSurface; // @synthesize chromaSurface=_chromaSurface;
@property(retain, nonatomic) IGSurface *lumaSurface; // @synthesize lumaSurface=_lumaSurface;
- (void).cxx_destruct;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
- (id)fullFragmentShader;
- (void)setYUVMatrixForProgram:(id)arg1;

@end

