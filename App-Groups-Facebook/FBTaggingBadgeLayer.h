//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CATextLayer;

@interface FBTaggingBadgeLayer : CALayer
{
    CALayer *_badgeIconLayer;
    CALayer *_badgeNumberLayer;
    CALayer *_badgeTooltip;
    CATextLayer *_numberLabel;
    struct CGSize _stretchableImageSize;
    int _badgeCount;
}

+ (struct CGSize)sizeToFitWithBadgeCount:(unsigned int)arg1;
@property(nonatomic) int badgeCount; // @synthesize badgeCount=_badgeCount;
- (void)updateBadgeNumberLayer;
- (struct CGSize)sizeToFit;
- (id)hitTest:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithBadgeCount:(int)arg1;
- (id)init;

@end

