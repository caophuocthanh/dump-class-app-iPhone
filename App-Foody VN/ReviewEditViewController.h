//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReviewPostViewController.h"

@class Review;

@interface ReviewEditViewController : ReviewPostViewController
{
    Review *originalReview;
}

@property(retain, nonatomic) Review *originalReview; // @synthesize originalReview;
- (void).cxx_destruct;
- (void)doDeleteReviewPhotoAtIndex:(int)arg1;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)doUpdateRestaurantReviewForUser;
- (void)didTouchCancelPostReviewButton:(id)arg1;
- (void)didTouchReviewPostButton:(id)arg1;
- (void)saveCurrentPhotoList;
- (void)userDidSelectImages:(id)arg1;
- (void)userDidSelectImage:(id)arg1;
- (void)checkSavedDraftReviewForRestaurantId:(id)arg1;
- (void)didTouchMoreReviewOption:(id)arg1;
- (void)setOtherReviewOptions;
- (void)setReviewPhotoFrame;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

