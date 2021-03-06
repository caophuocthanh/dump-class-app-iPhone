//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FBSettingsSearchIndex : NSObject
{
    NSArray *_cachedPreviousResult;
    NSString *_cachedPreviousSearchText;
    NSMutableArray *_allResults;
    NSMutableDictionary *_indexedResultKey;
}

@property(retain, nonatomic) NSMutableDictionary *indexedResultKey; // @synthesize indexedResultKey=_indexedResultKey;
@property(retain, nonatomic) NSMutableArray *allResults; // @synthesize allResults=_allResults;
- (void).cxx_destruct;
- (void)_performIndexingWithSchema:(id)arg1 results:(id)arg2 indexedResultKey:(id)arg3 searchResultIndexPaths:(id)arg4;
- (id)searchResultActionsForSearchText:(id)arg1;
- (void)addSubSearchIndexableDataSource:(id)arg1 fromParentSearchResultKey:(id)arg2;
- (void)addSearchResultActions:(id)arg1;
- (id)initWithSettingsSchema:(id)arg1;

@end

