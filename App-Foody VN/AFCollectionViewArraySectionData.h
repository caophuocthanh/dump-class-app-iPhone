//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFCollectionViewSectionData.h"

@class NSArray, NSDictionary, NSString;

@interface AFCollectionViewArraySectionData : NSObject <AFCollectionViewSectionData>
{
    NSArray *_dataObjects;
    NSDictionary *_supplementaryDataObjects;
    NSDictionary *_supplementaryViewReuseLookup;
}

@property(retain, nonatomic) NSDictionary *supplementaryViewReuseLookup; // @synthesize supplementaryViewReuseLookup=_supplementaryViewReuseLookup;
@property(retain, nonatomic) NSDictionary *supplementaryDataObjects; // @synthesize supplementaryDataObjects=_supplementaryDataObjects;
@property(retain, nonatomic) NSArray *dataObjects; // @synthesize dataObjects=_dataObjects;
- (void).cxx_destruct;
- (id)reuseIdentifierForSupplementaryViewOfKind:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

