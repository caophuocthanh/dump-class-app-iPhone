//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISwitch;

@interface IGDirectToggleTableViewCell : UITableViewCell
{
    UISwitch *_toggle;
    id <IGDirectToggleTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectToggleTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UISwitch *toggle; // @synthesize toggle=_toggle;
- (void).cxx_destruct;
- (void)toggled:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

