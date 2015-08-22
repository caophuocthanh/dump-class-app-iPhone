//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

#import "UIGestureRecognizerDelegate.h"

@class IGCoreTextView, NSArray, NSIndexPath, NSString, UIImageView;

@interface IGSeenStampFooterView : UICollectionReusableView <UIGestureRecognizerDelegate>
{
    BOOL _expanded;
    BOOL _oneToOne;
    NSIndexPath *_indexPath;
    id <IGSeenStampFooterDelegate> _seenStampDelegate;
    UIImageView *_eyeIcon;
    IGCoreTextView *_usernameLabel;
    NSArray *_seenUsers;
}

+ (id)seenStampStyle;
+ (float)heightForUsers:(id)arg1 expanded:(BOOL)arg2;
@property(nonatomic) BOOL oneToOne; // @synthesize oneToOne=_oneToOne;
@property(retain, nonatomic) NSArray *seenUsers; // @synthesize seenUsers=_seenUsers;
@property(retain, nonatomic) IGCoreTextView *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIImageView *eyeIcon; // @synthesize eyeIcon=_eyeIcon;
@property(nonatomic) __weak id <IGSeenStampFooterDelegate> seenStampDelegate; // @synthesize seenStampDelegate=_seenStampDelegate;
@property(nonatomic) BOOL expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)didTapStamp:(id)arg1;
- (void)setSeenUsers:(id)arg1 isOneToOneChat:(BOOL)arg2;
- (void)updateLabel;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
