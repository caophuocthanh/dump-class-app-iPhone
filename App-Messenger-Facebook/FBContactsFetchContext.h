//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSArray, NSDate, NSString;

@interface FBContactsFetchContext : FBValueObject <NSCopying>
{
    unsigned int _numberOfContactsToFetch;
    unsigned int _startFetchAtOffset;
    NSString *_fetchedUpToCursor;
    NSDate *_fetchedUpToDate;
    unsigned int _cumulativeNumberOfContactsFetched;
    NSArray *_favoritesResponse;
}

@property(readonly, copy, nonatomic) NSArray *favoritesResponse; // @synthesize favoritesResponse=_favoritesResponse;
@property(readonly, nonatomic) unsigned int cumulativeNumberOfContactsFetched; // @synthesize cumulativeNumberOfContactsFetched=_cumulativeNumberOfContactsFetched;
@property(readonly, copy, nonatomic) NSDate *fetchedUpToDate; // @synthesize fetchedUpToDate=_fetchedUpToDate;
@property(readonly, copy, nonatomic) NSString *fetchedUpToCursor; // @synthesize fetchedUpToCursor=_fetchedUpToCursor;
@property(readonly, nonatomic) unsigned int startFetchAtOffset; // @synthesize startFetchAtOffset=_startFetchAtOffset;
@property(readonly, nonatomic) unsigned int numberOfContactsToFetch; // @synthesize numberOfContactsToFetch=_numberOfContactsToFetch;
- (void).cxx_destruct;
- (id)initWithNumberOfContactsToFetch:(unsigned int)arg1 startFetchAtOffset:(unsigned int)arg2 fetchedUpToCursor:(id)arg3 fetchedUpToDate:(id)arg4 cumulativeNumberOfContactsFetched:(unsigned int)arg5 favoritesResponse:(id)arg6;

@end
