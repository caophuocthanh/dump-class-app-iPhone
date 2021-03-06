//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface DropDownView : UIView
{
    UIButton *locationInfoButton_;
    UILabel *messageLabel_;
    UILabel *recurrenceLabel_;
    UIImageView *recurrenceIcon_;
    BOOL visible_;
    id <DropDownViewDelegate> _delegate;
}

+ (void)initialize;
@property(nonatomic) __weak id <DropDownViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL visible; // @synthesize visible=visible_;
- (void).cxx_destruct;
- (void)tapRecognizer:(id)arg1;
- (void)updateWithRecurrence:(id)arg1;
- (void)updateMessageTextWithItem:(id)arg1;
- (void)locationInfoButtonTapped;
- (void)createSubviews;
- (void)updateLocationInfoButtonWithSnoozeConfig:(id)arg1;
- (void)updateWithSnoozeConfig:(id)arg1 recurrence:(id)arg2;
- (void)updateWithItem:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

