//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "MNGroupItemViewDelegate.h"

@class MNGroupItem, MNGroupItemView, MNProfileImageView, NSString;

@interface MNGroupCell : UICollectionViewCell <MNGroupItemViewDelegate>
{
    MNGroupItemView *_groupItemView;
    BOOL _isDragging;
    id <MNGroupCellDelegate> _delegate;
}

@property(nonatomic) __weak id <MNGroupCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
- (void).cxx_destruct;
- (void)groupItemViewDidPressMoreFromSourceView:(id)arg1;
- (id)membersLabelFont;
- (struct CGSize)membersLabelContraintSize;
@property(readonly, nonatomic) MNProfileImageView *groupImageView;
@property(retain, nonatomic) MNGroupItem *groupItem;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

