//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class NSArray, NSString, PagingRequestInfo, Restaurant, UITableView;

@interface ResReviewListViewController : BaseViewController
{
    NSString *resId;
    Restaurant *resModel;
    NSArray *reviewList;
    UITableView *reviewTable;
    PagingRequestInfo *pagingRequest;
    NSArray *selectedLevels;
    NSArray *pickerValues;
}

@property(retain, nonatomic) NSArray *pickerValues; // @synthesize pickerValues;
@property(retain, nonatomic) NSArray *selectedLevels; // @synthesize selectedLevels;
@property(retain, nonatomic) PagingRequestInfo *pagingRequest; // @synthesize pagingRequest;
@property(nonatomic) __weak UITableView *reviewTable; // @synthesize reviewTable;
@property(retain, nonatomic) NSArray *reviewList; // @synthesize reviewList;
@property(retain, nonatomic) Restaurant *resModel; // @synthesize resModel;
@property(copy, nonatomic) NSString *resId; // @synthesize resId;
- (void).cxx_destruct;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)didCancelSelectPickerWithTag:(int)arg1;
- (void)didFinishSelectPickerWithItemAtIndex:(int)arg1 withTag:(int)arg2;
- (void)didTouchReviewRatingLabel:(id)arg1;
- (void)didReceivedRestaurantUpdateEvent:(id)arg1;
- (void)didTouchResHeaderView:(id)arg1;
- (void)userPostReviewActionBegin;
- (void)didTouchReviewFilterButton:(id)arg1;
- (void)didTouchAddReviewButton:(id)arg1;
- (void)didTouchUserThumbnail:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)refreshRestaurantReviewList;
- (void)loadMoreDataForScreen;
- (void)loadMoreReviewForScreen;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)initializeUIControls:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

