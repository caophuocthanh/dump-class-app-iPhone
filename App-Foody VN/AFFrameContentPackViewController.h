//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFToolViewController.h"

@class AFFrameContentPackItem;

@interface AFFrameContentPackViewController : AFToolViewController
{
    BOOL _applyVisible;
    BOOL _isRenderingWidth;
    BOOL _requiresWidthRender;
    AFFrameContentPackItem *_selectedItem;
    float _frameWidth;
}

@property(nonatomic) BOOL requiresWidthRender; // @synthesize requiresWidthRender=_requiresWidthRender;
@property(nonatomic) BOOL isRenderingWidth; // @synthesize isRenderingWidth=_isRenderingWidth;
@property(nonatomic) float frameWidth; // @synthesize frameWidth=_frameWidth;
@property(nonatomic, getter=isApplyVisible) BOOL applyVisible; // @synthesize applyVisible=_applyVisible;
@property(retain, nonatomic) AFFrameContentPackItem *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (void)reportApplied;
- (id)outputProcessor;
- (void)renderWidthPreviewIfPossible;
- (id)processorForFrame:(id)arg1 editingRes:(BOOL)arg2 widthAdjustment:(float)arg3;
- (void)renderPreviewForContentPackItem:(id)arg1;
- (void)updateApplyButton;
- (void)finishApplying;
- (void)willAnimateToolPresentationWithDuration:(float)arg1;
- (id)initWithRenderInstance:(id)arg1 configuration:(id)arg2;

@end
