//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MKAnnotation.h"

@class NSString, Photo;

@interface RestaurantMapAnnotation : NSObject <MKAnnotation>
{
    BOOL _special;
    NSString *resName;
    NSString *resType;
    NSString *resAddress;
    Photo *resPhoto;
    int resIndex;
    CDStruct_2c43369c coordinate;
}

@property(nonatomic) BOOL special; // @synthesize special=_special;
@property(nonatomic) int resIndex; // @synthesize resIndex;
@property(retain, nonatomic) Photo *resPhoto; // @synthesize resPhoto;
@property(copy, nonatomic) NSString *resAddress; // @synthesize resAddress;
@property(copy, nonatomic) NSString *resType; // @synthesize resType;
@property(copy, nonatomic) NSString *resName; // @synthesize resName;
@property(nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
