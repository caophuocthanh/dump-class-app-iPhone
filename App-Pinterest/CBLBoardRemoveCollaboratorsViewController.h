//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

@class CBLBoard, CBLUser, UIButton, UIImageView, UILabel;

@interface CBLBoardRemoveCollaboratorsViewController : CBLBaseViewController
{
    CBLBoard *_board;
    CBLUser *_collaborator;
    UIButton *_removeButton;
    UILabel *_subtitleLabel;
    UIButton *_blockButton;
    UILabel *_blockLabel;
    UIImageView *_rule;
}

@property(retain, nonatomic) UIImageView *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) UILabel *blockLabel; // @synthesize blockLabel=_blockLabel;
@property(retain, nonatomic) UIButton *blockButton; // @synthesize blockButton=_blockButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) CBLUser *collaborator; // @synthesize collaborator=_collaborator;
@property(retain, nonatomic) CBLBoard *board; // @synthesize board=_board;
- (void).cxx_destruct;
- (void)displayHUD;
- (void)didTapBlock;
- (void)didTapRemove;
- (void)viewDidLoad;

@end

