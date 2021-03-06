//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL;

@interface iRate : NSObject
{
    BOOL _useUIAlertControllerIfAvailable;
    BOOL _useAllAvailableLanguages;
    BOOL _promptForNewVersionIfUserRated;
    BOOL _onlyPromptIfLatestVersion;
    BOOL _onlyPromptIfMainWindowIsAvailable;
    BOOL _promptAtLaunch;
    BOOL _verboseLogging;
    BOOL _previewMode;
    BOOL _checkingForPrompt;
    BOOL _checkingForAppStoreID;
    unsigned int _appStoreID;
    unsigned int _appStoreGenreID;
    NSString *_appStoreCountry;
    NSString *_applicationName;
    NSString *_applicationVersion;
    NSString *_applicationBundleID;
    unsigned int _usesUntilPrompt;
    unsigned int _eventsUntilPrompt;
    float _daysUntilPrompt;
    float _usesPerWeekForPrompt;
    float _remindPeriod;
    NSString *_messageTitle;
    NSString *_message;
    NSString *_updateMessage;
    NSString *_cancelButtonLabel;
    NSString *_remindButtonLabel;
    NSString *_rateButtonLabel;
    NSURL *_ratingsURL;
    id <iRateDelegate> _delegate;
    id _visibleAlert;
}

+ (id)sharedInstance;
+ (void)load;
+ (void)configureForUse;
@property(nonatomic) BOOL checkingForAppStoreID; // @synthesize checkingForAppStoreID=_checkingForAppStoreID;
@property(nonatomic) BOOL checkingForPrompt; // @synthesize checkingForPrompt=_checkingForPrompt;
@property(retain, nonatomic) id visibleAlert; // @synthesize visibleAlert=_visibleAlert;
@property(nonatomic) __weak id <iRateDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *ratingsURL; // @synthesize ratingsURL=_ratingsURL;
@property(nonatomic) BOOL previewMode; // @synthesize previewMode=_previewMode;
@property(nonatomic) BOOL verboseLogging; // @synthesize verboseLogging=_verboseLogging;
@property(nonatomic) BOOL promptAtLaunch; // @synthesize promptAtLaunch=_promptAtLaunch;
@property(nonatomic) BOOL onlyPromptIfMainWindowIsAvailable; // @synthesize onlyPromptIfMainWindowIsAvailable=_onlyPromptIfMainWindowIsAvailable;
@property(nonatomic) BOOL onlyPromptIfLatestVersion; // @synthesize onlyPromptIfLatestVersion=_onlyPromptIfLatestVersion;
@property(nonatomic) BOOL promptForNewVersionIfUserRated; // @synthesize promptForNewVersionIfUserRated=_promptForNewVersionIfUserRated;
@property(nonatomic) BOOL useAllAvailableLanguages; // @synthesize useAllAvailableLanguages=_useAllAvailableLanguages;
@property(nonatomic) BOOL useUIAlertControllerIfAvailable; // @synthesize useUIAlertControllerIfAvailable=_useUIAlertControllerIfAvailable;
@property(copy, nonatomic) NSString *rateButtonLabel; // @synthesize rateButtonLabel=_rateButtonLabel;
@property(copy, nonatomic) NSString *remindButtonLabel; // @synthesize remindButtonLabel=_remindButtonLabel;
@property(copy, nonatomic) NSString *cancelButtonLabel; // @synthesize cancelButtonLabel=_cancelButtonLabel;
@property(copy, nonatomic) NSString *updateMessage; // @synthesize updateMessage=_updateMessage;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *messageTitle; // @synthesize messageTitle=_messageTitle;
@property(nonatomic) float remindPeriod; // @synthesize remindPeriod=_remindPeriod;
@property(nonatomic) float usesPerWeekForPrompt; // @synthesize usesPerWeekForPrompt=_usesPerWeekForPrompt;
@property(nonatomic) float daysUntilPrompt; // @synthesize daysUntilPrompt=_daysUntilPrompt;
@property(nonatomic) unsigned int eventsUntilPrompt; // @synthesize eventsUntilPrompt=_eventsUntilPrompt;
@property(nonatomic) unsigned int usesUntilPrompt; // @synthesize usesUntilPrompt=_usesUntilPrompt;
@property(copy, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(copy, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(copy, nonatomic) NSString *applicationName; // @synthesize applicationName=_applicationName;
@property(copy, nonatomic) NSString *appStoreCountry; // @synthesize appStoreCountry=_appStoreCountry;
@property(nonatomic) unsigned int appStoreGenreID; // @synthesize appStoreGenreID=_appStoreGenreID;
@property(nonatomic) unsigned int appStoreID; // @synthesize appStoreID=_appStoreID;
- (void).cxx_destruct;
- (void)rate;
- (void)remindLater;
- (void)declineThisVersion;
- (void)logEvent:(BOOL)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)openRatingsPageInAppStore;
- (void)applicationWillEnterForeground;
- (void)didDismissAlert:(id)arg1 withButtonAtIndex:(int)arg2;
- (void)applicationLaunched;
- (void)promptForRating;
- (BOOL)showCancelButton;
- (BOOL)showRemindButton;
- (void)promptIfAllCriteriaMet;
- (void)promptIfNetworkAvailable;
- (void)checkForConnectivityInBackground;
- (void)connectionError:(id)arg1;
- (void)connectionSucceeded;
- (void)setAppStoreIDOnMainThread:(id)arg1;
- (id)valueForKey:(id)arg1 inJSON:(id)arg2;
- (BOOL)shouldPromptForRating;
- (void)incrementEventCount;
- (void)incrementUseCount;
- (void)dealloc;
@property(readonly, nonatomic) BOOL ratedAnyVersion;
@property(nonatomic) BOOL ratedThisVersion;
- (BOOL)ratedVersion:(id)arg1;
@property(readonly, nonatomic) BOOL declinedAnyVersion;
@property(nonatomic) BOOL declinedThisVersion;
@property(readonly, nonatomic) float usesPerWeek;
@property(nonatomic) unsigned int eventCount;
@property(nonatomic) unsigned int usesCount;
@property(retain, nonatomic) NSDate *lastReminded;
@property(retain, nonatomic) NSDate *firstUsed;
- (id)init;
- (id)localizedStringForKey:(id)arg1 withDefault:(id)arg2;

@end

