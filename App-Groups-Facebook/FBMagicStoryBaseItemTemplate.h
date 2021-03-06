//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FBMagicStoryBaseItemTemplate : NSObject
{
    float _xOffset;
    float _yOffset;
    NSArray *_indexPaths;
    NSArray *_photoSizes;
    float _maxWidth;
    int _section;
    float _interItemSpacing;
}

+ (BOOL)isPanorama:(struct CGSize)arg1;
+ (BOOL)isLandscapePhoto:(struct CGSize)arg1;
+ (BOOL)isPortraitPhoto:(struct CGSize)arg1;
@property(nonatomic) float interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(nonatomic) int section; // @synthesize section=_section;
@property(nonatomic) float maxWidth; // @synthesize maxWidth=_maxWidth;
@property(copy, nonatomic) NSArray *photoSizes; // @synthesize photoSizes=_photoSizes;
@property(copy, nonatomic) NSArray *indexPaths; // @synthesize indexPaths=_indexPaths;
@property(nonatomic) float yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) float xOffset; // @synthesize xOffset=_xOffset;
- (void).cxx_destruct;
- (float)threeUnitWidth;

@end

