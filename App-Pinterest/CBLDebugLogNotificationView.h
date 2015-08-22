//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseToastView.h"

@class CBLDebugLogEntry, UILabel, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface CBLDebugLogNotificationView : CBLBaseToastView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UITapGestureRecognizer *_tapGesture;
    UISwipeGestureRecognizer *_swipeGesture;
    CBLDebugLogEntry *_logEntry;
}

@property(retain, nonatomic) CBLDebugLogEntry *logEntry; // @synthesize logEntry=_logEntry;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeGesture; // @synthesize swipeGesture=_swipeGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)swipedDown:(id)arg1;
- (void)tapped:(id)arg1;
- (void)layoutSubviews;
- (id)initWithLogEntry:(id)arg1;

@end
