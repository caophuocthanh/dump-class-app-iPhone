//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGSurface;

@interface IGLuxBlendFilterCache : NSObject
{
    IGSurface *_antiLuxSurface;
    IGSurface *_starlightSurface;
}

@property(retain, nonatomic) IGSurface *starlightSurface; // @synthesize starlightSurface=_starlightSurface;
@property(retain, nonatomic) IGSurface *antiLuxSurface; // @synthesize antiLuxSurface=_antiLuxSurface;
- (void).cxx_destruct;

@end

