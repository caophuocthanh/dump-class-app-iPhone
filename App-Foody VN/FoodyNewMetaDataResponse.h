//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudResponse.h"

@class Area, CategoryModel, CityModel, FoodyMetadata, NSMutableArray, Property, ResInfoField;

@interface FoodyNewMetaDataResponse : CloudResponse
{
    FoodyMetadata *foodyMeta;
    NSMutableArray *currentList;
    Property *currentProp;
    Property *currentPropChild;
    NSMutableArray *currentCityList;
    CityModel *currentCity;
    CategoryModel *currentCategory;
    NSMutableArray *currentCategoryList;
    Area *_currentArea;
    ResInfoField *_currentField;
    NSMutableArray *_inputValueList;
}

@property(retain, nonatomic) NSMutableArray *inputValueList; // @synthesize inputValueList=_inputValueList;
@property(retain, nonatomic) ResInfoField *currentField; // @synthesize currentField=_currentField;
@property(retain, nonatomic) Area *currentArea; // @synthesize currentArea=_currentArea;
@property(retain, nonatomic) NSMutableArray *currentCategoryList; // @synthesize currentCategoryList;
@property(retain, nonatomic) CategoryModel *currentCategory; // @synthesize currentCategory;
@property(retain, nonatomic) CityModel *currentCity; // @synthesize currentCity;
@property(retain, nonatomic) NSMutableArray *currentCityList; // @synthesize currentCityList;
@property(retain, nonatomic) Property *currentPropChild; // @synthesize currentPropChild;
@property(retain, nonatomic) Property *currentProp; // @synthesize currentProp;
@property(retain, nonatomic) NSMutableArray *currentList; // @synthesize currentList;
@property(retain, nonatomic) FoodyMetadata *foodyMeta; // @synthesize foodyMeta;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)getResponsedFoodyMetadata;
- (id)init;

@end
