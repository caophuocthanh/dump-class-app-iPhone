//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGFilterTintControl;

@protocol IGFilterTintControlDelegate <NSObject>
- (void)tintControl:(IGFilterTintControl *)arg1 tintIntensityDidChange:(float)arg2 tintType:(unsigned int)arg3;
- (void)tintControl:(IGFilterTintControl *)arg1 tintColorDidChange:(unsigned int)arg2 tintType:(unsigned int)arg3;
@end

