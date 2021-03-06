//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "FBClassProvidable.h"
#import "FBWebRTCCancelableUserInterface.h"
#import "MNPeopleSearchControllerDelegate.h"
#import "MNPeopleSearchControllerRTCDelegate.h"
#import "MNPeopleSearchResultsDataSourceRTCCallButtonDataSource.h"
#import "MNPeopleSuggestionsViewControllerDelegate.h"
#import "MNPeopleSuggestionsViewControllerRTCCallButtonDataSource.h"
#import "MNPeopleSuggestionsViewControllerRTCDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"

@class FBWebRTCPhoneButtonStyleExperimentContext, MNContactsRetrieverSimpleLogger, MNPeopleSearchController, MNPeopleSuggestionsViewController, NSString, UIImage, UISearchBar, UISearchDisplayController;

@interface FBWebRTCPersonPickerViewController : FBContainerViewController <UISearchBarDelegate, UISearchDisplayDelegate, MNPeopleSearchControllerDelegate, MNPeopleSearchControllerRTCDelegate, MNPeopleSearchResultsDataSourceRTCCallButtonDataSource, MNPeopleSuggestionsViewControllerDelegate, MNPeopleSuggestionsViewControllerRTCDelegate, MNPeopleSuggestionsViewControllerRTCCallButtonDataSource, FBClassProvidable, FBWebRTCCancelableUserInterface>
{
    UISearchDisplayController *_searchDisplayController;
    id <MNSuggestedContactsRetriever> _contactSuggestions;
    MNContactsRetrieverSimpleLogger *_contactsRetrieverSimpleLogger;
    FBWebRTCPhoneButtonStyleExperimentContext *_phoneButtonStyleExperimentContext;
    UIImage *_audioCallButtonImage;
    UIImage *_videoCallButtonImage;
    id <FBWebRTCPersonPickerViewControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    MNPeopleSearchController *_peopleSearchController;
    MNPeopleSuggestionsViewController *_peopleSuggestionsViewController;
}

@property(retain, nonatomic) MNPeopleSuggestionsViewController *peopleSuggestionsViewController; // @synthesize peopleSuggestionsViewController=_peopleSuggestionsViewController;
@property(retain, nonatomic) MNPeopleSearchController *peopleSearchController; // @synthesize peopleSearchController=_peopleSearchController;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <FBWebRTCPersonPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (BOOL)peopleSearchDataSourceIsVideoCallingAvailableForContact:(id)arg1;
- (id)peopleSearchDataSourceVideoCallButtonImage;
- (BOOL)peopleSearchDataSourceIsAudioCallingAvailableForContact:(id)arg1;
- (id)peopleSearchDataSourceAudioCallButtonImage;
- (void)dismissModalUserInterface;
- (id)modalPresentingViewController;
- (void)peopleSuggestionsViewController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3;
- (BOOL)peopleSuggestionsViewController:(id)arg1 isVideoCallingAvailableForContact:(id)arg2;
- (id)peopleSuggestionsViewControllerVideoCallButtonImage:(id)arg1;
- (BOOL)peopleSuggestionsViewController:(id)arg1 isAudioCallingAvailableForContact:(id)arg2;
- (id)peopleSuggestionsViewControllerAudioCallButtonImage:(id)arg1;
- (BOOL)peopleSuggestionViewController:(id)arg1 shouldDisableCellWithContact:(id)arg2;
- (BOOL)peopleSuggestionViewController:(id)arg1 shouldSelectCellWithContact:(id)arg2;
- (BOOL)peopleSuggestionsViewController:(id)arg1 didTapContact:(id)arg2;
- (BOOL)peopleSuggestionsViewController:(id)arg1 shouldShowContact:(id)arg2;
- (void)peopleSearchController:(id)arg1 didTapCallButtonForContact:(id)arg2 isVideoCall:(BOOL)arg3;
- (BOOL)peopleSearchControllerShouldSearchServer:(id)arg1;
- (BOOL)peopleSearchController:(id)arg1 shouldShowResult:(id)arg2;
- (void)peopleSearchController:(id)arg1 didSelectResult:(id)arg2 withAnalyticsExtras:(id)arg3;
- (void)peopleSearchControllerDidFinishSearch:(id)arg1;
- (id)pickedUserIdsForPeopleSearchController:(id)arg1;
- (id)searchTextForPeopleSearchController:(id)arg1;
- (BOOL)peopleSearchControllerShouldIncludeCommerce:(id)arg1;
- (BOOL)peopleSearchControllerShouldIncludeGroup:(id)arg1;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didPressCancel;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithPeopleSearchController:(id)arg1 peopleSuggestionsController:(id)arg2 contactSuggestions:(id)arg3 phoneButtonStyleExperimentContext:(id)arg4;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

