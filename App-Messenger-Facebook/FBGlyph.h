//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBGlyph : NSObject
{
}

+ (void)turnOffAssertsForMissingGlyph;
+ (unsigned int)highlightedShadingFromGlyphShading:(unsigned int)arg1;
+ (struct CGSize)CGSizeFromFBGlyphSize:(unsigned int)arg1;
+ (id)colorForShading:(unsigned int)arg1;
+ (id)glyphForName:(unsigned int)arg1 shading:(unsigned int)arg2 size:(unsigned int)arg3 controlState:(unsigned int)arg4 canBeNil:(BOOL)arg5;
+ (id)glyphForName:(unsigned int)arg1 shading:(unsigned int)arg2 size:(unsigned int)arg3 controlState:(unsigned int)arg4;
+ (id)glyphForName:(unsigned int)arg1 color:(id)arg2 size:(unsigned int)arg3 controlState:(unsigned int)arg4;
+ (id)glyphForName:(unsigned int)arg1 shading:(unsigned int)arg2 size:(unsigned int)arg3;

@end

