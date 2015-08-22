//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol ASDisplayProperties <NSObject>
@property(nonatomic) unsigned int edgeAntialiasingMask;
@property(nonatomic) BOOL allowsEdgeAntialiasing;
@property(retain, nonatomic) struct CGColor *backgroundColor;
@property(copy, nonatomic) NSString *asyncdisplaykit_name;
@property(retain, nonatomic) struct CGColor *borderColor;
@property(nonatomic, getter=isOpaque) BOOL opaque;
@property(nonatomic) float borderWidth;
@property(nonatomic) float shadowRadius;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) float shadowOpacity;
@property(retain, nonatomic) struct CGColor *shadowColor;
@property(nonatomic) BOOL needsDisplayOnBoundsChange;
@property(nonatomic) struct CATransform3D sublayerTransform;
@property(nonatomic) struct CATransform3D transform;
@property(nonatomic) float contentsScale;
@property(nonatomic) float cornerRadius;
@property(retain, nonatomic) id contents;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) float zPosition;
@property(nonatomic) struct CGPoint position;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
@end
