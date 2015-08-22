//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemFeedStory, FBMemGroup, FBMemImage, FBMemInlineActivity, FBMemMessageThread, FBMemOpenGraphObject, FBMemPage, FBMemReactionAcornSportsContentSettings, FBMemReactionAcornTVContentSettings, FBMemReactionUnitUserSettings, FBMemTaggableActivity, FBMemTextWithEntities, NSArray, NSNumber, NSString;

@protocol FBQueriedReactionStoryActionFieldsProtocol <FBModelObjectProtocol>
- (NSString *)urlString;
- (FBMemReactionUnitUserSettings *)unitUserSettings;
- (FBMemReactionAcornTVContentSettings *)tvContentSettings;
- (FBMemMessageThread *)thread;
- (NSArray *)supportedLeagues;
- (NSArray *)suggestedTvItems;
- (NSArray *)suggestedSportsTeams;
- (FBMemFeedStory *)story;
- (FBMemReactionAcornSportsContentSettings *)sportsContentSettings;
- (NSString *)source;
- (NSString *)settingsToken;
- (id <FBQueriedReactionUnitFieldsProtocol>)replacementUnit;
- (NSArray *)relatedUsers;
- (BOOL)pushNotificationsEnabledValue;
- (NSNumber *)pushNotificationsEnabled;
- (id <FBQueriedProfileFieldsProtocol>)profile;
- (NSString *)photoSourceType;
- (FBMemPage *)page;
- (NSString *)nuxType;
- (NSArray *)notAiringTvItems;
- (FBMemTextWithEntities *)noItemsText;
- (NSArray *)messageRecipients;
- (FBMemTextWithEntities *)itemsListTitleText;
- (NSArray *)items;
- (NSArray *)itemActions;
- (FBMemInlineActivity *)inlineActivity;
- (FBMemGroup *)group;
- (NSArray *)followedSportsTeams;
- (FBMemTextWithEntities *)excludedItemsTitle;
- (NSArray *)excludedItemActions;
- (NSString *)entryPoint;
- (BOOL)enabledValue;
- (NSNumber *)enabled;
- (BOOL)automaticallyFollowLikedTeamsValue;
- (NSNumber *)automaticallyFollowLikedTeams;
- (NSArray *)airingTvItems;
- (FBMemTextWithEntities *)activityFreeformPhrase;
- (FBMemTaggableActivity *)activity;
- (NSArray *)actionStyleList;
- (FBMemOpenGraphObject *)actionOgObject;
- (BOOL)actionIsHighlightedValue;
- (NSNumber *)actionIsHighlighted;
- (BOOL)actionIsActivatedValue;
- (NSNumber *)actionIsActivated;
- (FBMemTextWithEntities *)actionDefaultSubmessage;
- (FBMemTextWithEntities *)actionDefaultMessage;
- (FBMemImage *)actionDefaultIcon;
- (FBMemTextWithEntities *)actionDefaultActivatedSubmessage;
- (FBMemTextWithEntities *)actionDefaultActivatedMessage;
- (FBMemImage *)actionDefaultActivatedIcon;
- (FBMemTextWithEntities *)actionActivatedMessage;
- (FBMemImage *)actionActivatedIcon;
@end
