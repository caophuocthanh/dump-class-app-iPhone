//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface PromotionCategory : NSObject
{
    NSString *_categoryId;
    NSString *_categoryName;
    NSMutableArray *_promotions;
    int _promotionTotal;
}

@property(nonatomic) int promotionTotal; // @synthesize promotionTotal=_promotionTotal;
@property(copy, nonatomic) NSMutableArray *promotions; // @synthesize promotions=_promotions;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

