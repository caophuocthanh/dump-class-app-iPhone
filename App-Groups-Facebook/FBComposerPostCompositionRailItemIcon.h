//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class UIColor;

@interface FBComposerPostCompositionRailItemIcon : NSObject <NSCopying>
{
    unsigned int _subtype;
    unsigned int _glyphIcon_glyphName;
    UIColor *_glyphIcon_glyphColor;
}

+ (id)glyphIconWithGlyphName:(unsigned int)arg1 glyphColor:(id)arg2;
- (void).cxx_destruct;
- (void)matchGlyphIcon:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

