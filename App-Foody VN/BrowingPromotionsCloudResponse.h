//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CloudPagingResponse.h"

@class ImageResource, NSMutableArray, Promotion, PromotionCategory;

@interface BrowingPromotionsCloudResponse : CloudPagingResponse
{
    NSMutableArray *categoryList;
    PromotionCategory *currentCategory;
    Promotion *currentPromotion;
    ImageResource *imageResource;
    NSMutableArray *imageResourceList;
    NSMutableArray *currentPromotionList;
}

@property(retain, nonatomic) NSMutableArray *currentPromotionList; // @synthesize currentPromotionList;
@property(retain, nonatomic) NSMutableArray *imageResourceList; // @synthesize imageResourceList;
@property(retain, nonatomic) ImageResource *imageResource; // @synthesize imageResource;
@property(retain, nonatomic) Promotion *currentPromotion; // @synthesize currentPromotion;
@property(retain, nonatomic) PromotionCategory *currentCategory; // @synthesize currentCategory;
@property(retain, nonatomic) NSMutableArray *categoryList; // @synthesize categoryList;
- (void).cxx_destruct;
- (void)onParsingError:(id)arg1;
- (void)foundCDATA:(id)arg1 onPath:(id)arg2;
- (void)onAttribute:(id)arg1 name:(id)arg2 value:(id)arg3;
- (void)onEndElement:(id)arg1 name:(id)arg2 text:(id)arg3;
- (void)onStartElement:(id)arg1 name:(id)arg2;
- (id)init;
- (id)getResponseBrowingPromotionList;

@end
