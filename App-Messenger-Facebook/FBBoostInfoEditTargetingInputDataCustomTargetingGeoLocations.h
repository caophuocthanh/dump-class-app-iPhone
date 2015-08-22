//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray;

@interface FBBoostInfoEditTargetingInputDataCustomTargetingGeoLocations : FBGraphQLInput
{
    NSArray *_fieldsRetainedFromRawSpec;
    NSArray *_countries;
    NSArray *_regionKeys;
    NSArray *_cityKeys;
    NSArray *_zipKeys;
    NSArray *_customLocations;
    NSArray *_locationTypes;
}

@property(copy, nonatomic) NSArray *locationTypes; // @synthesize locationTypes=_locationTypes;
@property(copy, nonatomic) NSArray *customLocations; // @synthesize customLocations=_customLocations;
@property(copy, nonatomic) NSArray *zipKeys; // @synthesize zipKeys=_zipKeys;
@property(copy, nonatomic) NSArray *cityKeys; // @synthesize cityKeys=_cityKeys;
@property(copy, nonatomic) NSArray *regionKeys; // @synthesize regionKeys=_regionKeys;
@property(copy, nonatomic) NSArray *countries; // @synthesize countries=_countries;
@property(copy, nonatomic) NSArray *fieldsRetainedFromRawSpec; // @synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
