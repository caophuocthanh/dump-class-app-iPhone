//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFilterControlView;

@protocol IGFilterControlViewDelegate <NSObject>
- (void)filterControlView:(IGFilterControlView *)arg1 didChangetintIntensity:(float)arg2 tintType:(unsigned int)arg3;
- (void)filterControlView:(IGFilterControlView *)arg1 didChangeTintColor:(unsigned int)arg2 withTintType:(unsigned int)arg3;
- (void)filterControlViewNeedUpdateValue;
- (void)filterControlViewDidToggleGrid:(BOOL)arg1;
- (void)filterControlViewDidTapRotate:(IGFilterControlView *)arg1;
- (void)filterControlView:(IGFilterControlView *)arg1 didChangeBorderSelection:(BOOL)arg2;
- (void)filterControlView:(IGFilterControlView *)arg1 didChangeValue:(float)arg2;
- (void)filterControlViewDidEndDragging:(IGFilterControlView *)arg1;
- (void)filterControlViewDidStartDragging:(IGFilterControlView *)arg1;
- (void)filterControlViewDidPressCancel:(IGFilterControlView *)arg1;
- (void)filterControlViewDidPressDone:(IGFilterControlView *)arg1;
@end

