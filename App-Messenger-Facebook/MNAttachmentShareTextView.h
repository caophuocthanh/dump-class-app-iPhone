//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView, MNAttachmentShareTextViewModel;

@interface MNAttachmentShareTextView : UIView
{
    FBRichTextView *_titleLabel;
    FBRichTextView *_bodyLabel;
    FBRichTextView *_attributionLabel;
    MNAttachmentShareTextViewModel *_viewModel;
}

@property(copy, nonatomic) MNAttachmentShareTextViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

