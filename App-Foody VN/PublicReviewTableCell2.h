//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ResReviewTableCell.h"

@class UILabel, UIView;

@interface PublicReviewTableCell2 : ResReviewTableCell
{
    UIView *containerView;
    UIView *resHeaderView;
    UILabel *resNameLabel;
    UILabel *resAddressLabel;
}

@property(retain, nonatomic) UILabel *resAddressLabel; // @synthesize resAddressLabel;
@property(retain, nonatomic) UILabel *resNameLabel; // @synthesize resNameLabel;
@property(retain, nonatomic) UIView *resHeaderView; // @synthesize resHeaderView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
- (void).cxx_destruct;
- (void)setCellHeight:(float)arg1 withPhoto:(BOOL)arg2;
- (void)setReviewResAddress:(id)arg1;
- (void)setReviewResName:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

