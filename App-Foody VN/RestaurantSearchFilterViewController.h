//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "MultipleSelectListDelegate.h"
#import "RangeSelectionProtocol.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, ResSearchModel, UIButton, UIScrollView, UISwitch, UITableView, UIView;

@interface RestaurantSearchFilterViewController : BaseViewController <UITableViewDataSource, UITableViewDelegate, MultipleSelectListDelegate, RangeSelectionProtocol>
{
    UITableView *searchFilterTable;
    int searchFilterSelectTag;
    UISwitch *switch1;
    UISwitch *switch2;
    id <RestaurantSearchFilterDelegate> delegate;
    UIScrollView *filterScrollView;
    UIView *sortHeaderView;
    UIView *filterHeaderView;
    UITableView *searchSortTable;
    UIView *pickerContainer;
    ResSearchModel *searchModel;
    UIButton *couponOnlyFilter;
    UIButton *promotionOnlyFilter;
    NSArray *bankcardSupportList;
}

@property(retain, nonatomic) NSArray *bankcardSupportList; // @synthesize bankcardSupportList;
@property(retain, nonatomic) UIButton *promotionOnlyFilter; // @synthesize promotionOnlyFilter;
@property(retain, nonatomic) UIButton *couponOnlyFilter; // @synthesize couponOnlyFilter;
@property(retain, nonatomic) ResSearchModel *searchModel; // @synthesize searchModel;
@property(retain, nonatomic) UIView *pickerContainer; // @synthesize pickerContainer;
@property(retain, nonatomic) UITableView *searchSortTable; // @synthesize searchSortTable;
@property(retain, nonatomic) UITableView *searchFilterTable; // @synthesize searchFilterTable;
@property(nonatomic) __weak UIView *filterHeaderView; // @synthesize filterHeaderView;
@property(nonatomic) __weak UIView *sortHeaderView; // @synthesize sortHeaderView;
@property(retain, nonatomic) UIScrollView *filterScrollView; // @synthesize filterScrollView;
@property(nonatomic) __weak id <RestaurantSearchFilterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)ValuePromotionChange:(id)arg1;
- (void)ValueEcardChange:(id)arg1;
- (void)didTouchPromotionOnlyButton:(id)arg1;
- (void)didTouchCouponOnlyButton:(id)arg1;
- (void)didTouchPromotionSegment:(id)arg1;
- (void)rangeSelectionController:(id)arg1 didFinishSelectRangeWith:(id)arg2;
- (void)didCancelRangeSelectionController:(id)arg1;
- (void)didTouchDoneButton:(id)arg1;
- (void)didTouchCancelButton:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)clearSelectAreas;
- (void)clearSelectedResType;
- (void)didChangeSearchFilterDistricts:(id)arg1;
- (void)didChangeSearchFilterCity:(id)arg1;
- (void)didSelectSortMode:(id)arg1;
- (void)didDoneMultipleSelectList:(id)arg1;
- (void)didCancelMultipleSelectList;
- (void)showSingleChoiceSelectList:(id)arg1 selectedProp:(id)arg2;
- (void)showHierarchyFilterSelectListWithPropList:(id)arg1 selectedProps:(id)arg2;
- (void)showGroupFilterSelectListWithMap:(id)arg1 selectedProp:(id)arg2;
- (void)showFilterSelectListWithPropList:(id)arg1 selectedProps:(id)arg2 subTitleList:(id)arg3;
- (void)showHierarchyFilterSelectBankcardListWithPropList:(id)arg1 selectedProps:(id)arg2;
- (id)trackTitleForFilterOptionScreenTag:(unsigned int)arg1;
- (id)titleForFilterOptionScreenTag:(unsigned int)arg1;
- (void)showPriceRangeSelectScreen;
- (void)didTouchSearchFilterWithTag:(int)arg1;
- (void)didTouchSearchFilterSelector:(id)arg1;
- (void)didTouchSelectDistrictButton:(id)arg1;
- (void)didTouchSelectCityButton:(id)arg1;
- (void)didReceivedLocationUpdate:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)addSearchFilterHeaderView:(float)arg1;
- (void)trackPageView;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

