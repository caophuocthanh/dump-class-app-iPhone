//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPFlashModePicker;

@protocol SPFlashModePickerDelegate <NSObject>
- (void)flashModePickerDidEndCollapse:(SPFlashModePicker *)arg1;
- (void)flashModePickerWillCollapse:(SPFlashModePicker *)arg1;
- (void)flashModePickerDidEndExpand:(SPFlashModePicker *)arg1;
- (void)flashModePickerWillExpand:(SPFlashModePicker *)arg1;
- (void)flashModePicker:(SPFlashModePicker *)arg1 didUpdateFlashMode:(int)arg2;
@end
