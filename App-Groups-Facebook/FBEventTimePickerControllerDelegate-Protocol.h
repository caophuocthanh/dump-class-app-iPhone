//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class FBEventTimePickerController, NSDate;

@protocol FBEventTimePickerControllerDelegate
- (void)eventTimePickerDidCancel:(FBEventTimePickerController *)arg1;
- (void)eventTimePicker:(FBEventTimePickerController *)arg1 didFinishWithStartTime:(NSDate *)arg2 endTime:(NSDate *)arg3 allDay:(BOOL)arg4;
@end

