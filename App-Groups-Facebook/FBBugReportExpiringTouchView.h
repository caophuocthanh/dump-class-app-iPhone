//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer;

@interface FBBugReportExpiringTouchView : UIView
{
    float _opacity;
    NSTimer *_timer;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)fadeTouchView;
- (void)drawRect:(struct CGRect)arg1;
- (void)updatePosition:(struct CGPoint)arg1 phase:(int)arg2;
- (id)initWithPosition:(struct CGPoint)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updatePositionAndSetTimer:(struct CGPoint)arg1 phase:(int)arg2;

@end

