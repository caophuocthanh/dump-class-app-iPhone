//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FPTouchView : UIView
{
    CDUnknownBlockType _outsideBlock;
    CDUnknownBlockType _insideBlock;
}

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setTouchedInsideBlock:(CDUnknownBlockType)arg1;
- (void)setTouchedOutsideBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

