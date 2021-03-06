//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "HPGrowingTextViewDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "PhotoEditProtocol.h"
#import "TextInputDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class HPGrowingTextView, NSArray, NSLayoutConstraint, NSMutableArray, NSString, PagingRequestInfo, Photo, UIActivityIndicatorView, UIImageView, UILabel, UITableView, UIView, UploadPhoto;

@interface PhotoNewFullScreenViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, UITextFieldDelegate, UIAlertViewDelegate, TextInputDelegate, HPGrowingTextViewDelegate, PhotoEditProtocol>
{
    int currentPhotoIndex;
    UIImageView *w_imageView;
    UIActivityIndicatorView *w_ActivityViewImage;
    float photoWidth;
    float photoHeight;
    UILabel *postDatePhoto;
    int selectRow;
    int defaultCommentPage;
    BOOL shouldScrollToNewComment;
    BOOL isLoadMorePhotoThumb;
    BOOL firstLoad;
    BOOL isShowFullScreen;
    NSString *resNameSelect;
    NSString *resAddressSelect;
    BOOL isEditMode;
    UITableView *_tableView;
    NSMutableArray *_photoList;
    NSString *_selectPhotoId;
    Photo *_selectedPhoto;
    PagingRequestInfo *_pagingPhotoRequest;
    int _totalPhoto;
    unsigned int _photoIndex;
    NSLayoutConstraint *_layoutConstraintBottomTable;
    NSArray *_commentLists;
    UploadPhoto *_editPhoto;
    PagingRequestInfo *_pagingCommentRequest;
    UIView *_chatBox;
    HPGrowingTextView *_HPTextBox;
}

@property(nonatomic) __weak HPGrowingTextView *HPTextBox; // @synthesize HPTextBox=_HPTextBox;
@property(retain, nonatomic) UIView *chatBox; // @synthesize chatBox=_chatBox;
@property(copy, nonatomic) PagingRequestInfo *pagingCommentRequest; // @synthesize pagingCommentRequest=_pagingCommentRequest;
@property(retain, nonatomic) UploadPhoto *editPhoto; // @synthesize editPhoto=_editPhoto;
@property(retain, nonatomic) NSArray *commentLists; // @synthesize commentLists=_commentLists;
@property(nonatomic) __weak NSLayoutConstraint *layoutConstraintBottomTable; // @synthesize layoutConstraintBottomTable=_layoutConstraintBottomTable;
@property(nonatomic) unsigned int photoIndex; // @synthesize photoIndex=_photoIndex;
@property(nonatomic) int totalPhoto; // @synthesize totalPhoto=_totalPhoto;
@property(copy, nonatomic) PagingRequestInfo *pagingPhotoRequest; // @synthesize pagingPhotoRequest=_pagingPhotoRequest;
@property(retain, nonatomic) Photo *selectedPhoto; // @synthesize selectedPhoto=_selectedPhoto;
@property(copy, nonatomic) NSString *selectPhotoId; // @synthesize selectPhotoId=_selectPhotoId;
@property(nonatomic) __weak NSMutableArray *photoList; // @synthesize photoList=_photoList;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL isEditMode; // @synthesize isEditMode;
- (void).cxx_destruct;
- (BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)didtouchButtonSendComment:(id)arg1;
- (void)createChatSheet;
- (void)didCancelTextInput:(id)arg1;
- (void)viewController:(id)arg1 didFinishInputWithText:(id)arg2;
- (void)objectImageDownloadDidFinish;
- (void)changeTitlePhotoWithText:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)showFullSceenPhoto:(id)arg1;
- (void)tapToRestaurantView:(id)arg1;
- (void)tapToUserView:(id)arg1;
- (void)BackAction:(id)arg1;
- (void)didEditPhotoFailureEvent:(id)arg1;
- (void)didEditPhotoSuccessEvent:(id)arg1;
- (void)didReceivedNewCommentPostedEvent:(id)arg1;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)postNewCommentForPhoto:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)didReceivedUserLogoutEvent:(id)arg1;
- (void)didReceivedUserLoginEvent:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didFinishPhotoEdit;
- (void)didTouchEditButton:(id)arg1;
- (void)didTouchShareButton:(id)arg1;
- (void)didTouchCommentUserThumbButton:(id)arg1;
- (void)loadMoreDataForScreen;
- (void)loadAllCommentForReview;
- (void)didTouchViewAllCommentButton:(id)arg1;
- (void)userDidLikeReview:(id)arg1;
- (void)didTouchLikeReviewButton:(id)arg1;
- (void)calculatePhotoIndex;
- (void)setPhotoImage:(id)arg1;
- (void)setPhoto:(id)arg1 force:(BOOL)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)initilizeHeaderView;
- (void)scrollTableToNewComment;
- (void)initializeUIControls:(BOOL)arg1;
- (void)refreshReviewCommentList;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)trackPageView;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)resetKeyboardFrame;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)showTabbar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)configHPGrowingTextView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

