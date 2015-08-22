//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface IGCommentActionView : UIView
{
    int _deleteButtonType;
    id <IGCommentActionViewDelegate> _delegate;
    UIButton *_replyButton;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(nonatomic) __weak id <IGCommentActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int deleteButtonType; // @synthesize deleteButtonType=_deleteButtonType;
- (void).cxx_destruct;
- (void)deleteButtonTapped:(id)arg1;
- (void)replyButtonTapped:(id)arg1;
@property(readonly, nonatomic) float maxWidth;
- (id)initWithFrame:(struct CGRect)arg1;

@end

