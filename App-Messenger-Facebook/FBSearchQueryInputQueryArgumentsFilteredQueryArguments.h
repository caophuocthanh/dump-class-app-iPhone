//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLInput.h"

@class NSArray, NSNumber, NSString;

@interface FBSearchQueryInputQueryArgumentsFilteredQueryArguments : FBGraphQLInput
{
    NSArray *_filters;
    NSString *_vertical;
    NSString *_match;
    NSString *_sort;
    NSString *_callsite;
    NSArray *_supportedExperiences;
    NSArray *_moduleSizes;
    NSArray *_supportedRoles;
    NSNumber *_promotedEntity;
}

@property(copy, nonatomic) NSNumber *promotedEntity; // @synthesize promotedEntity=_promotedEntity;
@property(copy, nonatomic) NSArray *supportedRoles; // @synthesize supportedRoles=_supportedRoles;
@property(copy, nonatomic) NSArray *moduleSizes; // @synthesize moduleSizes=_moduleSizes;
@property(copy, nonatomic) NSArray *supportedExperiences; // @synthesize supportedExperiences=_supportedExperiences;
@property(copy, nonatomic) NSString *callsite; // @synthesize callsite=_callsite;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *match; // @synthesize match=_match;
@property(copy, nonatomic) NSString *vertical; // @synthesize vertical=_vertical;
@property(copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (const struct FBGraphQLInputField *)fieldsMetadataWithOutLength:(out int *)arg1;

@end
