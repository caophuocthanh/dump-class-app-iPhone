//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBDrawColorScrubber, UIColor;

@protocol FBDrawColorScrubberDelegate <NSObject>
- (void)colorScrubber:(FBDrawColorScrubber *)arg1 didChooseSize:(float)arg2;
- (void)colorScrubber:(FBDrawColorScrubber *)arg1 didChooseColor:(UIColor *)arg2;
@end
