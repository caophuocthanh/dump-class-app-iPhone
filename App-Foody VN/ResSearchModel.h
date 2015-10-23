//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSArray, NSString, Property;

@interface ResSearchModel : NSObject
{
    BOOL searchNearMe;
    BOOL _promotionOnly;
    BOOL _couponOnly;
    BOOL _ecardOnly;
    NSString *searchText;
    NSArray *searchKeywords;
    Property *sortBy;
    CLLocation *currentUserLoc;
    NSArray *searchResTypes;
    Property *searchCity;
    NSArray *searchDistricts;
    NSArray *searchAreas;
    NSArray *searchPurposes;
    NSArray *searchFoodStyles;
    NSArray *searchFoodKinds;
    NSArray *searchFoodDinings;
    NSArray *searchFacilities;
    NSString *maxPrice;
    NSString *minPrice;
    NSString *categoryGroupId;
    NSArray *searchBankcards;
}

@property(nonatomic) BOOL ecardOnly; // @synthesize ecardOnly=_ecardOnly;
@property(nonatomic) BOOL couponOnly; // @synthesize couponOnly=_couponOnly;
@property(nonatomic) BOOL promotionOnly; // @synthesize promotionOnly=_promotionOnly;
@property(retain, nonatomic) NSArray *searchBankcards; // @synthesize searchBankcards;
@property(copy, nonatomic) NSString *categoryGroupId; // @synthesize categoryGroupId;
@property(nonatomic) BOOL searchNearMe; // @synthesize searchNearMe;
@property(copy, nonatomic) NSString *minPrice; // @synthesize minPrice;
@property(copy, nonatomic) NSString *maxPrice; // @synthesize maxPrice;
@property(retain, nonatomic) NSArray *searchFacilities; // @synthesize searchFacilities;
@property(retain, nonatomic) NSArray *searchFoodDinings; // @synthesize searchFoodDinings;
@property(retain, nonatomic) NSArray *searchFoodKinds; // @synthesize searchFoodKinds;
@property(retain, nonatomic) NSArray *searchFoodStyles; // @synthesize searchFoodStyles;
@property(retain, nonatomic) NSArray *searchPurposes; // @synthesize searchPurposes;
@property(retain, nonatomic) NSArray *searchAreas; // @synthesize searchAreas;
@property(retain, nonatomic) NSArray *searchDistricts; // @synthesize searchDistricts;
@property(retain, nonatomic) Property *searchCity; // @synthesize searchCity;
@property(retain, nonatomic) NSArray *searchResTypes; // @synthesize searchResTypes;
@property(retain, nonatomic) CLLocation *currentUserLoc; // @synthesize currentUserLoc;
@property(retain, nonatomic) Property *sortBy; // @synthesize sortBy;
@property(retain, nonatomic) NSArray *searchKeywords; // @synthesize searchKeywords;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText;
- (void).cxx_destruct;
- (void)resetSearchFiltersForNewTextSearch;
- (id)initWithModel:(id)arg1;

@end
