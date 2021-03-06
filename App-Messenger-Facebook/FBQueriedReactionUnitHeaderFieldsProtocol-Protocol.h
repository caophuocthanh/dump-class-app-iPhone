//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBModelObjectProtocol.h"

@class FBMemImage, FBMemTextWithEntities, NSArray, NSNumber, NSString;

@protocol FBQueriedReactionUnitHeaderFieldsProtocol <FBModelObjectProtocol>
- (FBMemTextWithEntities *)tertiaryMessage;
- (FBMemTextWithEntities *)subMessage;
- (BOOL)showUserLocationValue;
- (NSNumber *)showUserLocation;
- (NSArray *)secondaryActions;
- (NSString *)reloadSpinnerColor;
- (NSArray *)profiles;
- (NSArray *)pinLocations;
- (NSString *)pillStyle;
- (id <FBQueriedMediaFieldsProtocol>)photo;
- (FBMemTextWithEntities *)message;
- (FBMemImage *)image;
- (FBMemImage *)iconImage;
- (NSString *)headerStyle;
- (NSString *)calendarMonth;
- (NSString *)calendarDay;
- (id <FBQueriedReactionStoryActionFieldsProtocol>)action;
@end

