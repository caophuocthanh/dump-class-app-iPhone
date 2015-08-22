//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class MNComposerImageLoader, UIColor;

@interface MNComposerTabBarIcon : FBValueObject <NSCopying>
{
    BOOL _usesCircularMask;
    BOOL _usesBackgroundSelection;
    MNComposerImageLoader *_normalComposerImageLoader;
    MNComposerImageLoader *_selectedComposerImageLoader;
    UIColor *_iconColor;
}

@property(readonly, copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(readonly, nonatomic) BOOL usesBackgroundSelection; // @synthesize usesBackgroundSelection=_usesBackgroundSelection;
@property(readonly, nonatomic) BOOL usesCircularMask; // @synthesize usesCircularMask=_usesCircularMask;
@property(readonly, copy, nonatomic) MNComposerImageLoader *selectedComposerImageLoader; // @synthesize selectedComposerImageLoader=_selectedComposerImageLoader;
@property(readonly, copy, nonatomic) MNComposerImageLoader *normalComposerImageLoader; // @synthesize normalComposerImageLoader=_normalComposerImageLoader;
- (void).cxx_destruct;
- (id)initWithNormalComposerImageLoader:(id)arg1 selectedComposerImageLoader:(id)arg2 usesCircularMask:(BOOL)arg3 usesBackgroundSelection:(BOOL)arg4 iconColor:(id)arg5;

@end
