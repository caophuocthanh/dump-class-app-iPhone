//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLModelObject.h"

@class NSDateComponents;

@interface CBLCookTimeData : CBLModelObject
{
    NSDateComponents *_total;
    NSDateComponents *_cook;
    NSDateComponents *_prep;
}

+ (id)propertyTransformerClasses;
@property(copy, nonatomic) NSDateComponents *prep; // @synthesize prep=_prep;
@property(copy, nonatomic) NSDateComponents *cook; // @synthesize cook=_cook;
@property(copy, nonatomic) NSDateComponents *total; // @synthesize total=_total;
- (void).cxx_destruct;
- (BOOL)hasData;

@end

