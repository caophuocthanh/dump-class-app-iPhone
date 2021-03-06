//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBFIGConfigurable.h"

@class NSString;

@interface FBCustomActivityIndicatorView : UIView <FBFIGConfigurable>
{
}

+ (id)defaultFIGConfig;
+ (id)newWithConfig:(id)arg1;
+ (id)newWithStyle:(unsigned int)arg1;
+ (Class)layerClass;
+ (struct CGSize)threadSafeSizeThatFits:(id)arg1 size:(struct CGSize)arg2;
- (void)_guardActivityIndicatorAnimation;
- (void)_registerObservers;
- (id)_activityIndicatorLayer;
- (void)setHidden:(BOOL)arg1;
- (void)setAnimates:(BOOL)arg1;
- (struct CGSize)threadSafeSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)applicationForegroundedWithNotification:(id)arg1;
- (void)oldConfig:(id)arg1 configDidChange:(id)arg2;
- (id)_init;
- (void)applyConfig:(id)arg1;
- (id)config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

