//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "MNAttachmentView.h"

@class MNMapSnapshotView, MNMessageLocationAttachmentViewModel, NSString, UILabel;

@interface MNMessageLocationAttachmentView : UIControl <MNAttachmentView>
{
    MNMessageLocationAttachmentViewModel *_messageLocationViewModel;
    MNMapSnapshotView *_mapView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    id <MNMessageLocationAttachmentViewDelegate> _delegate;
}

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 withViewModel:(id)arg2;
@property(nonatomic) __weak id <MNMessageLocationAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(copy, nonatomic) id viewModel;
- (void)_handleTap;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

