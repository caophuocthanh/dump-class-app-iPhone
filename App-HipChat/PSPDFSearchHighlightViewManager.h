//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSPDFSearchHighlightViewManager : NSObject
{
    id <PSPDFSearchHighlightViewManagerDataSource> _dataSource;
}

@property(readonly, nonatomic) __weak id <PSPDFSearchHighlightViewManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)addHighlightSearchResults:(id)arg1 animated:(BOOL)arg2;
- (void)animateSearchHighlight:(id)arg1;
- (void)iterateHighlightViewsWithBlock:(CDUnknownBlockType)arg1;
- (id)highlightViewForSearchResult:(id)arg1 inPageView:(id)arg2;
- (void)clearHighlightedSearchResultsAnimated:(BOOL)arg1;
- (BOOL)hasVisibleSearchResults;
- (id)initWithDataSource:(id)arg1;
- (id)init;
- (Class)classForClass:(Class)arg1;

@end

