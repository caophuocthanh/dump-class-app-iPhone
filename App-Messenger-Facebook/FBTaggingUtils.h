//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBTaggingUtils : NSObject
{
}

+ (void)dedupeSuggestions:(id)arg1 withLimit:(unsigned int)arg2 validationBlock:(CDUnknownBlockType)arg3;
+ (id)searchAndSortAvatarEntities:(id)arg1 queryString:(id)arg2;
+ (id)convertSuggestionsToMentionData:(id)arg1;
+ (id)convertAvatarEntitiesToMentionData:(id)arg1;
+ (id)localeAwareSortDescriptorsForOrderingPeople;
+ (id)createSortDescriptorsToBeUsedForSortingPeople:(BOOL)arg1;
+ (id)filterPredicateForSearchQuery:(id)arg1;

@end

