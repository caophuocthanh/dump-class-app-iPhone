//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NIGroupedCellBackground.h"

@interface GOOCardStyle : NIGroupedCellBackground
{
    BOOL _usesDarkTheme;
    BOOL _shouldInsetCellDividers;
}

+ (float)shadowPlusBorderWidthForCardStyle:(id)arg1;
+ (struct UIEdgeInsets)dividerInsets;
@property(nonatomic) BOOL shouldInsetCellDividers; // @synthesize shouldInsetCellDividers=_shouldInsetCellDividers;
@property(nonatomic) BOOL usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
- (int)backgroundTagForFirst:(BOOL)arg1 last:(BOOL)arg2 drawDivider:(BOOL)arg3;
- (id)cacheKeyForFirst:(BOOL)arg1 last:(BOOL)arg2 highlighted:(BOOL)arg3 drawDivider:(BOOL)arg4;
- (void)_applyDividerPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (id)init;

@end

