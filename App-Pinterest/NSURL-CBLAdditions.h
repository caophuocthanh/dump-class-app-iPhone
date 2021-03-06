//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURL.h"

@interface NSURL (CBLAdditions)
+ (BOOL)isYoutubeURL:(id)arg1;
+ (id)youtubeIdFromURL:(id)arg1;
+ (id)googleSearchURLForQuery:(id)arg1;
+ (id)pinterestURLForLocalExperienceSelector;
+ (id)pinterestWebURLForLocalizedAboutPage;
+ (id)pinterestURLForChangelogForBranch:(id)arg1;
+ (id)pinterestURLForContextLogViewer;
+ (id)pinterestURLForExperimentSettings;
+ (id)pinterestURLForExperiencesViewer;
+ (id)pinterestURLForDebugConsole;
+ (id)pinterestURLForBranchSelector;
+ (id)pinterestURLForBrandSurveyDialogForExperience:(id)arg1;
+ (id)pinterestURLForFollowingInterests:(id)arg1;
+ (id)pinterestURLForFollowingBoards:(id)arg1;
+ (id)pinterestURLForFollowingUsers:(id)arg1;
+ (id)pinterestURLForEditPin:(id)arg1;
+ (id)pinterestURLForBoardCollaboratorsList:(id)arg1;
+ (id)pinterestURLForEditBoardDescription:(id)arg1 textInputFrame:(struct CGRect)arg2;
+ (id)pinterestURLForEditBoardCollaborators:(id)arg1;
+ (id)pinterestURLForEditBoard:(id)arg1;
+ (id)pinterestURLForCreatePlacePin;
+ (id)pinterestURLForCreatePlaceBoard;
+ (id)pinterestURLForCreateSecretBoard;
+ (id)pinterestURLForCreateBoard;
+ (id)pinterestURLForShareUserViaTwitter:(id)arg1;
+ (id)pinterestURLForShareUserViaEmail:(id)arg1;
+ (id)pinterestURLForShareUserViaSMS:(id)arg1;
+ (id)pinterestURLForShareBoardViaTwitter:(id)arg1;
+ (id)pinterestURLForShareBoardViaSMS:(id)arg1;
+ (id)pinterestURLForShareBoardViaEmail:(id)arg1;
+ (id)pinterestURLForSharePinViaFacebook:(id)arg1 andQuery:(id)arg2;
+ (id)pinterestURLForSharePinViaTwitter:(id)arg1;
+ (id)pinterestURLForSharePinViaSMS:(id)arg1;
+ (id)pinterestURLForSharePinViaEmail:(id)arg1;
+ (id)pinterestURLForConversationFromToast:(id)arg1;
+ (id)pinterestURLForConversation:(id)arg1;
+ (id)pinterestURLForPinvitationalHomefeedTakeoverExperience:(id)arg1;
+ (id)pinterestURLForUserEducationForContextualMenuWithExperience:(id)arg1;
+ (id)pinterestURLForContextualMenuForUserEducationPin:(id)arg1 location:(struct CGPoint)arg2;
+ (id)pinterestURLForContextualMenuForBoard:(id)arg1 location:(struct CGPoint)arg2;
+ (id)pinterestURLForContextualMenuForPin:(id)arg1 location:(struct CGPoint)arg2;
+ (id)mapURLForCoordinate:(CDStruct_c3b9c2ee)arg1;
+ (id)pinterestURLForBrowserPromotedPinsLearnMore;
+ (id)pinterestURLForPinningFromPackageName:(id)arg1 identifier:(id)arg2 urlSuffix:(id)arg3 imageURL:(id)arg4 description:(id)arg5 sourceURL:(id)arg6;
+ (id)pinterestURLForWebBrowserAtURLWithAutopin:(id)arg1;
+ (id)pinterestURLForSaveWebBrowserAtURL:(id)arg1;
+ (id)pinterestURLForWebBrowserAtURL:(id)arg1 withRefererURL:(id)arg2;
+ (id)pinterestURLForFeedWithName:(id)arg1 andTitle:(id)arg2 andViewParameter:(int)arg3;
+ (id)pinterestURLForMapWithPin:(id)arg1;
+ (id)pinterestURLForPlaceBoard:(id)arg1 withSelectedPin:(id)arg2;
+ (id)pinterestURLForRelatedPinsForBoard:(id)arg1;
+ (id)pinterestURLForPermissions:(int)arg1;
+ (id)pinterestURLForProfileCreateMenuFromRect:(struct CGRect)arg1;
+ (id)pinterestURLForSearchResultsFilteringMenuWithSelectedFilter:(id)arg1 fromRect:(struct CGRect)arg2;
+ (id)pinterestURLForPinFeedbackForPin:(id)arg1 fromRect:(struct CGRect)arg2;
+ (id)queryStringForFromRect:(struct CGRect)arg1;
+ (id)pinterestURLForRelatedBoards:(id)arg1;
+ (id)pinterestURLForInterestsSearch;
+ (id)pinterestURLForInterest:(id)arg1;
+ (id)pinterestURLForPinCommentsFromNotificaton:(id)arg1;
+ (id)pinterestURLForPinComments:(id)arg1 preloadComment:(id)arg2;
+ (id)pinterestURLForPinLikes:(id)arg1;
+ (id)pinterestURLForPinRepins:(id)arg1;
+ (id)pinterestURLForPinAttribution:(id)arg1;
+ (id)pinterestURLForPinSource:(id)arg1;
+ (id)pinterestURLForSendPinner:(id)arg1;
+ (id)pinterestURLForSendBoard:(id)arg1;
+ (id)pinterestURLForCheckoutPin:(id)arg1 cart:(id)arg2;
+ (id)pinterestURLForBuyablePinsFromDomain:(id)arg1 withMerchantNamed:(id)arg2;
+ (id)pinterestURLForBuyablePinsFromDomain:(id)arg1;
+ (id)pinterestURLForBuyablePinsWithSearchQuery:(id)arg1;
+ (id)pinterestURLForBuyPin:(id)arg1 cart:(id)arg2 imageURL:(id)arg3 imageRect:(id)arg4;
+ (id)pinterestURLForNetworkStory:(id)arg1;
+ (id)pinterestURLForSendPin:(id)arg1;
+ (id)pinterestURLForPinPicks:(id)arg1;
+ (id)pinterestURLForMerchantReturnPolicy:(id)arg1;
+ (id)pinterestURLForShippingAddresses;
+ (id)pinterestURLForPaymentMethods;
+ (id)pinterestURLForOrderDetails:(id)arg1;
+ (id)pinterestURLForOrderHistory;
+ (id)pinterestURLForShopPicks;
+ (id)pinterestURLForNUXInterestPicker;
+ (id)pinterestURLForNotifications;
+ (id)pinterestURLForReportBug;
+ (id)pinterestURLForReportPin:(id)arg1;
+ (id)pinterestURLForRepinPin:(id)arg1;
+ (id)pinterestURLForCoreModel:(id)arg1;
+ (id)pinterestURLForDomain:(id)arg1;
+ (id)pinterestURLForBoard:(id)arg1;
+ (id)pinterestURLForUser:(id)arg1;
+ (id)pinterestURLForPin:(id)arg1;
+ (id)pinterestURLForEverythingFeed;
+ (id)pinterestURLForHomeFeed;
+ (id)pinterestURLForPopularFeed;
+ (id)pinterestURLForWebBrowser;
+ (id)webURLForTermsAndPrivacy;
+ (id)pinterestURLForTermsAndPrivacy;
+ (id)pinterestURLForHelpWithSource:(id)arg1;
+ (id)pinterestURLForConversationSettings:(id)arg1;
+ (id)pinterestURLForSendPasswordResetEmail;
+ (id)pinterestURLForAccountSettings;
+ (id)pinterestURLForSettings;
+ (id)pinterestURLForCameraAndPhotos;
+ (id)pinterestURLForCamera;
+ (id)pinterestURLForImagePicker;
+ (id)pinterestURLForInviteFriends:(id)arg1;
+ (id)pinterestURLForFindFriends:(id)arg1;
+ (id)pinterestURLForSearch:(id)arg1;
+ (id)pinterestURLWithPath:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 andQuery:(id)arg4;
+ (id)systemURLForMapsWithQuery:(id)arg1;
+ (id)systemuRLForCalendarWithDate:(id)arg1;
+ (id)systemURLForPhoneNumber:(id)arg1;
- (id)queryValueForKey:(id)arg1;
- (BOOL)isDesirableSourceURL;
- (BOOL)isOpenablePinterestURL;
- (id)schemelessURLString;
- (id)fullPath;
- (id)domain;
- (BOOL)isGoogleAppIndexingURL;
- (BOOL)isYozioURL;
- (id)URLByAppendingQueryParams:(id)arg1;
- (id)oAuthHeaderWithMethod:(id)arg1 requestBody:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 verifier:(id)arg5 token:(id)arg6 andTokenSecret:(id)arg7;
@end

