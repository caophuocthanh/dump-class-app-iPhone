//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "CBLSlidingSegmentedControlDelegate.h"

@class CBLSlidingSegmentedControl, NSString;

@interface CBLAutocompleteTypeSelectorHeaderView : UITableViewHeaderFooterView <CBLSlidingSegmentedControlDelegate>
{
    BOOL _flat;
    id <CBLAutocompleteTypeSelectorHeaderViewDelegate> _delegate;
    CBLSlidingSegmentedControl *_slidingControl;
}

@property(nonatomic) BOOL flat; // @synthesize flat=_flat;
@property(retain, nonatomic) CBLSlidingSegmentedControl *slidingControl; // @synthesize slidingControl=_slidingControl;
@property(nonatomic) __weak id <CBLAutocompleteTypeSelectorHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectSearchType:(int)arg1;
- (void)slidingSegmentedControlDidSelectIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

